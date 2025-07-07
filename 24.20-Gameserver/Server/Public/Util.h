#pragma once

#include "framework.h"

#include "Addresses.h"

#define RESULT_DECL void*const RESULT_PARAM
#define LOG(fmt, ...) std::cout << "LogFortMP: " << std::format(fmt, __VA_ARGS__) << "\n";
#define DEBUG
#ifdef DEBUG
#define DEBUG_LOG(fmt, ...) std::cout << "LogFortMPDebug: " << std::format(fmt, __VA_ARGS__) << "\n";
#else
#define DEBUG_LOG(fmt, ...)
#endif

class THook
{
private:
    void* Hook;
    void** Original;

public:
    inline THook(void* Hook, auto Original = nullptr)
    {
        this->Hook = Hook;
        this->Original = (void**)Original;
    }

    void VFT(void** VTable, int Index);
    void MinHook(uint64_t Address, bool bEnable = false);
    void Exec(UFunction* Function);

    static inline void Init()
    {
        if (MH_Initialize() != MH_OK)
            LOG("Failed to Init MinHook");
    }

    static inline void Ret() { return; }
    static inline bool RetFalse() { return false; }
    static inline bool RetTrue() { return true; }
};

template<class T>
inline T* Cast(UObject* Src)
{
    return Src && (Src->IsA(T::StaticClass())) ? (T*)Src : nullptr;
}

namespace Util
{
    inline void Null(uintptr_t Address)
    {
        DWORD oldProtection;
        if (VirtualProtect(reinterpret_cast<void*>(Address), sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &oldProtection))
        {
            *reinterpret_cast<uint8_t*>(Address) = 0xC3;

            DWORD tempProtection;
            VirtualProtect(reinterpret_cast<void*>(Address), sizeof(uint8_t), oldProtection, &tempProtection);
        }
    }

    inline void Patch(uintptr_t Func, uint8_t Byte)
    {
        DWORD dwProt;
        VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

        *(uint8_t*)Func = Byte;

        DWORD dwTemp;
        VirtualProtect((PVOID)Func, 1, dwProt, &dwTemp);
    }

    inline UObject* (*StaticFindObject_)(UClass* Class, UObject* Package, const wchar_t* OrigInName, bool ExactClass) = decltype(StaticFindObject_)(InSDKUtils::GetImageBase() + Addresses::StaticFindObject);
    template <typename T>
    inline T* StaticFindObject(std::string ObjectPath, UClass* Class = nullptr)
    {
        return (T*)StaticFindObject_(Class, nullptr, std::wstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
    }

    inline UObject* (*StaticLoadObject_)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation) = decltype(StaticLoadObject_)(InSDKUtils::GetImageBase() + Addresses::StaticLoadObject);
    template <typename T>
    inline T* StaticLoadObject(std::string Path, UClass* InClass = T::StaticClass(), UObject* Outer = nullptr)
    {
        return (T*)StaticLoadObject_(InClass, Outer, std::wstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
    }

    inline __int64(*DispatchRequest)(__int64 a1, __int64* a2, int a3);
    inline __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
    {
        return DispatchRequest(a1, a2, 3);
    }
}
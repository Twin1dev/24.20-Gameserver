#pragma once

#include "framework.h"

#include "Addresses.h"
#include <random>

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

inline float FRand()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);
    float random_number = dis(gen);

    return random_number;
}

#define INV_PI			(0.31830988618f)
#define HALF_PI			(1.57079632679f)
#define PI 					(3.1415926535897932f)

inline void SinCos(float* ScalarSin, float* ScalarCos, float  Value)
{
    // Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
    float quotient = (INV_PI * 0.5f) * Value;
    if (Value >= 0.0f)
    {
        quotient = (float)((int)(quotient + 0.5f));
    }
    else
    {
        quotient = (float)((int)(quotient - 0.5f));
    }
    float y = Value - (2.0f * PI) * quotient;

    // Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
    float sign;
    if (y > HALF_PI)
    {
        y = PI - y;
        sign = -1.0f;
    }
    else if (y < -HALF_PI)
    {
        y = -PI - y;
        sign = -1.0f;
    }
    else
    {
        sign = +1.0f;
    }

    float y2 = y * y;

    // 11-degree minimax approximation
    *ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

    // 10-degree minimax approximation
    float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
    *ScalarCos = sign * p;
}

inline FVector RotatorToVector(FRotator Rotator)
{
    float CP, SP, CY, SY;

    SinCos(&SP, &CP, Rotator.Pitch * (PI / 180.0f));
    SinCos(&SY, &CY, Rotator.Yaw * (PI / 180.0f));

    FVector NewV = FVector(CP * CY, CP * SY, SP);

    return NewV;
}

inline FQuat Quaternion(FRotator Rotator)
{
    const float DEG_TO_RAD = PI / (180.f);
    const float RADS_DIVIDED_BY_2 = DEG_TO_RAD / 2.f;
    float SP, SY, SR;
    float CP, CY, CR;

    SinCos(&SP, &CP, Rotator.Pitch * RADS_DIVIDED_BY_2);
    SinCos(&SY, &CY, Rotator.Yaw * RADS_DIVIDED_BY_2);
    SinCos(&SR, &CR, Rotator.Roll * RADS_DIVIDED_BY_2);

    FQuat RotationQuat;
    RotationQuat.X = CR * SP * SY - SR * CP * CY;
    RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
    RotationQuat.Z = CR * CP * SY - SR * SP * CY;
    RotationQuat.W = CR * CP * CY + SR * SP * SY;

    return RotationQuat;
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

    inline AActor* SpawnActor(FTransform Transform, UClass* Class)
    {
        return UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), Class, Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, nullptr), Transform);
    }

    inline AActor* SpawnActor(FVector Location, FRotator Rotation, UClass* Class)
    {
        FTransform Transform{};
        Transform.Rotation = Quaternion(Rotation);
        Transform.Translation = Location;
        Transform.Scale3D = FVector{ 1,1,1 };

        return SpawnActor(Transform, Class);
    }

    inline AFortPickupAthena* SpawnPickup(FFortItemEntry Entry, FVector Loc, EFortPickupSourceTypeFlag SourceFlag = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, bool bToss = true)
    {
        if (auto Pickup = (AFortPickupAthena*)SpawnActor(Loc, {}, AFortPickupAthena::StaticClass()))
        {
            if (Entry.Count <= 0)
                return nullptr;

            if (Entry.LoadedAmmo == 0 && SourceFlag != EFortPickupSourceTypeFlag::Player)
            {
              /*  if (auto WeaponDef = Cast<UFortWeaponItemDefinition>(Entry.ItemDefinition))
                    Entry.LoadedAmmo = Looting::GetClipSize(WeaponDef);*/
            }

            Pickup->PrimaryPickupItemEntry.ItemDefinition = Entry.ItemDefinition;
            Pickup->PrimaryPickupItemEntry.Count = Entry.Count;
            Pickup->PrimaryPickupItemEntry.LoadedAmmo = Entry.LoadedAmmo;
            Pickup->PrimaryPickupItemEntry.Level = Entry.Level;
            //Pickup->PawnWhoDroppedPickup = Pawn;
            Pickup->bRandomRotation = SourceFlag == EFortPickupSourceTypeFlag::Container;

            if (Pawn && SourceFlag == EFortPickupSourceTypeFlag::Player && SpawnSource == EFortPickupSpawnSource::Unset)
            {
                FVector Forward = Pawn->GetActorForwardVector();
                FVector Right = Pawn->GetActorRightVector();

                float AngleOffsetDeg = ((float)(rand() % 2001) / 100.0f) - 10.0f;
                float AngleRad = AngleOffsetDeg * (3.14159265f / 180.0f);

                float CosYaw = cosf(AngleRad);
                float SinYaw = sinf(AngleRad);

                FVector TossDirection;
                TossDirection.X = Forward.X * CosYaw - Forward.Y * SinYaw;
                TossDirection.Y = Forward.X * SinYaw + Forward.Y * CosYaw;
                TossDirection.Z = Forward.Z;

                float SideOffset = ((float)(rand() % 20001) / 100.0f) - 100.0f;

                Loc += TossDirection * 500.f + Right * (SideOffset * 0.2f);
            }

            if (bToss)
                Pickup->TossPickup(Loc, Pawn, 0, true, false, SourceFlag, SpawnSource);

            if (SourceFlag == EFortPickupSourceTypeFlag::Container)
            {
                Pickup->bTossedFromContainer = true;
                Pickup->OnRep_TossedFromContainer();
            }

            return Pickup;
        }

        return nullptr;
    }

    inline AFortPickupAthena* SpawnPickup(UFortItemDefinition* ItemDef, FVector Loc, int Count, EFortPickupSourceTypeFlag SourceFlag = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, bool bToss = true)
    {
        FFortItemEntry NewEntry = {};

        int LoadedAmmo = 0;

  /*      if (auto WeaponDef = Cast<UFortWeaponItemDefinition>(ItemDef))
            NewEntry.LoadedAmmo = Looting::GetClipSize(WeaponDef)*///;

        NewEntry.ItemDefinition = ItemDef;
        NewEntry.Count = Count;
        NewEntry.Level = 0;
        NewEntry.LoadedAmmo = LoadedAmmo;

        return SpawnPickup(NewEntry, Loc, SourceFlag, SpawnSource, Pawn, bToss);
    }

    inline float GetMaxStackSize(UFortItemDefinition* Def)
    {
        float MaxStackSize = 0;

        if (!Def->MaxStackSize.Curve.CurveTable)
            MaxStackSize = Def->MaxStackSize.Value;
        else
        {
            EEvaluateCurveTableResult Result;
            UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(Def->MaxStackSize.Curve.CurveTable, Def->MaxStackSize.Curve.RowName, 0, &Result, &MaxStackSize, FString());

            if (Result == EEvaluateCurveTableResult::RowNotFound)
            {
                LOG("WARNING: Failed to find MaxStackSize Row for Def");
            }
        }

        return MaxStackSize;
    }
}
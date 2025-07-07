#include "Server/Public/Util.h"

#include "Server/Public/Addresses.h"

void THook::VFT(void** VTable, int Index)
{
	if (Original)
		*Original = VTable[Index];

	DWORD dwProt;
	VirtualProtect(&VTable[Index], 8, PAGE_EXECUTE_READWRITE, &dwProt);

	VTable[Index] = Hook;

	DWORD dwTemp;
	VirtualProtect(&VTable[Index], 8, dwProt, &dwTemp);
}

void THook::MinHook(uint64_t Address, bool bEnable)
{
	if (MH_CreateHook((void*)(Addresses::BaseAddress + Address), Hook, (void**)Original) != MH_OK)
		LOG("Failed to Create: 0x{:x}", Addresses::BaseAddress + Address);

	if (bEnable)
		MH_EnableHook((void*)(Addresses::BaseAddress + Address));
}

void THook::Exec(UFunction* Function)
{
	auto& Exec = Function->ExecFunction;

	if (Original)
		*Original = Exec;

	Exec = (UFunction::FNativeFuncPtr)Hook;
}
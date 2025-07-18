﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeDebugMenuRuntime

#include "Basic.hpp"

#include "CreativeDebugMenuRuntime_classes.hpp"
#include "CreativeDebugMenuRuntime_parameters.hpp"


namespace SDK
{

// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
// (Final, Native, Public)

void UFortControllerComponent_CreativeDebugger::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnMutatorUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
// (Final, Native, Public)
// Parameters:
// class AFortPlayerController*            PC                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CreativeDebugger::OnPlayerSpawned(class AFortPlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CreativeDebugger", "OnPlayerSpawned");

	Params::FortControllerComponent_CreativeDebugger_OnPlayerSpawned Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


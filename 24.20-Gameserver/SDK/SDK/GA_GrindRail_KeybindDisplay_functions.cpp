﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GrindRail_KeybindDisplay

#include "Basic.hpp"

#include "GA_GrindRail_KeybindDisplay_classes.hpp"
#include "GA_GrindRail_KeybindDisplay_parameters.hpp"


namespace SDK
{

// Function GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C.ExecuteUbergraph_GA_GrindRail_KeybindDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GrindRail_KeybindDisplay_C::ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "ExecuteUbergraph_GA_GrindRail_KeybindDisplay");

	Params::GA_GrindRail_KeybindDisplay_C_ExecuteUbergraph_GA_GrindRail_KeybindDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_GrindRail_KeybindDisplay_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}


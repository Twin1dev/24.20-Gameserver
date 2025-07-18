﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CosmeticLoadoutSelector

#include "Basic.hpp"

#include "CosmeticLoadoutSelector_classes.hpp"
#include "CosmeticLoadoutSelector_parameters.hpp"


namespace SDK
{

// Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.ExecuteUbergraph_CosmeticLoadoutSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutSelector_C::ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutSelector_C", "ExecuteUbergraph_CosmeticLoadoutSelector");

	Params::CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnLoadoutSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutSelector_C::OnLoadoutSet(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutSelector_C", "OnLoadoutSet");

	Params::CosmeticLoadoutSelector_C_OnLoadoutSet Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnNumLoadoutsFound
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NumLoadouts                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutSelector_C::OnNumLoadoutsFound(int32 NumLoadouts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutSelector_C", "OnNumLoadoutsFound");

	Params::CosmeticLoadoutSelector_C_OnNumLoadoutsFound Parms{};

	Parms.NumLoadouts = NumLoadouts;

	UObject::ProcessEvent(Func, &Parms);
}

}


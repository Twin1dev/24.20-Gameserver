﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RezOut_NPC

#include "Basic.hpp"

#include "GCN_RezOut_NPC_classes.hpp"
#include "GCN_RezOut_NPC_parameters.hpp"


namespace SDK
{

// Function GCN_RezOut_NPC.GCN_RezOut_NPC_C.ExecuteUbergraph_GCN_RezOut_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_RezOut_NPC_C::ExecuteUbergraph_GCN_RezOut_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezOut_NPC_C", "ExecuteUbergraph_GCN_RezOut_NPC");

	Params::GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_RezOut_NPC.GCN_RezOut_NPC_C.Pre-Sequence Change
// (BlueprintCallable, BlueprintEvent)

void AGCN_RezOut_NPC_C::Pre_Sequence_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezOut_NPC_C", "Pre-Sequence Change");

	UObject::ProcessEvent(Func, nullptr);
}

}


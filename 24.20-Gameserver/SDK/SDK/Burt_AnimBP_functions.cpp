﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Burt_AnimBP

#include "Basic.hpp"

#include "Burt_AnimBP_classes.hpp"
#include "Burt_AnimBP_parameters.hpp"


namespace SDK
{

// Function Burt_AnimBP.Burt_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBurt_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "AnimGraph");

	Params::Burt_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_FallExit
// (BlueprintCallable, BlueprintEvent)

void UBurt_AnimBP_C::AnimNotify_FallExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "AnimNotify_FallExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandAddExit
// (BlueprintCallable, BlueprintEvent)

void UBurt_AnimBP_C::AnimNotify_LandAddExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "AnimNotify_LandAddExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandEnter
// (BlueprintCallable, BlueprintEvent)

void UBurt_AnimBP_C::AnimNotify_LandEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "AnimNotify_LandEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Burt_AnimBP.Burt_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3
// (BlueprintEvent)

void UBurt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Burt_AnimBP.Burt_AnimBP_C.ExecuteUbergraph_Burt_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBurt_AnimBP_C::ExecuteUbergraph_Burt_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "ExecuteUbergraph_Burt_AnimBP");

	Params::Burt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Burt_AnimBP.Burt_AnimBP_C.Fauna Idle
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose_Idle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       Fauna_Idle_0                                           (Parm, OutParm, NoDestructor)

void UBurt_AnimBP_C::Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "Fauna Idle");

	Params::Burt_AnimBP_C_Fauna_Idle Parms{};

	Parms.InPose_Idle = std::move(InPose_Idle);

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Idle_0 != nullptr)
		*Fauna_Idle_0 = std::move(Parms.Fauna_Idle_0);
}


// Function Burt_AnimBP.Burt_AnimBP_C.Fauna IdleTurn
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose_IdleTurn                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       Fauna_IdleTurn_0                                       (Parm, OutParm, NoDestructor)

void UBurt_AnimBP_C::Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Burt_AnimBP_C", "Fauna IdleTurn");

	Params::Burt_AnimBP_C_Fauna_IdleTurn Parms{};

	Parms.InPose_IdleTurn = std::move(InPose_IdleTurn);

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_IdleTurn_0 != nullptr)
		*Fauna_IdleTurn_0 = std::move(Parms.Fauna_IdleTurn_0);
}

}


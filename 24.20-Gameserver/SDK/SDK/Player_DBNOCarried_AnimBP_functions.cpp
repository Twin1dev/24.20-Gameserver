﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_DBNOCarried_AnimBP

#include "Basic.hpp"

#include "Player_DBNOCarried_AnimBP_classes.hpp"
#include "Player_DBNOCarried_AnimBP_parameters.hpp"


namespace SDK
{

// Function Player_DBNOCarried_AnimBP.Player_DBNOCarried_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UPlayer_DBNOCarried_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNOCarried_AnimBP_C", "AnimGraph");

	Params::Player_DBNOCarried_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Player_DBNOCarried_AnimBP.Player_DBNOCarried_AnimBP_C.ExecuteUbergraph_Player_DBNOCarried_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_DBNOCarried_AnimBP_C::ExecuteUbergraph_Player_DBNOCarried_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNOCarried_AnimBP_C", "ExecuteUbergraph_Player_DBNOCarried_AnimBP");

	Params::Player_DBNOCarried_AnimBP_C_ExecuteUbergraph_Player_DBNOCarried_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


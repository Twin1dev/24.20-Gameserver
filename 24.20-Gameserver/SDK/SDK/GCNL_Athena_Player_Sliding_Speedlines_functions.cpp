﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_Player_Sliding_Speedlines

#include "Basic.hpp"

#include "GCNL_Athena_Player_Sliding_Speedlines_classes.hpp"
#include "GCNL_Athena_Player_Sliding_Speedlines_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.On View Target Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OldViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           NewViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::On_View_Target_Changed(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "On View Target Changed");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed Parms{};

	Parms.PlayerController = PlayerController;
	Parms.OldViewTarget = OldViewTarget;
	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.OnLoopingStartGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UFXSystemComponent*>&ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_Player_Sliding_Speedlines_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "OnLoopingStartGeneric");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.OnRemovalGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UFXSystemComponent*>&ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*               BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "OnRemovalGeneric");

	Params::GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.RefreshDustStateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Player_Sliding_Speedlines_C::RefreshDustStateTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "RefreshDustStateTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.UpdateDustState
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Player_Sliding_Speedlines_C::UpdateDustState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "UpdateDustState");

	UObject::ProcessEvent(Func, nullptr);
}

}


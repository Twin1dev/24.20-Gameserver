﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_GhostMode

#include "Basic.hpp"

#include "GCN_Loop_GhostMode_classes.hpp"
#include "GCN_Loop_GhostMode_parameters.hpp"


namespace SDK
{

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_GhostMode_C::ExecuteUbergraph_GCN_Loop_GhostMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "ExecuteUbergraph_GCN_Loop_GhostMode");

	Params::GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc
// (BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc
// (BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.Highlight Lerp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight*                  Highlight                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_GhostMode_C::Highlight_Lerp(double Alpha, struct FPawnHighlight* Highlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "Highlight Lerp");

	Params::GCN_Loop_GhostMode_C_Highlight_Lerp Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Highlight != nullptr)
		*Highlight = std::move(Parms.Highlight);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UParticleSystemComponent*>&ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_Loop_GhostMode_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "OnLoopingStart");

	Params::GCN_Loop_GhostMode_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UParticleSystemComponent*>&ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*               BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_GhostMode_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_GhostMode_C", "OnRemoval");

	Params::GCN_Loop_GhostMode_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}


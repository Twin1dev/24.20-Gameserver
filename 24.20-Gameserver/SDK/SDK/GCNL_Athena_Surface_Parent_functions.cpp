﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_Surface_Parent

#include "Basic.hpp"

#include "GCNL_Athena_Surface_Parent_classes.hpp"
#include "GCNL_Athena_Surface_Parent_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.ExecuteUbergraph_GCNL_Athena_Surface_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Surface_Parent_C::ExecuteUbergraph_GCNL_Athena_Surface_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Surface_Parent_C", "ExecuteUbergraph_GCNL_Athena_Surface_Parent");

	Params::GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UParticleSystemComponent*>&ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_Surface_Parent_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Surface_Parent_C", "OnLoopingStart");

	Params::GCNL_Athena_Surface_Parent_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnPlayerFootstep
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Surface_Parent_C::OnPlayerFootstep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Surface_Parent_C", "OnPlayerFootstep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UParticleSystemComponent*>&ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*               BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Surface_Parent_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Surface_Parent_C", "OnRemoval");

	Params::GCNL_Athena_Surface_Parent_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}


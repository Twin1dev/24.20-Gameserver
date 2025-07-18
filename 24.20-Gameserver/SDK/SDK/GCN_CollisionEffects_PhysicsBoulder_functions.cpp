﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_CollisionEffects_PhysicsBoulder

#include "Basic.hpp"

#include "GCN_CollisionEffects_PhysicsBoulder_classes.hpp"
#include "GCN_CollisionEffects_PhysicsBoulder_parameters.hpp"


namespace SDK
{

// Function GCN_CollisionEffects_PhysicsBoulder.GCN_CollisionEffects_PhysicsBoulder_C.OnBurstNiagara
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UNiagaraComponent*>& ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const TArray<class UAudioComponent*>&   AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*               BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCN_CollisionEffects_PhysicsBoulder_C::OnBurstNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_CollisionEffects_PhysicsBoulder_C", "OnBurstNiagara");

	Params::GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}


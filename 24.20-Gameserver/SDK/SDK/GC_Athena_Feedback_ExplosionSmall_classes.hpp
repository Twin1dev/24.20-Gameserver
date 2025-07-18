﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Athena_Feedback_ExplosionSmall

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Athena_Feedback_ExplosionSmall.GC_Athena_Feedback_ExplosionSmall_C
// 0x0000 (0x0210 - 0x0210)
class UGC_Athena_Feedback_ExplosionSmall_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_Feedback_ExplosionSmall_C">();
	}
	static class UGC_Athena_Feedback_ExplosionSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Athena_Feedback_ExplosionSmall_C>();
	}
};

}


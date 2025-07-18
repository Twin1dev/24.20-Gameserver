﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_OutsideSafeZoneDamage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C
// 0x0008 (0x0218 - 0x0210)
class UGCN_Athena_OutsideSafeZoneDamage_C final : public UFortGameplayCueNotify_Burst
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage(int32 EntryPoint);

	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;
	void ZapFX(int32 ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_OutsideSafeZoneDamage_C">();
	}
	static class UGCN_Athena_OutsideSafeZoneDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_OutsideSafeZoneDamage_C>();
	}
};

}


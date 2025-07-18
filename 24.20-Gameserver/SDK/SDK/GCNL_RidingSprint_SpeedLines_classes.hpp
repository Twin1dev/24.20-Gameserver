﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_RidingSprint_SpeedLines

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
// 0x0018 (0x0978 - 0x0960)
class AGCNL_RidingSprint_SpeedLines_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0960(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                             SpeedLinesAudio;                                   // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SpeedlinesAudioComp;                               // 0x0970(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_RidingSprint_SpeedLines_C">();
	}
	static class AGCNL_RidingSprint_SpeedLines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_RidingSprint_SpeedLines_C>();
	}
};

}


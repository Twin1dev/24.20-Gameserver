﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Zipline_Travel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Zipline_Travel.GCNL_Zipline_Travel_C
// 0x0020 (0x0A60 - 0x0A40)
class AGCNL_Zipline_Travel_C final : public AFortGameplayCueNotifyLoop_ZiplineTravel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        AttachSoundAudioComp;                              // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  NewVar_0;                                          // 0x0A50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCNL_Zipline_Travel(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Zipline_Travel_C">();
	}
	static class AGCNL_Zipline_Travel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Zipline_Travel_C>();
	}
};

}


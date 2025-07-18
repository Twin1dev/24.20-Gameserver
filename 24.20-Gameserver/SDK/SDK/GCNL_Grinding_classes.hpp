﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Grinding

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ColorSelect_structs.hpp"
#include "GrindRailRuntime_structs.hpp"
#include "GrindRailRuntime_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Grinding.GCNL_Grinding_C
// 0x0138 (0x0C28 - 0x0AF0)
class AGCNL_Grinding_C final : public AFortGameplayCueNotifyLoop_Grinding
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortSoundIndicatorComponent*           FortSoundIndicator;                                // 0x0AF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6; // 0x0B00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6; // 0x0B04(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B05[0x3];                                      // 0x0B05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AlphaCurve;                                        // 0x0B08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     GrindRailFX;                                       // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_GrindingComponent_C*                Cached_Grinding_Component;                         // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BoostEndAudio;                                     // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrindAudioLoop;                                    // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrindAudioStart;                                   // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn_0;                                      // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrindAudioStop;                                    // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EColorSelect                                  ColorEnum;                                         // 0x0B48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B49[0x7];                                      // 0x0B49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortGrindRail*                         GrindRail;                                         // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABuildingGameplayActor*                 GrindingRail;                                      // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           GrindAudioLoopHandle;                              // 0x0B60(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        AudioSpeedParam;                                   // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        TurnAudio;                                         // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        AudioForwardParam;                                 // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioBoostParam;                                   // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAudioBoosted;                                     // 0x0B88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B89[0x7];                                      // 0x0B89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        BoostAudio;                                        // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        JumpOffAudio;                                      // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        AudioCurveParam;                                   // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioSpeedInterp;                                  // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioForwardInterp;                                // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioBoostRelease;                                 // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioCurveMinInput;                                // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioCurveInterp;                                  // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioCurveMaxInput;                                // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioGrindingParam;                                // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioBoostAttack;                                  // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioGrindingInterp;                               // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioSlowDownParam;                                // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AudioSlowDownInterp;                               // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StopLoopSound;                                     // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StartLoopSound;                                    // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             JumpUpSound;                                       // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LeanForwardSound;                                  // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLeanForward;                                    // 0x0C20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C21[0x3];                                      // 0x0C21(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NotRenderedDisableEffectsTime;                     // 0x0C24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AllowAudio();
	void AlphaCurve__FinishedFunc();
	void AlphaCurve__UpdateFunc();
	void ExecuteUbergraph_GCNL_Grinding(int32 EntryPoint);
	void GrindAudioState(bool Start);
	void HandleGrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnFeetLanded();
	void OnForwardChanged(bool bNewState);
	void OnGrindRailBoosterMode(EGrindRailBoosterMode PreviousBoosterMode);
	void OnGrindRailSprint(bool bNewIsSprinting);
	void OnJumpedOff();
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void UpdateAudioParams();
	void UpdateGrindAudioLoop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Grinding_C">();
	}
	static class AGCNL_Grinding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Grinding_C>();
	}
};

}


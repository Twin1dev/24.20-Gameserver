﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HidingProp_WilliePete

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_HidingProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// 0x0238 (0x1638 - 0x1400)
class AB_HidingProp_WilliePete_C final : public AB_HidingProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_HidingProp_WilliePete_C;          // 0x1400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   overlapCylinder;                                   // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        WilliePete_Ambient_Loop;                           // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Geyser;                                            // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Whirlpool_01;                                    // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_WilliePete_SurfaceVerticalSplash;                // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       OverlappedFortProjectileMovementComponent;         // 0x1430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           OverlappedStandardProjectileMovementComponent;     // 0x1438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TeleportingNonPawn;                                // 0x1440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             SphereOverlapResult;                               // 0x1448(0x00E0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        ProjectileSpeedCeiling;                            // 0x1528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ProjectileExitFVectorRotation;                     // 0x1530(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         WaterLevel;                                        // 0x1548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Exit;                                           // 0x154C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Enter;                                          // 0x1550(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1554[0x4];                                     // 0x1554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         EnabledValue;                                      // 0x1558(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         LaunchHeightValue;                                 // 0x1580(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                  LaunchPawn;                                        // 0x15A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            LaunchGrantedEffectHandle;                         // 0x15B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_Quest;                                           // 0x15B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 SpawnedWaterBody;                                  // 0x15D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_ScreenFX;                                       // 0x15E0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          isOnTestMap;                                       // 0x15E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15E5[0x3];                                     // 0x15E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Launch_Sound;                                      // 0x15E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AdjustedLocation;                                  // 0x15F0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          skipAnimForLaunch;                                 // 0x1608(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1609[0x7];                                     // 0x1609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  ExitingPawn;                                       // 0x1610(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMovementComponent*                     OverlappedMovementComponent;                       // 0x1618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ProjectileSpeedMult;                               // 0x1620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PickupSpeedMult;                                   // 0x1628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSetSilentDie;                                     // 0x1630(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          bSetSpawnedWaterBody;                              // 0x1631(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Complete_Setup();
	void ExecuteUbergraph_B_HidingProp_WilliePete(int32 EntryPoint);
	void HelperLocationLogger(const class FString& InString);
	void Non_Pawn_Actor_Destroyed(class AActor* DestroyedActor);
	void Non_Pawn_Teleport(class AActor* TeleportingActor);
	void OnReady_74044DD44988556292500EB8F289359F(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_AdjustedLocation();
	void OnRep_bSetSilentDie();
	void OnRep_bSetSpawnedWaterBody();
	void ReceiveBeginPlay();
	void Remove_GE();
	void ResetGravity(const struct FHitResult& Hit);
	void StopHiding(const class AFortPawn* Pawn_0);
	void TeleportExitSpeed(const struct FVector& ExitFVector, double EnterSpeed, double OverrideSpeed, double MinimumSpeed, bool ForceSpeedOverride, struct FVector* TeleportExitVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HidingProp_WilliePete_C">();
	}
	static class AB_HidingProp_WilliePete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HidingProp_WilliePete_C>();
	}
};

}


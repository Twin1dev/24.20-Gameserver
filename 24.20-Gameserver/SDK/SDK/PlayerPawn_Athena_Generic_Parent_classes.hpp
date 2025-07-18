﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Athena_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x00F0 (0x5490 - 0x53A0)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x53A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMotionWarpingComponent*                MotionWarping;                                     // 0x53A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMultiInteractActorComponent_C*         MultiInteractActorComponent;                       // 0x53B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x53B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x53C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x53D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x53E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x53F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x5408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x5418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x5428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x5430(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x5440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(class AFortPlayerPawnAthena* JumpingPlayer)> ShootingTargetReactToJump; // 0x5450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)> OnPlayHit; // 0x5460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnEnteredVehicleDispatcher;                        // 0x5470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnExitedVehicleDispatcher;                         // 0x5480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void OnJumped();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_Parent_C">();
	}
	static class APlayerPawn_Athena_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_Parent_C>();
	}
};

}


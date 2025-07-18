﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pickups_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
// 0x0188 (0x0580 - 0x03F8)
class AB_Pickups_Parent_C : public AFortPickupsParent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Root;                                              // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileSelectedTL;                                  // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Static_Mesh_Pickup;                                // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh_Pickup;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    SkeletalOrStaticMeshAssetPrimitive;                // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentElementIndex;                               // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          Tossed;                                            // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_43D[0x3];                                      // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Component_Radius__Scaled_;                         // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Component_Radius_Multiplier;                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   Outline_Rarity_Colors;                             // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                        Component_Radius;                                  // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Picked_Up_Delay_Before_Glow;                       // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Picked_Up_Fade_In_Time;                            // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Picked_Up_Hold_Time;                               // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Picked_Up_Fade_Out_Time;                           // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Picked_Up_Sweep_Speed;                             // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystem*                        Picked_Up_Trail_PS;                                // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                Sparkle_Spawn_Rate__Picked_Up_;                    // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TArray<double>                                Lifetime__Picked_Up_;                              // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	class UForceFeedbackEffect*                   PickupForceFeedback;                               // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Names_of_Materials_And_Parents_Exempt_from_Repartening; // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	bool                                          HasUniqueMaterialIds;                              // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               BackgroundParticleSystem;                          // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   BackgroundRarityColors;                            // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                        Random_Rotation;                                   // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                MobileSelectedOffset;                              // 0x04F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                MobileSelectedScale;                               // 0x0510(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MobileInteractIcon;                                // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconLocation;                        // 0x0530(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconScale;                           // 0x0548(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInterface*                     MobileInteractionMaterial;                         // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          PickedUp;                                          // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_569[0x3];                                      // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MissionItemOutlineColor;                           // 0x056C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DestroyBackgroundVisualComponents();
	void DisableBacchusHighlight();
	void EnableBacchusHighlight();
	void ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint);
	int32 GetViewDistanceQuality();
	void HideBackgroundAndSpotlight();
	void Mobile_Interation_Icon_Setup();
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void OnAboutToEnterBackpack(class AFortPawn* PickupTarget);
	void OnAttached();
	void OnPickedUp(class AFortPawn* PickupTarget);
	void OnTossed();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ScaleHologramTimingsForPvP();
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset);
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void SetHologramPickedUpParams(bool Tier_0);
	void Setup_View_Distances(int32* viewDistanceQuality);
	void SetVisibleMobileInteractIcon(bool Visible);
	void SpawnPickedUpTrailPS();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Pickups_Parent_C">();
	}
	static class AB_Pickups_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Pickups_Parent_C>();
	}
};

}


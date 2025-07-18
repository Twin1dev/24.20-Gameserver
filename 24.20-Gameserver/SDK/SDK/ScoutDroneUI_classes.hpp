﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoutDroneUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ModularGameplay_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ScoutDroneUI_structs.hpp"
#include "DynamicUI_classes.hpp"


namespace SDK
{

// Class ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
// 0x0020 (0x0090 - 0x0070)
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse final : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTagContainer                  ContextTagToCheck;                                 // 0x0070(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehaviorExtension_ScoutDroneUse">();
	}
	static class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehaviorExtension_ScoutDroneUse>();
	}
};

// Class ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
// 0x0030 (0x0078 - 0x0048)
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems final : public UFortMobileButtonBehaviorComponent_Visibility
{
public:
	struct FGameplayTagContainer                  HoldingItemsTags;                                  // 0x0048(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortControllerComponent_Interaction> InteractionComponent;                 // 0x0068(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileButtonBehaviorComponent_ScoutDronePickupItems">();
	}
	static class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileButtonBehaviorComponent_ScoutDronePickupItems>();
	}
};

// Class ScoutDroneUI.DronePickUpIndicatorComponent
// 0x00B8 (0x0158 - 0x00A0)
class UDronePickUpIndicatorComponent final : public UGameFrameworkComponent
{
public:
	TSubclassOf<class UFortActorIndicatorWidget>  ItemIndicatorType;                                 // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortActorIndicatorWidget>  DbnoIndicatorType;                                 // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                        IndicatorPool;                                     // 0x00B0(0x0088)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_138[0x20];                                     // 0x0138(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Init(class AFortScoutDrone* Drone);
	void OnDroneDestroyed(class AActor* DestroyedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DronePickUpIndicatorComponent">();
	}
	static class UDronePickUpIndicatorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDronePickUpIndicatorComponent>();
	}
};

// Class ScoutDroneUI.ScoutDroneHUD
// 0x0120 (0x0388 - 0x0268)
class UScoutDroneHUD final : public UUserWidget
{
public:
	float                                         TimeToConfirmTargetCache;                          // 0x0268(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         InitialHealth;                                     // 0x026C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                         WarningRange;                                      // 0x0270(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         SignalLossRange;                                   // 0x0298(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         UpdateSignalInterval;                              // 0x02C0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                           MarkAbilityTag;                                    // 0x02E8(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           DismissAbilityTag;                                 // 0x02EC(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           InteractAbilityTag;                                // 0x02F0(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           PickUpAbilityTag;                                  // 0x02F4(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           PickUpTargetsChangedTag;                           // 0x02F8(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           SpeedBoostAbilityTag;                              // 0x02FC(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               Overlay_Health;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               Overlay_EnergyLevel;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               Overlay_Reticle;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               Overlay_TetheringIndicator;                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxHealthCache;                                    // 0x0320(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MaxEnergyCache;                                    // 0x0324(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_328[0x48];                                     // 0x0328(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SignalDataTimerHandle;                             // 0x0370(0x0008)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FScoutDroneWidgetIdentifier>    HUDIdentifiers;                                    // 0x0378(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	float GetTargetConfirmationTime();
	void OnDroneDismissAbilityUsed();
	void OnDroneEnergyChanged(float EnergyPercentage);
	void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth);
	void OnDroneInteractAbilityEnd();
	void OnDroneInteractAbilityUsed();
	void OnDroneMarkAbilityEnd();
	void OnDroneMarkAbilityUsed();
	void OnDronePickUpAbilityEnd();
	void OnDronePickUpAbilityUsed();
	void OnDronePickUpTargetsAvailable();
	void OnDronePickUpTargetsEmpty();
	void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage);
	void OnDroneSpeedBoostAbilityEnd();
	void OnDroneSpeedBoostAbilityUsed();
	void OnOwningPlayerDamaged();
	void OnReticleChangeAbilityActivated(const struct FGameplayTag& UpdatedTag);
	void OnTargetingStatusChanged(const struct FScoutDroneStatusData& StatusData);

	class AFortScoutDrone* GetControlledDrone() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneHUD">();
	}
	static class UScoutDroneHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDroneHUD>();
	}
};

// Class ScoutDroneUI.ScoutDroneTetherIndicator
// 0x0020 (0x0288 - 0x0268)
class UScoutDroneTetherIndicator final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x20];                                     // 0x0268(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BP_OnEnterSignalLossRange();
	void BP_OnEnterWarningRange();
	void BP_OnExitWarningRange();
	void BP_WhileInWarningRange(float SignalIntensityPercentage);

	class AFortScoutDrone* GetControlledDrone() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneTetherIndicator">();
	}
	static class UScoutDroneTetherIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDroneTetherIndicator>();
	}
};

// Class ScoutDroneUI.ScoutDroneUIDirector
// 0x0020 (0x02D8 - 0x02B8)
class AScoutDroneUIDirector final : public ADynamicUIDirectorBase
{
public:
	struct FGameplayTagContainer                  HUDTagsToHide;                                     // 0x02B8(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	void BP_OnScoutDroneDeployed();
	void BP_OnScoutDroneDismissed();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneUIDirector">();
	}
	static class AScoutDroneUIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScoutDroneUIDirector>();
	}
};

}


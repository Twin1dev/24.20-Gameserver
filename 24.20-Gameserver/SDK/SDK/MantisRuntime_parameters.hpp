﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MantisRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "MantisRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueEnded
// 0x0008 (0x0008 - 0x0000)
struct FortMantisLayerAnimInstance_OnMantisTechniqueEnded final
{
public:
	int32                                         TechniqueIndex;                                    // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TechniqueName;                                     // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueStarted
// 0x0008 (0x0008 - 0x0000)
struct FortMantisLayerAnimInstance_OnMantisTechniqueStarted final
{
public:
	int32                                         TechniqueIndex;                                    // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TechniqueName;                                     // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted
// 0x0028 (0x0028 - 0x0000)
struct FortGameplayAbility_Mantis_BP_MantisAbilityTechniqueStarted final
{
public:
	struct FGameplayTagContainer                  OwningTags;                                        // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	class FName                                   SequenceName;                                      // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          StartsSequence;                                    // 0x0024(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EndsSequence;                                      // 0x0025(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent
// 0x0008 (0x0008 - 0x0000)
struct FortGameplayAbility_Mantis_BP_OnMantisInputEvent final
{
public:
	EFortMantisTechniqueActivationInputType       InputType;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMantisTechniqueActivationTimingType      InputTiming;                                       // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDidInputStartTechnique;                           // 0x0002(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDidInputQueueTechnique;                           // 0x0003(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InputHeldDuration;                                 // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
// 0x0030 (0x0030 - 0x0000)
struct FortGameplayAbility_Mantis_BP_OnMantisTechniqueHit final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetDataHandle;                                  // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyEvent
// 0x0010 (0x0010 - 0x0000)
struct FortGameplayAbility_Mantis_BP_OnTechniqueNotifyEvent final
{
public:
	EFortMantisNotifyEvent                        NotifyEvent;                                       // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAnimNotify_Mantis*           Notify;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowEnded
// 0x0010 (0x0010 - 0x0000)
struct FortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowEnded final
{
public:
	EFortMantisNotifyWindow                       NotifyWindow;                                      // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAnimNotifyState_Mantis*      Notify;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowStarted
// 0x0010 (0x0010 - 0x0000)
struct FortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowStarted final
{
public:
	EFortMantisNotifyWindow                       NotifyWindow;                                      // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAnimNotifyState_Mantis*      Notify;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping
// 0x0030 (0x0030 - 0x0000)
struct FortGameplayAbility_Mantis_ConfigureRootMotionWarping final
{
public:
	class FName                                   TechniqueName;                                     // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutAllowTranslationWarp;                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutAllowRotationWarp;                             // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OutTargetActor;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutSnapshotTargetActorLocation;                   // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutWarpTranslationToLocation;                     // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                outTargetLocation;                                 // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.FillMetadataForTechnique
// 0x0148 (0x0148 - 0x0000)
struct FortGameplayAbility_Mantis_FillMetadataForTechnique final
{
public:
	class FName                                   TechniqueName;                                     // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMantisTechniqueMetadata           OutTechniqueMetadata;                              // 0x0008(0x0140)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.GetDynamicMontageNameForTechnique
// 0x0008 (0x0008 - 0x0000)
struct FortGameplayAbility_Mantis_GetDynamicMontageNameForTechnique final
{
public:
	class FName                                   TechniqueName;                                     // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.GetLevelForGameplayEffectContainer
// 0x0008 (0x0008 - 0x0000)
struct FortGameplayAbility_Mantis_GetLevelForGameplayEffectContainer final
{
public:
	struct FGameplayTag                           ApplicationTag;                                    // 0x0000(0x0004)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.IsSpecificInputPressed
// 0x0002 (0x0002 - 0x0000)
struct FortMantisPawnComponent_IsSpecificInputPressed final
{
public:
	EFortMantisTechniqueActivationInputType       InputType;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
// 0x0010 (0x0010 - 0x0000)
struct FortMantisPawnComponent_OnCharacterMovementPreUpdate final
{
public:
	class UCharacterMovementComponent*            CharMoveComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
// 0x0010 (0x0010 - 0x0000)
struct FortMantisPawnComponent_OnPostPhysicsRotation final
{
public:
	class UCharacterMovementComponent*            CharMoveComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MantisRuntime.FortMantisPawnComponent.SetBranchRule
// 0x0002 (0x0002 - 0x0000)
struct FortMantisPawnComponent_SetBranchRule final
{
public:
	EFortMantisBranchRule                         InBranchRule;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMantisBranchPath                         InBranchPath;                                      // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.SetLockOnState
// 0x0010 (0x0010 - 0x0000)
struct FortMantisPawnComponent_SetLockOnState final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.SimulateInputEvent
// 0x0003 (0x0003 - 0x0000)
struct FortMantisPawnComponent_SimulateInputEvent final
{
public:
	EFortMantisTechniqueActivationInputType       InputType;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMantisTechniqueActivationTimingType      InputTiming;                                       // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceProcessEvent;                                // 0x0002(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.TryManuallyEndCurrentTechnique
// 0x0001 (0x0001 - 0x0000)
struct FortMantisPawnComponent_TryManuallyEndCurrentTechnique final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.TryManuallyStartTechnique
// 0x0008 (0x0008 - 0x0000)
struct FortMantisPawnComponent_TryManuallyStartTechnique final
{
public:
	int32                                         TechniqueDataIndex;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MantisRuntime.FortMantisPawnComponent.GetCurrentTechniqueMetadata
// 0x0140 (0x0140 - 0x0000)
struct FortMantisPawnComponent_GetCurrentTechniqueMetadata final
{
public:
	struct FFortMantisTechniqueMetadata           ReturnValue;                                       // 0x0000(0x0140)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.GetLockOnTarget
// 0x0008 (0x0008 - 0x0000)
struct FortMantisPawnComponent_GetLockOnTarget final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.HasCurrentTechniqueMetadataBeenSet
// 0x0001 (0x0001 - 0x0000)
struct FortMantisPawnComponent_HasCurrentTechniqueMetadataBeenSet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.HasLockOnTarget
// 0x0001 (0x0001 - 0x0000)
struct FortMantisPawnComponent_HasLockOnTarget final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn
// 0x0001 (0x0001 - 0x0000)
struct FortMantisPawnComponent_IsPerformingLockOn final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnEquip
// 0x0008 (0x0008 - 0x0000)
struct FortMantisWeaponComponent_OnEquip final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnPressSecondaryFire
// 0x0008 (0x0008 - 0x0000)
struct FortMantisWeaponComponent_OnPressSecondaryFire final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnPressTrigger
// 0x0008 (0x0008 - 0x0000)
struct FortMantisWeaponComponent_OnPressTrigger final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnReleaseSecondaryFire
// 0x0008 (0x0008 - 0x0000)
struct FortMantisWeaponComponent_OnReleaseSecondaryFire final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnReleaseTrigger
// 0x0008 (0x0008 - 0x0000)
struct FortMantisWeaponComponent_OnReleaseTrigger final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnUnEquip
// 0x0008 (0x0008 - 0x0000)
struct FortMantisWeaponComponent_OnUnEquip final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MantisRuntime.FortMantisWeaponComponent.OnWeaponAbilitiesRemoved
// 0x0010 (0x0010 - 0x0000)
struct FortMantisWeaponComponent_OnWeaponAbilitiesRemoved final
{
public:
	class AFortWeapon*                            Weapon;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortWeaponAbilityRemovalReason               RemovalReason;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MantisRuntime.FortMantisWeaponComponent.GetAnimInstanceInfo
// 0x0010 (0x0010 - 0x0000)
struct FortMantisWeaponComponent_GetAnimInstanceInfo final
{
public:
	struct FFortMantisReplicatedAnimInstanceInfo  ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}


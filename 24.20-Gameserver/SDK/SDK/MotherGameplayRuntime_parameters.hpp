﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotherGameplayRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MotherGameplayRuntime_structs.hpp"


namespace SDK::Params
{

// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor
// 0x0038 (0x0038 - 0x0000)
struct GravityGunTargetTrackingComponent_FindTargetActor final
{
public:
	class AActor*                                 OwningPlayer;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TraceStart;                                        // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TraceEnd;                                          // 0x0020(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile
// 0x0040 (0x0040 - 0x0000)
struct GravityGunTargetTrackingComponent_FindTargetProjectile final
{
public:
	class AActor*                                 OwningPlayer;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TraceStart;                                        // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TraceEnd;                                          // 0x0020(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetingRadius;                                   // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x003C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
// 0x0038 (0x0038 - 0x0000)
struct GravityGunTargetTrackingComponent_IsValidTarget final
{
public:
	class AActor*                                 OwningPlayer;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 PotentialTarget;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReasonForFailure;                                  // 0x0010(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropActivatedEventState
// 0x0008 (0x0008 - 0x0000)
struct PropGunFunctionLibrary_ClearPropActivatedEventState final
{
public:
	class AActor*                                 ContextActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropIndexEventState
// 0x0008 (0x0008 - 0x0000)
struct PropGunFunctionLibrary_ClearPropIndexEventState final
{
public:
	class AActor*                                 ContextActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropActivatedEventState
// 0x0018 (0x0018 - 0x0000)
struct PropGunFunctionLibrary_UpdatePropActivatedEventState final
{
public:
	class AActor*                                 ContextActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaddleGingerPropActivatedData         Payload;                                           // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropIndexEventState
// 0x0038 (0x0038 - 0x0000)
struct PropGunFunctionLibrary_UpdatePropIndexEventState final
{
public:
	class AActor*                                 ContextActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaddleGingerPropData                  Payload;                                           // 0x0008(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition
// 0x0080 (0x0080 - 0x0000)
struct PropGunFunctionLibrary_UpdatePropPreviewPosition final
{
public:
	class USceneComponent*                        PropPreviewComponent;                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaTime;                                         // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AFortPawn*                        AttachPawn;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachSocket;                                      // 0x0018(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USkeletalMeshComponent*           WeaponMesh;                                        // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DesiredRelativeTransform;                          // 0x0028(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumZOffset;                                    // 0x0040(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RelativeRotation;                                  // 0x0048(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                CachedScale;                                       // 0x0060(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InterpSpeed;                                       // 0x0078(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated
// 0x0018 (0x0018 - 0x0000)
struct ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated final
{
public:
	struct FVector                                FoundPoint;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
// 0x0018 (0x0018 - 0x0000)
struct ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


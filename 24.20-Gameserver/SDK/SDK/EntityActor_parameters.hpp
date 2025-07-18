﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EntityActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
// 0x0001 (0x0001 - 0x0000)
struct EntityDynamicActivationComponent_OnEnabledChanged final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorCollisionComponent.OnEnabledChanged
// 0x0001 (0x0001 - 0x0000)
struct EntityActorCollisionComponent_OnEnabledChanged final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
// 0x0100 (0x0100 - 0x0000)
struct EntityActorCollisionComponent_OnNativeComponentBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct EntityActorCollisionComponent_OnNativeComponentEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
// 0x0110 (0x0110 - 0x0000)
struct EntityActorCollisionComponent_OnNativeComponentHit final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
// 0x0001 (0x0001 - 0x0000)
struct EntityActorTextDisplayComponent_GetHorizontalAlignment final
{
public:
	EHorizTextAligment                            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
// 0x0018 (0x0018 - 0x0000)
struct EntityActorTextDisplayComponent_GetRelativeLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
// 0x0001 (0x0001 - 0x0000)
struct EntityActorTextDisplayComponent_GetVerticalAlignment final
{
public:
	EVerticalTextAligment                         ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
// 0x0001 (0x0001 - 0x0000)
struct EntityActorTextDisplayComponent_SetHorizontalAlignment final
{
public:
	EHorizTextAligment                            Value;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
// 0x0018 (0x0018 - 0x0000)
struct EntityActorTextDisplayComponent_SetRelativeLocation final
{
public:
	struct FVector                                RelativeLocation;                                  // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
// 0x0018 (0x0018 - 0x0000)
struct EntityActorTextDisplayComponent_SetRelativeRotation final
{
public:
	struct FRotator                               RelativeRotation;                                  // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
// 0x0018 (0x0018 - 0x0000)
struct EntityActorTextDisplayComponent_SetRelativeScale final
{
public:
	struct FVector                                RelativeScale;                                     // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetText
// 0x0018 (0x0018 - 0x0000)
struct EntityActorTextDisplayComponent_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
// 0x0004 (0x0004 - 0x0000)
struct EntityActorTextDisplayComponent_SetTextRenderColor final
{
public:
	struct FColor                                 Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
// 0x0001 (0x0001 - 0x0000)
struct EntityActorTextDisplayComponent_SetVerticalAlignment final
{
public:
	EVerticalTextAligment                         Value;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize
// 0x0004 (0x0004 - 0x0000)
struct EntityActorTextDisplayComponent_SetWorldSize final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetText
// 0x0018 (0x0018 - 0x0000)
struct EntityActorTextDisplayComponent_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
// 0x0004 (0x0004 - 0x0000)
struct EntityActorTextDisplayComponent_GetTextRenderColor final
{
public:
	struct FColor                                 ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize
// 0x0004 (0x0004 - 0x0000)
struct EntityActorTextDisplayComponent_GetWorldSize final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged
// 0x0010 (0x0010 - 0x0000)
struct EntityActorPositionComponent_OnRootComponentChanged final
{
public:
	class USceneComponent*                        InRootComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRootComponent;                                  // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged
// 0x0010 (0x0010 - 0x0000)
struct EntityActorRotationComponent_OnRootComponentChanged final
{
public:
	class USceneComponent*                        InRootComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRootComponent;                                  // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged
// 0x0010 (0x0010 - 0x0000)
struct EntityActorScaleComponent_OnRootComponentChanged final
{
public:
	class USceneComponent*                        InRootComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRootComponent;                                  // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


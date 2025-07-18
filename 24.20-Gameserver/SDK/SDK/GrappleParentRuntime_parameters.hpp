﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrappleParentRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers
// 0x0008 (0x0008 - 0x0000)
struct FortCameraModifier_Swinging_CalculateDynamicMultipliers final
{
public:
	float                                         OutFOVBoundsMultiplier;                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutBoostOffsetMultiplier;                          // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetAttachVectorInPlayerSpace
// 0x0030 (0x0030 - 0x0000)
struct FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace final
{
public:
	struct FVector                                InPlayerToAttachPoint;                             // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint
// 0x000C (0x000C - 0x0000)
struct FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint final
{
public:
	float                                         Pitch;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Roll;                                              // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Yaw;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StormShieldModifierRuntime

#include "Basic.hpp"

#include "StormShieldModifierRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned final
{
public:
	class AFortSafeZoneIndicator*                 SafeZoneIndicator;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyCenter
// 0x0018 (0x0018 - 0x0000)
struct FortAthenaMutator_SplitStorm_SetProxyCenter final
{
public:
	struct FVector                                NewCenter;                                         // 0x0000(0x0018)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyRadius
// 0x0004 (0x0004 - 0x0000)
struct FortAthenaMutator_SplitStorm_SetProxyRadius final
{
public:
	float                                         NewRadius;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
// 0x0001 (0x0001 - 0x0000)
struct FortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase final
{
public:
	ESplitStormProxyPhase                         NewPhase;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


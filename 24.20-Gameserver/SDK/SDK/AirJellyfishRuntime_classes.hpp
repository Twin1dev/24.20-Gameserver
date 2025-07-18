﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AirJellyfishRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// Class AirJellyfishRuntime.FortAirJellyfishAnimInstance
// 0x0020 (0x0550 - 0x0530)
class UFortAirJellyfishAnimInstance final : public UFortAnimInstance
{
public:
	float                                         RotatorLerpRate;                                   // 0x0530(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VelocityDirectionScalar;                           // 0x0534(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RootRotation;                                      // 0x0538(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAirJellyfishAnimInstance">();
	}
	static class UFortAirJellyfishAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAirJellyfishAnimInstance>();
	}
};

}


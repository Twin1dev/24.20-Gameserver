﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerHealthDamage_CameraLensEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
// 0x0010 (0x0380 - 0x0370)
#pragma pack(push, 0x1)
class alignas(0x10) AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32 EntryPoint);
	void PassParticle_Parameter(double NewParam, bool First_Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerHealthDamage_CameraLensEffect_C">();
	}
	static class AB_PlayerHealthDamage_CameraLensEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerHealthDamage_CameraLensEffect_C>();
	}
};
#pragma pack(pop)

}


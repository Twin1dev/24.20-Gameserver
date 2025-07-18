﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DynamicCapsuleCodeRuntime

#include "Basic.hpp"

#include "DynamicCapsuleCodeRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
// 0x0048 (0x00F0 - 0x00A8)
class UDynamicCapsuleComponent final : public UFortPawnComponent
{
public:
	struct FDynamicCapsuleState                   ReplicatedCapsuleState;                            // 0x00A8(0x0010)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_B8[0x38];                                      // 0x00B8(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool ApplyDynamicCapsule(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight);
	bool ApplyDynamicCapsuleWithLocationAdjust(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight);
	void OnRep_DynamicCapsuleReplicatedState();
	bool RemoveDynamicCapsule(const struct FGameplayTag& tag);
	void ServerApplyDynamicCapsule(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight);
	void ServerRemoveDynamicCapsule(const struct FGameplayTag& tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicCapsuleComponent">();
	}
	static class UDynamicCapsuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicCapsuleComponent>();
	}
};

// Class DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
// 0x0018 (0x0048 - 0x0030)
class UAnimNotifyState_SetCapsuleSize final : public UAnimNotifyState
{
public:
	float                                         TargetCapsuleRadius;                               // 0x0030(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetCapsuleHalfHeight;                           // 0x0034(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdjustRelativeMeshHeight;                         // 0x0038(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetRelativeMeshHeight;                          // 0x003C(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           CapsuleSizeTag;                                    // 0x0040(0x0004)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_SetCapsuleSize">();
	}
	static class UAnimNotifyState_SetCapsuleSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_SetCapsuleSize>();
	}
};

// Class DynamicCapsuleCodeRuntime.JumpSlideComponent
// 0x0008 (0x00B0 - 0x00A8)
class UJumpSlideComponent final : public UFortPawnComponent
{
public:
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnJumpSlideEnd();
	void OnJumpSlideStart();
	void OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JumpSlideComponent">();
	}
	static class UJumpSlideComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJumpSlideComponent>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationBudgetAllocator

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationBudgetBlueprintLibrary">();
	}
	static class UAnimationBudgetBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationBudgetBlueprintLibrary>();
	}
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0FE0 - 0x0FB0)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	uint8                                         Pad_FB0[0x20];                                     // 0x0FB0(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bAutoRegisterWithBudgetAllocator : 1;              // 0x0FD0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bAutoCalculateSignificance : 1;                    // 0x0FD0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bShouldUseActorRenderedFlag : 1;                   // 0x0FD0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_FD1[0xF];                                      // 0x0FD1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMeshComponentBudgeted">();
	}
	static class USkeletalMeshComponentBudgeted* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshComponentBudgeted>();
	}
};

}


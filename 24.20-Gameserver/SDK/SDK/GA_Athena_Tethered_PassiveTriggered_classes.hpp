﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Tethered_PassiveTriggered

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
// 0x0018 (0x0B40 - 0x0B28)
class UGA_Athena_Tethered_PassiveTriggered_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           GCN_BoostTag;                                      // 0x0B30(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCN_JumpTag;                                       // 0x0B34(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ZiplineExit;                                       // 0x0B38(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Tethered_PassiveTriggered_C">();
	}
	static class UGA_Athena_Tethered_PassiveTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Tethered_PassiveTriggered_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Lockout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Lockout.GA_Athena_Lockout_C
// 0x0018 (0x0B40 - 0x0B28)
class UGA_Athena_Lockout_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Timer_LockoutFailsafe;                             // 0x0B30(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        LockoutFailsafeTime;                               // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void Failsafe();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Lockout_C">();
	}
	static class UGA_Athena_Lockout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Lockout_C>();
	}
};

}


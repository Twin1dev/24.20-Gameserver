﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Grenade_Rethrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_Consumable_Throw_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// 0x0028 (0x0FD0 - 0x0FA8)
class UGA_Athena_Grenade_Rethrow_C final : public UGA_Athena_Consumable_Throw_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_Grenade_Rethrow_C;        // 0x0FA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortProjectileBase*                    Projectile;                                        // 0x0FB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TossDelay;                                         // 0x0FB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HolsterId;                                         // 0x0FC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC4[0x4];                                      // 0x0FC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PostThrowEndDelay;                                 // 0x0FC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachProjectile();
	void AttemptSpawnThrownProjectile();
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DetachProjectile();
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void RethrowProjectile();
	void ThrowProjectile();
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Grenade_Rethrow_C">();
	}
	static class UGA_Athena_Grenade_Rethrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Grenade_Rethrow_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnockbackRuntime

#include "Basic.hpp"

#include "KnockbackRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// Class KnockbackRuntime.FortAthenaMutator_Knockback
// 0x0240 (0x0570 - 0x0330)
class AFortAthenaMutator_Knockback final : public AFortAthenaMutator
{
public:
	bool                                          bStorePlayerKnockbackData;                         // 0x0330(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplicatePlayerKnockbackData;                     // 0x0331(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_332[0x6];                                      // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FKnockbackMutatorData& KnockbackData)> OnPlayerKnockbackDataChanged; // 0x0338(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FKnockbackMutatorDataArray             AllPlayersKnockbackData;                           // 0x0348(0x0120)(Net, NativeAccessSpecifierPublic)
	struct FScalableFloat                         bDisplayKnockbackDamageNumbersAsPercentage;        // 0x0468(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         ConvertToKnockbackDamageMultiplier;                // 0x0490(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         PercentDamageLowMaxThreshold;                      // 0x04B8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         PercentDamageMediumMaxThreshold;                   // 0x04E0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                         KnockbackMultiplierInitialValue;                   // 0x0508(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_50C[0x64];                                     // 0x050C(0x0064)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData();
	void HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class AFortPawn* FortPawn);
	void SetPlayersShouldBreakThroughStructures(const bool bActive, class AFortPlayerPawn* PlayerPawn);

	float GetKnockbackMultiplierInitialValue() const;
	float GetPercentDamageLowMaxThreshold() const;
	float GetPercentDamageMediumMaxThreshold() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_Knockback">();
	}
	static class AFortAthenaMutator_Knockback* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_Knockback>();
	}
};

// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
// 0x0010 (0x0B38 - 0x0B28)
class UFortGameplayAbility_KnockbackMutator final : public UFortGameplayAbility
{
public:
	class AFortAthenaMutator_Knockback*           CachedMutator;                                     // 0x0B28(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaMutator_Knockback> MutatorClassToGet;                               // 0x0B30(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class AFortAthenaMutator_Knockback* GetCachedMutator();
	void SaveKnockbackData(const struct FKnockbackMutatorData& InKnockbackData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_KnockbackMutator">();
	}
	static class UFortGameplayAbility_KnockbackMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_KnockbackMutator>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealthShieldRegenRuntime

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// ScriptStruct HealthShieldRegenRuntime.FortHealthShieldRegen_ShieldDelegateContainer
// 0x0030 (0x0030 - 0x0000)
struct FFortHealthShieldRegen_ShieldDelegateContainer final
{
public:
	TDelegate<void()>                             OnShieldChanged;                                   // 0x0000(0x000C)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             OnShieldedDamage;                                  // 0x000C(0x000C)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(const class AActor* Instigator)> OnShieldDestroyed;                               // 0x0018(0x000C)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(const struct FGameplayEventData& Payload)> OnDamageReceived;                      // 0x0024(0x000C)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct HealthShieldRegenRuntime.FortHealthShieldRegen_HealthDelegateContainer
// 0x0018 (0x0018 - 0x0000)
struct FFortHealthShieldRegen_HealthDelegateContainer final
{
public:
	TDelegate<void()>                             OnHealthChanged;                                   // 0x0000(0x000C)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(const struct FGameplayEventData& Payload)> OnDamageReceived;                      // 0x000C(0x000C)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


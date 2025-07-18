﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Interrogate_GC

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC
// 0x0148 (0x0148 - 0x0000)
struct GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x0010(0x0018)()
	class UObject*                                CallFunc_EffectContextGetSourceObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0030(0x00D0)(ContainsInstancedReference)
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;                            // 0x0100(0x0048)(ContainsInstancedReference)
};

// Function GA_Interrogate_GC.GA_Interrogate_GC_C.FailedToActivatePassiveAbility
// 0x0048 (0x0048 - 0x0000)
struct GA_Interrogate_GC_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

}


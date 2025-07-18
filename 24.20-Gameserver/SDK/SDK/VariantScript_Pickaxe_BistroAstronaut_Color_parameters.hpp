﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VariantScript_Pickaxe_BistroAstronaut_Color

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C.DetermineVariantSelection
// 0x0188 (0x0188 - 0x0000)
struct VariantScript_Pickaxe_BistroAstronaut_Color_C_DetermineVariantSelection final
{
public:
	struct FFortAthenaLoadout                     Loadout;                                           // 0x0000(0x0178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ReturnValue;                                       // 0x0178(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue; // 0x017C(0x0004)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1; // 0x0180(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemInLoadout_ReturnValue;              // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


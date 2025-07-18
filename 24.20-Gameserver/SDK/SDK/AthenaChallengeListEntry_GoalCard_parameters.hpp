﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengeListEntry_GoalCard

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.ExecuteUbergraph_AthenaChallengeListEntry_GoalCard
// 0x0028 (0x0028 - 0x0000)
struct AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGoalsPageQuestCard_C*                  K2Node_DynamicCast_AsGoals_Page_Quest_Card;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDisabled;                            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGoalsPageQuestCard_C*                  K2Node_DynamicCast_AsGoals_Page_Quest_Card_1;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.IsUsingGamepad
// 0x0018 (0x0018 - 0x0000)
struct AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad final
{
public:
	bool                                          Return_Value;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.OnChallengeDataSet
// 0x0001 (0x0001 - 0x0000)
struct AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet final
{
public:
	bool                                          bDisabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


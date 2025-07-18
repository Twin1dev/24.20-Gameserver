﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardListViewWrapper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper
// 0x0240 (0x0240 - 0x0000)
struct LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELeaderboardDisplayType                       Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RGBToHSV_H;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_DisplayInfo;                    // 0x0038(0x01D0)()
	class FString                                 K2Node_CustomEvent_EventId;                        // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_EventWindowId;                  // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ELeaderboardDisplayType                       K2Node_Event_NewDisplayType;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22A[0x6];                                      // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_Value_ImplicitCast;                // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_HSVToRGB_V_ImplicitCast;                  // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.OnLeaderboardDisplayTypeChanged
// 0x0001 (0x0001 - 0x0000)
struct LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged final
{
public:
	ELeaderboardDisplayType                       NewDisplayType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Display Info
// 0x01D0 (0x01D0 - 0x0000)
struct LeaderboardListViewWrapper_C_Set_Display_Info final
{
public:
	struct FFortTournamentDisplayInfo             DisplayInfo_0;                                     // 0x0000(0x01D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event
// 0x0020 (0x0020 - 0x0000)
struct LeaderboardListViewWrapper_C_Set_Event final
{
public:
	class FString                                 EventId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EventWindowId;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}


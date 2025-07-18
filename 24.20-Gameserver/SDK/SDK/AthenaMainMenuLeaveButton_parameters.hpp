﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMainMenuLeaveButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaMainMenuLeaveButton.AthenaMainMenuLeaveButton_C.ExecuteUbergraph_AthenaMainMenuLeaveButton
// 0x0120 (0x0120 - 0x0000)
struct AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Text;                                 // 0x0008(0x0018)(ConstParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenuButton_C*                  K2Node_DynamicCast_AsWBP_Main_Menu_Button;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	class FText                                   K2Node_Event_Text_1;                               // 0x0088(0x0018)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	ESlateVisibility                              K2Node_Event_InVisibility;                         // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaMainMenuLeaveButton.AthenaMainMenuLeaveButton_C.OnTextChanged
// 0x0018 (0x0018 - 0x0000)
struct AthenaMainMenuLeaveButton_C_OnTextChanged final
{
public:
	class FText                                   Text_0;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMainMenuLeaveButton.AthenaMainMenuLeaveButton_C.OnTimerTextChanged
// 0x0018 (0x0018 - 0x0000)
struct AthenaMainMenuLeaveButton_C_OnTimerTextChanged final
{
public:
	class FText                                   Text_0;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMainMenuLeaveButton.AthenaMainMenuLeaveButton_C.OnTimerVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaMainMenuLeaveButton.AthenaMainMenuLeaveButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaMainMenuLeaveButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Manage

#include "Basic.hpp"


namespace SDK::Params
{

// Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
// 0x0098 (0x0098 - 0x0000)
struct FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_Event_PlayerController;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AVaultCharacterLightingBP_C*>    CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0058(0x0010)(ReferenceParm)
	TArray<class AVaultCharacterLightingBP_C*>    CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x0068(0x0010)(ReferenceParm)
	class AVaultCharacterLightingBP_C*            CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVaultCharacterLightingBP_C*            CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnDeactivated
// 0x0008 (0x0008 - 0x0000)
struct FrontendCamera_Manage_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnActivated
// 0x0008 (0x0008 - 0x0000)
struct FrontendCamera_Manage_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


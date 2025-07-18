﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPreviewPedestal

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
// 0x0028 (0x0028 - 0x0000)
struct ItemPreviewPedestal_C_Remove_Floor final
{
public:
	class AFortItemPreviewActor*                  Preview;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AWrapPreview_C*                         K2Node_DynamicCast_AsWrap_Preview;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemOnPawnPreview_C*                   K2Node_DynamicCast_AsItem_on_Pawn_Preview;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
// 0x0001 (0x0001 - 0x0000)
struct ItemPreviewPedestal_C_OnItemDisplayed final
{
public:
	EFortItemType                                 ItemType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
// 0x0008 (0x0008 - 0x0000)
struct ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 K2Node_Event_ItemType;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


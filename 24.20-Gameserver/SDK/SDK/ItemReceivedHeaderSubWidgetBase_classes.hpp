﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedHeaderSubWidgetBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// 0x0038 (0x02B8 - 0x0280)
class UItemReceivedHeaderSubWidgetBase_C : public UItemReceivedHeaderBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortGiftBoxItem*                       GiftBoxItem_BP;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 FromUserName_BP;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FFortReceivedItemLootInfo>      ItemDefs;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible)
	bool                                          bSelfGift;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint);
	void InitFromGiftBoxItem_BP();
	void SetBlueprintGiftBoxItem(class UFortGiftBoxItem* GiftBox, const class FString& FromUser, const TArray<struct FFortReceivedItemLootInfo>& ItemDefs_0, bool bSelfGift_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedHeaderSubWidgetBase_C">();
	}
	static class UItemReceivedHeaderSubWidgetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedHeaderSubWidgetBase_C>();
	}
};

}


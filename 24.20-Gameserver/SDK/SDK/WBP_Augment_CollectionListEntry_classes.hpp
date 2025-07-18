﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Augment_CollectionListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Augment_CollectionListEntry.WBP_Augment_CollectionListEntry_C
// 0x00D0 (0x15A0 - 0x14D0)
class UWBP_Augment_CollectionListEntry_C final : public UFortPlayerAugmentCollectionListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Select;                                            // 0x14D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x14E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          Border_HighScore;                                  // 0x14E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_NewBang;                                    // 0x14F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Number;                                     // 0x14F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x1500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortVisualAttachment*                  ItemNameAttachment;                                // 0x1508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Root;                                      // 0x1510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_HighScore;                                    // 0x1518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           CompleteBorderColor;                               // 0x1520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewLocationBorderColor;                            // 0x1530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CompleteText;                                      // 0x1540(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NewLocationText;                                   // 0x1558(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            CompleteTextColor;                                 // 0x1570(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NewLocationTextColor;                              // 0x1584(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Hovered;                                           // 0x1598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x1599(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Update_Hover_Parameter();
	void ExecuteUbergraph_WBP_Augment_CollectionListEntry(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnHovered();
	void BP_OnEntryReset();
	void BP_OnEntryImageSet();
	void BP_OnDeselected();
	void BP_OnCollectionStateSet(EFortCollectedState CollectedState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionListEntry_C">();
	}
	static class UWBP_Augment_CollectionListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionListEntry_C>();
	}
};

}


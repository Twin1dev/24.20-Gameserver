﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationPickerTileButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// 0x0080 (0x14F0 - 0x1470)
class UAthenaCustomizationPickerTileButton_C final : public UAthenaCustomizationPickerTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unarchived;                                        // 0x1478(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       archived;                                          // 0x1480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x1488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ExclusiveFill;                                     // 0x1490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ExclusiveWarningOvr;                               // 0x1498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         Image_Archived;                                    // 0x14A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         Image_Equipped;                                    // 0x14A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NullItemOverlay;                                   // 0x14B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RootWidgetSwitcher;                                // 0x14B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnownedDampen;                                     // 0x14C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSlottedSomewhere;                                // 0x14C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C9[0x7];                                     // 0x14C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UWidgetSwitcher* WidgetSwitcher)> PickedButtonHovered;       // 0x14D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DisplayAsArchived;                                 // 0x14E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint);
	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void OnArchivedStatusUpdated(bool bShowAsArchived, bool bUseAnimations);
	void OnChangeOwnedState(bool bOwned);
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnUpdateExclusiveWarning(bool bShouldWarn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPickerTileButton_C">();
	}
	static class UAthenaCustomizationPickerTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPickerTileButton_C>();
	}
};

}


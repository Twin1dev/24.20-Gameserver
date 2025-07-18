﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarConfirmationButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarConfirmationButton.SidebarConfirmationButton_C
// 0x0040 (0x1470 - 0x1430)
class USidebarConfirmationButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x1438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x1440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_InteractionName;                              // 0x1448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsAccept;                                         // 0x1450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1451[0x7];                                     // 0x1451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisplayText;                                       // 0x1458(0x0018)(Edit, BlueprintVisible)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarConfirmationButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarConfirmationButton_C">();
	}
	static class USidebarConfirmationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarConfirmationButton_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StandaloneItemShop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StandaloneItemShop.StandaloneItemShop_C
// 0x0040 (0x0678 - 0x0638)
class UStandaloneItemShop_C final : public UFortStandaloneItemShop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0638(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HBox_Tabs;                                         // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TabBackground;                               // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LoadingBackground;                                 // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                           MTXButton;                                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    NextTabAction;                                     // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    PreviousTabAction;                                 // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_TabButtons;                               // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StandaloneItemShop(int32 EntryPoint);
	void InitializeTabs();
	void OnCameraLevelLoaded();
	void OnLoadingIndicatorShown(bool bShown);
	void OnTabSelected(int32 TabIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StandaloneItemShop_C">();
	}
	static class UStandaloneItemShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandaloneItemShop_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_Scalar_Narrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C
// 0x0020 (0x0310 - 0x02F0)
class USettingsListEntry_Scalar_Narrow_C final : public UFortSettingsListEntrySetting_Scalar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DefaultValueLayer;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*           Progress;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingsListEntry_Scalar_Narrow(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnDefaultValueChanged(float DefaultValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnValueChanged(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_Scalar_Narrow_C">();
	}
	static class USettingsListEntry_Scalar_Narrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_Scalar_Narrow_C>();
	}
};

}


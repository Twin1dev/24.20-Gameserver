﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMOTDSimpleNewsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C
// 0x0058 (0x0438 - 0x03E0)
class UAthenaMOTDSimpleNewsWidget_C final : public UFortAthenaMOTDSimpleNewsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Backplate;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GlowBackground;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Border;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ColorFade;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxButtonSize;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColor                                 DarkDefaultColor;                                  // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 LightDefaultColor;                                 // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 PreviewDarkColor;                                  // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TestPreviewColors;                                 // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D[0x3];                                      // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 PreviewLightColor;                                 // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32 EntryPoint);
	void OnPopulateNews(const struct FAthenaMOTDBase& NewsEntry);
	void PreConstruct(bool IsDesignTime);
	void SetDynamicColors(const struct FColor& Dark, const struct FColor& Light);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMOTDSimpleNewsWidget_C">();
	}
	static class UAthenaMOTDSimpleNewsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMOTDSimpleNewsWidget_C>();
	}
};

}


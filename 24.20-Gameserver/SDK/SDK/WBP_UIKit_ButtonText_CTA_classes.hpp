﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UIKit_ButtonText_CTA

#include "Basic.hpp"

#include "WBP_UIKit_Block_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C
// 0x0090 (0x0338 - 0x02A8)
class UWBP_UIKit_ButtonText_CTA_C final : public UWBP_UIKit_Block_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Bounce;                                       // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Disabled_Transition;                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Pressed_Transition;                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Focused_Transition;                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         Font;                                              // 0x02D8(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FontDynamicMaterial;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UIKit_ButtonText_CTA(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDisabled();
	void SetEnabled();
	void SetFont(struct FSlateFontInfo& Font_0);
	void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier);
	void SetText(const class FText& Text, bool* Empty);
	void TransitionDisabled(class UWidgetAnimation* AnimTransition);
	void TransitionEnabled(class UWidgetAnimation* AnimTransition);
	void TransitionFocused(class UWidgetAnimation* AnimTransition);
	void TransitionPressed(class UWidgetAnimation* AnimTransition);
	void TransitionReleased(class UWidgetAnimation* AnimTransition);
	void TransitionUnfocused(class UWidgetAnimation* AnimTransition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_ButtonText_CTA_C">();
	}
	static class UWBP_UIKit_ButtonText_CTA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_ButtonText_CTA_C>();
	}
};

}


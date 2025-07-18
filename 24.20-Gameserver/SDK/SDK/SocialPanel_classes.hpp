﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
// 0x0030 (0x0568 - 0x0538)
class USocialPanel_C final : public UFortSocialPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnOpened;                                          // 0x0540(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Back;                                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialPanel_TopBarExtension_C*         SocialPanel_TopBarExtension;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ClosePanel();
	void ClosePanelAfterAnimation();
	void Destruct();
	void ExecuteUbergraph_SocialPanel(int32 EntryPoint);
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Play_Panel_Animation_Sound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_C">();
	}
	static class USocialPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_C>();
	}
};

}


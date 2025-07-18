﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaFrontend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S12_CineTransitionData_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaFrontend.AthenaFrontend_C
// 0x00A8 (0x09F8 - 0x0950)
class UAthenaFrontend_C final : public UAthenaUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0950(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaFPS_C*                           AthenaFPS;                                         // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTemperature_C*                   AthenaTemperature;                                 // 0x0960(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      BuildWatermark;                                    // 0x0968(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_PTT;                                        // 0x0970(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_FrontendFlowDebug;                 // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContentOnDemand_C*                     ContentOnDemand;                                   // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortVoiceChannelSpeakerContainer_C*    FortVoiceChannelSpeakerContainer;                  // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontendEventNotifications_C*          FrontendEventNotifications;                        // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PTT_Image;                                         // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_Bottom;                                   // 0x09A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxPTT;                                        // 0x09B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          StartedPlayingVideo;                               // 0x09B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B9[0x3];                                      // 0x09B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TransitionIndex;                                   // 0x09BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS12_CineTransitionData>        TransitionAudioData;                               // 0x09C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMediaPlayer*                           MovieMediaPlayer;                                  // 0x09D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TransitionSound01;                                 // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TransitionSound02;                                 // 0x09E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimerHandle>                   AudioTimerHandles;                                 // 0x09E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButtonLegacy* Button, bool Selected);
	void Construct();
	void DisplayDebugFlowText(const class FText& DebugFlowText);
	void ExecuteUbergraph_AthenaFrontend(int32 EntryPoint);
	void HideDebugFlowText();
	void InitChatVisibilityButton();
	void On_Can_PTT();
	void OnSetFrontendVisibilityMode(EFrontendVisibilityMode InFrontendVisibilityMode);
	void OnTrailerMediaEnded();
	void OnTrailerMediaOpened(const class FString& OpenedUrl);
	void OnTrailerTransitionAudioCheck();
	void PlayTrailer();
	void SetChatWidgetVisibility(bool Visible);
	void SetOverlayTitleBarVisibility(bool Visible);
	void StartTrailerTransitionAudioCheck(class UMediaPlayer* MediaPlayer);
	void StopTrailerTransitionAudioCheck();
	void UpdatePttVisibility(EPTTState PTTState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFrontend_C">();
	}
	static class UAthenaFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFrontend_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortVoiceChannelSpeaker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// 0x0020 (0x0338 - 0x0318)
class UFortVoiceChannelSpeaker_C final : public UFortVoiceChannelSpeakerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimateVoice;                                      // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Content;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortVoiceChannelSpeaker(int32 EntryPoint);
	void OnAnimateTalkingChanged(bool bIsNowTalking);
	void OnStyleAssigned(EChannelSpeakerStyle NewStyle);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVoiceChannelSpeaker_C">();
	}
	static class UFortVoiceChannelSpeaker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVoiceChannelSpeaker_C>();
	}
};

}


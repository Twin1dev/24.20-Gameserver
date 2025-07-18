﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic_TeamMics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// 0x0280 (0x0510 - 0x0290)
class UCinematic_TeamMics_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMicIndicator_C*                        MicIndicator;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            SwitcherConnectingStranger;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock_6;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x02C0(0x0250)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint);
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic-TeamMics_C">();
	}
	static class UCinematic_TeamMics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematic_TeamMics_C>();
	}
};

}


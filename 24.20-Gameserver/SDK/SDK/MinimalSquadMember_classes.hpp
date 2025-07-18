﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimalSquadMember

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// 0x0050 (0x14B0 - 0x1460)
class UMinimalSquadMember_C final : public UAthenaMinimalSquadMemberEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StyleNotReady;                                     // 0x1468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleSitOut;                                       // 0x1470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleEmpty;                                        // 0x1478(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnReady;                                           // 0x1480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Meeple;                                      // 0x1488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LocalUserIndicator;                                // 0x1490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MeepleContainer;                                   // 0x1498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReadyFlash;                                        // 0x14A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void ExecuteUbergraph_MinimalSquadMember(int32 EntryPoint);
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void SetEmptyVisuals();
	void SetNotReadyVisuals();
	void SetReadyVisuals();
	void SetSitOutVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimalSquadMember_C">();
	}
	static class UMinimalSquadMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimalSquadMember_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CrewContentContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CrewContentContainer.CrewContentContainer_C
// 0x0020 (0x0468 - 0x0448)
class UCrewContentContainer_C final : public UCrewSubscriptionContentContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    NextTabAction;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    PreviousTabAction;                                 // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_CrewContentContainer(int32 EntryPoint);
	void OnTabSelected(int32 TabIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewContentContainer_C">();
	}
	static class UCrewContentContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewContentContainer_C>();
	}
};

}


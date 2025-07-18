﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MusicEventDebugWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
// 0x0040 (0x02A8 - 0x0268)
class UB_MusicEventDebugWidget_C final : public UMusicEventSubsystemDebugWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        Background;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        EventInstances;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 AssetFilter;                                       // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMusicEventInstance*>            Instances;                                         // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         FontSize;                                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_MusicEventDebugWidget(int32 EntryPoint);
	void FilterInstances();
	void SetEventInstances(const TArray<class UMusicEventInstance*>& Instances_0);
	void SetMusicEventAssetFilter(const class FString& Filter);
	void SetMusicEventFontSize(int32 Size);
	void SetMusicEventPos(double X, double Y);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MusicEventDebugWidget_C">();
	}
	static class UB_MusicEventDebugWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_MusicEventDebugWidget_C>();
	}
};

}


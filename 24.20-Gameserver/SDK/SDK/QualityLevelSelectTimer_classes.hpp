﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QualityLevelSelectTimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QualityLevelSelectTimer.QualityLevelSelectTimer_C
// 0x0018 (0x02E8 - 0x02D0)
class UQualityLevelSelectTimer_C final : public UFortHUDQualityLevelSelectTimer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        TextScaleUnderOneSecond;                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TextScaleOverOneSecond;                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnInitialized();
	void UpdateTextScale(double TimeRemaining);
	void ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint);
	void OnTimeRemainingChanged(const float TimeRemaining);
	void OnProgressStarted(const float Duration);
	void OnProgressEnded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QualityLevelSelectTimer_C">();
	}
	static class UQualityLevelSelectTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQualityLevelSelectTimer_C>();
	}
};

}


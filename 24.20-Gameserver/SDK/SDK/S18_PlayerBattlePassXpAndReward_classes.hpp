﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S18_PlayerBattlePassXpAndReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C
// 0x0030 (0x02C0 - 0x0290)
class US18_PlayerBattlePassXpAndReward_C final : public UFortSeasonDataWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Collapse;                                          // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_RaceTrack;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_CurrentLevel;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_Level;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Max_BPLevel_for_Rewards;                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_S18_PlayerBattlePassXpAndReward(int32 EntryPoint);
	void OnLevelChanged();
	void OnProgressUpdated();
	void OnSuperCharged();
	void SetCollapsedMode(bool IsCollapsed);
	void Update_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S18_PlayerBattlePassXpAndReward_C">();
	}
	static class US18_PlayerBattlePassXpAndReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<US18_PlayerBattlePassXpAndReward_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LevelCount

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LevelCount.WBP_LevelCount_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_LevelCount_C final : public UFortBattlePassLevelCount
{
public:
	class UBPS24_BattlePassDynamicIcon_C*         WBP_BattlePassDynamicIcon;                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LevelCount_C">();
	}
	static class UWBP_LevelCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LevelCount_C>();
	}
};

}


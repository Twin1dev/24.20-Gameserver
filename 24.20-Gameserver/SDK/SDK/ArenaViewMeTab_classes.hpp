﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaViewMeTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArenaViewMeTab.ArenaViewMeTab_C
// 0x0008 (0x03B8 - 0x03B0)
class UArenaViewMeTab_C final : public UFortArenaPersonalViewTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Colorize(const struct FFortTournamentDisplayInfo& ColorInfo);
	void ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaViewMeTab_C">();
	}
	static class UArenaViewMeTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaViewMeTab_C>();
	}
};

}


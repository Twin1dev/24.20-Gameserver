﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S18_PlayerBattlePassXpAndReward

#include "Basic.hpp"

#include "S18_PlayerBattlePassXpAndReward_classes.hpp"
#include "S18_PlayerBattlePassXpAndReward_parameters.hpp"


namespace SDK
{

// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void US18_PlayerBattlePassXpAndReward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.ExecuteUbergraph_S18_PlayerBattlePassXpAndReward
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void US18_PlayerBattlePassXpAndReward_C::ExecuteUbergraph_S18_PlayerBattlePassXpAndReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "ExecuteUbergraph_S18_PlayerBattlePassXpAndReward");

	Params::S18_PlayerBattlePassXpAndReward_C_ExecuteUbergraph_S18_PlayerBattlePassXpAndReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnLevelChanged
// (Event, Protected, BlueprintEvent)

void US18_PlayerBattlePassXpAndReward_C::OnLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "OnLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnProgressUpdated
// (Event, Protected, BlueprintEvent)

void US18_PlayerBattlePassXpAndReward_C::OnProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "OnProgressUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.OnSuperCharged
// (Event, Protected, BlueprintEvent)

void US18_PlayerBattlePassXpAndReward_C::OnSuperCharged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "OnSuperCharged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.SetCollapsedMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCollapsed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void US18_PlayerBattlePassXpAndReward_C::SetCollapsedMode(bool IsCollapsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "SetCollapsedMode");

	Params::S18_PlayerBattlePassXpAndReward_C_SetCollapsedMode Parms{};

	Parms.IsCollapsed = IsCollapsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function S18_PlayerBattlePassXpAndReward.S18_PlayerBattlePassXpAndReward_C.Update Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void US18_PlayerBattlePassXpAndReward_C::Update_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S18_PlayerBattlePassXpAndReward_C", "Update Text");

	UObject::ProcessEvent(Func, nullptr);
}

}


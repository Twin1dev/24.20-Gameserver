﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GoalsPageQuestCard

#include "Basic.hpp"

#include "GoalsPageQuestCard_classes.hpp"
#include "GoalsPageQuestCard_parameters.hpp"


namespace SDK
{

// Function GoalsPageQuestCard.GoalsPageQuestCard_C.ExecuteUbergraph_GoalsPageQuestCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::ExecuteUbergraph_GoalsPageQuestCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "ExecuteUbergraph_GoalsPageQuestCard");

	Params::GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGoalsPageQuestCard_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "OnMouseEnter");

	Params::GoalsPageQuestCard_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGoalsPageQuestCard_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "OnMouseLeave");

	Params::GoalsPageQuestCard_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.OnTimerSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// const EAthenaChallengeTimerState        TimerState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::OnTimerSet(const EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "OnTimerSet");

	Params::GoalsPageQuestCard_C_OnTimerSet Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.PopulateBattlePassRequirement
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bBattlePassRequired                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::PopulateBattlePassRequirement(const bool bBattlePassRequired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "PopulateBattlePassRequirement");

	Params::GoalsPageQuestCard_C_PopulateBattlePassRequirement Parms{};

	Parms.bBattlePassRequired = bBattlePassRequired;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.PopulateHeader
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FBundleGoalCardDisplayData&GoalCardDisplayData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGoalsPageQuestCard_C::PopulateHeader(const struct FBundleGoalCardDisplayData& GoalCardDisplayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "PopulateHeader");

	Params::GoalsPageQuestCard_C_PopulateHeader Parms{};

	Parms.GoalCardDisplayData = std::move(GoalCardDisplayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.PopulateHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::PopulateHeaderText(const class FText& Text, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "PopulateHeaderText");

	Params::GoalsPageQuestCard_C_PopulateHeaderText Parms{};

	Parms.Text = std::move(Text);
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.PopulateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>           Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   MilestoneTier                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::PopulateIcon(TSoftObjectPtr<class UObject> Icon, int32 MilestoneTier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "PopulateIcon");

	Params::GoalsPageQuestCard_C_PopulateIcon Parms{};

	Parms.Icon = Icon;
	Parms.MilestoneTier = MilestoneTier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.PopulateIsSelectable
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bCardIsSelectable                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::PopulateIsSelectable(const bool bCardIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "PopulateIsSelectable");

	Params::GoalsPageQuestCard_C_PopulateIsSelectable Parms{};

	Parms.bCardIsSelectable = bCardIsSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.PopulateSubHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   MilestoneTier                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::PopulateSubHeaderText(const class FText& Text, int32 MilestoneTier, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "PopulateSubHeaderText");

	Params::GoalsPageQuestCard_C_PopulateSubHeaderText Parms{};

	Parms.Text = std::move(Text);
	Parms.MilestoneTier = MilestoneTier;
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGoalsPageQuestCard_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.SetIsSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::SetIsSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "SetIsSelected");

	Params::GoalsPageQuestCard_C_SetIsSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.SetTimerStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaChallengeTimerState              TimerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::SetTimerStyling(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "SetTimerStyling");

	Params::GoalsPageQuestCard_C_SetTimerStyling Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GoalsPageQuestCard.GoalsPageQuestCard_C.ShowNewBang
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoalsPageQuestCard_C::ShowNewBang(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCard_C", "ShowNewBang");

	Params::GoalsPageQuestCard_C_ShowNewBang Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


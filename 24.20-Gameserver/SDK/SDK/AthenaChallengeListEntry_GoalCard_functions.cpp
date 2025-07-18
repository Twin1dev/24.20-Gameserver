﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengeListEntry_GoalCard

#include "Basic.hpp"

#include "AthenaChallengeListEntry_GoalCard_classes.hpp"
#include "AthenaChallengeListEntry_GoalCard_parameters.hpp"


namespace SDK
{

// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeListEntry_GoalCard_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "BP_OnItemSelectionChanged");

	Params::AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.ExecuteUbergraph_AthenaChallengeListEntry_GoalCard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeListEntry_GoalCard_C::ExecuteUbergraph_AthenaChallengeListEntry_GoalCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "ExecuteUbergraph_AthenaChallengeListEntry_GoalCard");

	Params::AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.IsUsingGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeListEntry_GoalCard_C::IsUsingGamepad(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "IsUsingGamepad");

	Params::AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function AthenaChallengeListEntry_GoalCard.AthenaChallengeListEntry_GoalCard_C.OnChallengeDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bDisabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeListEntry_GoalCard_C::OnChallengeDataSet(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeListEntry_GoalCard_C", "OnChallengeDataSet");

	Params::AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet Parms{};

	Parms.bDisabled = bDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


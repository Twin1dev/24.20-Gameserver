﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestMapCategoryButton

#include "Basic.hpp"

#include "QuestMapCategoryButton_classes.hpp"
#include "QuestMapCategoryButton_parameters.hpp"


namespace SDK
{

// Function QuestMapCategoryButton.QuestMapCategoryButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UQuestMapCategoryButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UQuestMapCategoryButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UQuestMapCategoryButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.BP_OnTimerSet
// (BlueprintEvent)
// Parameters:
// EAthenaChallengeTimerState              TimerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::BP_OnTimerSet(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnTimerSet");

	Params::QuestMapCategoryButton_C_BP_OnTimerSet Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UQuestMapCategoryButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.BP_Populate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Title                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class FText&                      SubText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   CompletedQuests                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalQuest                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FQuestCategoryButtonOverrides&ButtonOverrides                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bQuestListContentDisabled                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::BP_Populate(const class FText& Title, const class FText& SubText, int32 CompletedQuests, int32 TotalQuest, const struct FQuestCategoryButtonOverrides& ButtonOverrides, bool bQuestListContentDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "BP_Populate");

	Params::QuestMapCategoryButton_C_BP_Populate Parms{};

	Parms.Title = std::move(Title);
	Parms.SubText = std::move(SubText);
	Parms.CompletedQuests = CompletedQuests;
	Parms.TotalQuest = TotalQuest;
	Parms.ButtonOverrides = std::move(ButtonOverrides);
	Parms.bQuestListContentDisabled = bQuestListContentDisabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMapCategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.ExecuteUbergraph_QuestMapCategoryButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::ExecuteUbergraph_QuestMapCategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "ExecuteUbergraph_QuestMapCategoryButton");

	Params::QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.OnFocusReceivedFromQuests
// (Event, Protected, BlueprintEvent)

void UQuestMapCategoryButton_C::OnFocusReceivedFromQuests()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnFocusReceivedFromQuests");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.OnFocusSetToQuests
// (Event, Protected, BlueprintEvent)

void UQuestMapCategoryButton_C::OnFocusSetToQuests()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnFocusSetToQuests");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.OnMoreInTimerSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const EAthenaChallengeTimerState        TimerState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FTimespan&                 TimeRemaining                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::OnMoreInTimerSet(const EAthenaChallengeTimerState TimerState, const struct FTimespan& TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnMoreInTimerSet");

	Params::QuestMapCategoryButton_C_OnMoreInTimerSet Parms{};

	Parms.TimerState = TimerState;
	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.OnTimeRemainingTimerSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const EAthenaChallengeTimerState        TimerState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const EQuestCategoryButtonTimerState    TimerType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      TimerText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FTimespan&                 TimeRemaining                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::OnTimeRemainingTimerSet(const EAthenaChallengeTimerState TimerState, const EQuestCategoryButtonTimerState TimerType, const class FText& TimerText, const struct FTimespan& TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "OnTimeRemainingTimerSet");

	Params::QuestMapCategoryButton_C_OnTimeRemainingTimerSet Parms{};

	Parms.TimerState = TimerState;
	Parms.TimerType = TimerType;
	Parms.TimerText = std::move(TimerText);
	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.Populate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Title                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class FText&                      SubText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   CompletedQuests                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalQuests                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestCategoryButtonOverrides&   Overrides                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestMapCategoryButton_C::Populate(const class FText& Title, const class FText& SubText, int32 CompletedQuests, int32 TotalQuests, struct FQuestCategoryButtonOverrides& Overrides)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "Populate");

	Params::QuestMapCategoryButton_C_Populate Parms{};

	Parms.Title = std::move(Title);
	Parms.SubText = std::move(SubText);
	Parms.CompletedQuests = CompletedQuests;
	Parms.TotalQuests = TotalQuests;
	Parms.Overrides = std::move(Overrides);

	UObject::ProcessEvent(Func, &Parms);

	Overrides = std::move(Parms.Overrides);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "PreConstruct");

	Params::QuestMapCategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.SetCompletedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AllCompleted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::SetCompletedState(bool AllCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetCompletedState");

	Params::QuestMapCategoryButton_C_SetCompletedState Parms{};

	Parms.AllCompleted = AllCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.SetNudgeAnimValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::SetNudgeAnimValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetNudgeAnimValue");

	Params::QuestMapCategoryButton_C_SetNudgeAnimValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.SetTimer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EAthenaChallengeTimerState        TimerState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const EQuestCategoryButtonTimerState    TimerType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      TimerText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FTimespan&                 Timespan                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::SetTimer(const EAthenaChallengeTimerState TimerState, const EQuestCategoryButtonTimerState TimerType, const class FText& TimerText, const struct FTimespan& Timespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetTimer");

	Params::QuestMapCategoryButton_C_SetTimer Parms{};

	Parms.TimerState = TimerState;
	Parms.TimerType = TimerType;
	Parms.TimerText = std::move(TimerText);
	Parms.Timespan = std::move(Timespan);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.SetTimerStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaChallengeTimerState              TimerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::SetTimerStyling(EAthenaChallengeTimerState TimerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetTimerStyling");

	Params::QuestMapCategoryButton_C_SetTimerStyling Parms{};

	Parms.TimerState = TimerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.SetTitle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Title                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class FText&                      SubText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestMapCategoryButton_C::SetTitle(const class FText& Title, const class FText& SubText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetTitle");

	Params::QuestMapCategoryButton_C_SetTitle Parms{};

	Parms.Title = std::move(Title);
	Parms.SubText = std::move(SubText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.SetVisuals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestCategoryButtonOverrides&   Overrides                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestMapCategoryButton_C::SetVisuals(struct FQuestCategoryButtonOverrides& Overrides)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "SetVisuals");

	Params::QuestMapCategoryButton_C_SetVisuals Parms{};

	Parms.Overrides = std::move(Overrides);

	UObject::ProcessEvent(Func, &Parms);

	Overrides = std::move(Parms.Overrides);
}


// Function QuestMapCategoryButton.QuestMapCategoryButton_C.ShowNewBang
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapCategoryButton_C::ShowNewBang(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapCategoryButton_C", "ShowNewBang");

	Params::QuestMapCategoryButton_C_ShowNewBang Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


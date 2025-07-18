﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CorrectiveActionDateOfBirthScreen

#include "Basic.hpp"

#include "CorrectiveActionDateOfBirthScreen_classes.hpp"
#include "CorrectiveActionDateOfBirthScreen_parameters.hpp"


namespace SDK
{

// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowFailureReason
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      FailureReason                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCorrectiveActionDateOfBirthScreen_C::OnShowFailureReason(const class FText& FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDateOfBirthScreen_C", "OnShowFailureReason");

	Params::CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason Parms{};

	Parms.FailureReason = std::move(FailureReason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowCorrectiveActionProcessing
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShowProcessing                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionDateOfBirthScreen_C::OnShowCorrectiveActionProcessing(bool bShowProcessing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDateOfBirthScreen_C", "OnShowCorrectiveActionProcessing");

	Params::CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing Parms{};

	Parms.bShowProcessing = bShowProcessing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.ExecuteUbergraph_CorrectiveActionDateOfBirthScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionDateOfBirthScreen_C::ExecuteUbergraph_CorrectiveActionDateOfBirthScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDateOfBirthScreen_C", "ExecuteUbergraph_CorrectiveActionDateOfBirthScreen");

	Params::CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


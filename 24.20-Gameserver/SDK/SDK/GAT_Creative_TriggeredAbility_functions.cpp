﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Creative_TriggeredAbility

#include "Basic.hpp"

#include "GAT_Creative_TriggeredAbility_classes.hpp"
#include "GAT_Creative_TriggeredAbility_parameters.hpp"


namespace SDK
{

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout
// (BlueprintCallable, BlueprintEvent)

void UGAT_Creative_TriggeredAbility_C::AbilityTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "AbilityTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "ExecuteUbergraph_GAT_Creative_TriggeredAbility");

	Params::GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_Creative_TriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_C::SetupAbilityFailsafeTimer(double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "SetupAbilityFailsafeTimer");

	Params::GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             PropertyName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_C::IsPropertyOverridden(class FName PropertyName, bool* bResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "IsPropertyOverridden");

	Params::GAT_Creative_TriggeredAbility_C_IsPropertyOverridden Parms{};

	Parms.PropertyName = PropertyName;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Lockout

#include "Basic.hpp"

#include "GA_Athena_Lockout_classes.hpp"
#include "GA_Athena_Lockout_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Lockout_C::ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "ExecuteUbergraph_GA_Athena_Lockout");

	Params::GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Athena_Lockout_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "FailedToActivatePassiveAbility");

	Params::GA_Athena_Lockout_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Lockout_C::Failsafe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "Failsafe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Lockout_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Lockout_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_OnEndAbility");

	Params::GA_Athena_Lockout_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}


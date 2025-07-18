﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Creative_OnKillSiphon

#include "Basic.hpp"

#include "GA_Creative_OnKillSiphon_classes.hpp"
#include "GA_Creative_OnKillSiphon_parameters.hpp"


namespace SDK
{

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldConvertExcessHealthToShields_0                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ShieldToAdd                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bAddedShields                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 ShieldAdded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::AddShields(bool bShouldConvertExcessHealthToShields_0, double ShieldToAdd, bool* bAddedShields, double* ShieldAdded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "AddShields");

	Params::GA_Creative_OnKillSiphon_C_AddShields Parms{};

	Parms.bShouldConvertExcessHealthToShields_0 = bShouldConvertExcessHealthToShields_0;
	Parms.ShieldToAdd = ShieldToAdd;

	UObject::ProcessEvent(Func, &Parms);

	if (bAddedShields != nullptr)
		*bAddedShields = Parms.bAddedShields;

	if (ShieldAdded != nullptr)
		*ShieldAdded = Parms.ShieldAdded;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Creative_OnKillSiphon_C::AttemptHeal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "AttemptHeal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Creative_OnKillSiphon_C::AttemptMats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "AttemptMats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortResourceType                       ResourceGrantType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  ResourceToGive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortResourceType*                      ResourceType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::CalculateResources(EFortResourceType ResourceGrantType, bool* bSuccess, int32* ResourceToGive, EFortResourceType* ResourceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "CalculateResources");

	Params::GA_Creative_OnKillSiphon_C_CalculateResources Parms{};

	Parms.ResourceGrantType = ResourceGrantType;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ResourceToGive != nullptr)
		*ResourceToGive = Parms.ResourceToGive;

	if (ResourceType != nullptr)
		*ResourceType = Parms.ResourceType;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HealingAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 MaxHealth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 CurrentHealth                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 HealthDelta                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 ExcessHealh                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::DetermineHealthDelta(double HealingAmount, double* MaxHealth, double* CurrentHealth, double* HealthDelta, double* ExcessHealh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "DetermineHealthDelta");

	Params::GA_Creative_OnKillSiphon_C_DetermineHealthDelta Parms{};

	Parms.HealingAmount = HealingAmount;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxHealth != nullptr)
		*MaxHealth = Parms.MaxHealth;

	if (CurrentHealth != nullptr)
		*CurrentHealth = Parms.CurrentHealth;

	if (HealthDelta != nullptr)
		*HealthDelta = Parms.HealthDelta;

	if (ExcessHealh != nullptr)
		*ExcessHealh = Parms.ExcessHealh;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::ExecuteUbergraph_GA_Creative_OnKillSiphon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "ExecuteUbergraph_GA_Creative_OnKillSiphon");

	Params::GA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldGrant                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GiveAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortResourceType                       GiveType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::GiveResourcesToPlayer(bool bShouldGrant, int32 GiveAmount, EFortResourceType GiveType, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "GiveResourcesToPlayer");

	Params::GA_Creative_OnKillSiphon_C_GiveResourcesToPlayer Parms{};

	Parms.bShouldGrant = bShouldGrant;
	Parms.GiveAmount = GiveAmount;
	Parms.GiveType = GiveType;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Creative_OnKillSiphon_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 InitialHealAmount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 ActualAppliedHeal                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 ExcessHealing                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::RestoreHealth(bool* Success, double* InitialHealAmount, double* ActualAppliedHeal, double* ExcessHealing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "RestoreHealth");

	Params::GA_Creative_OnKillSiphon_C_RestoreHealth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (InitialHealAmount != nullptr)
		*InitialHealAmount = Parms.InitialHealAmount;

	if (ActualAppliedHeal != nullptr)
		*ActualAppliedHeal = Parms.ActualAppliedHeal;

	if (ExcessHealing != nullptr)
		*ExcessHealing = Parms.ExcessHealing;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   ShouldContinue                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnKillSiphon_C::SetupRestoreModes(bool* ShouldContinue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "SetupRestoreModes");

	Params::GA_Creative_OnKillSiphon_C_SetupRestoreModes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldContinue != nullptr)
		*ShouldContinue = Parms.ShouldContinue;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Creative_OnKillSiphon_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Creative_OnKillSiphon_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


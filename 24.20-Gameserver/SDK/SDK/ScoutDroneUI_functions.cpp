﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoutDroneUI

#include "Basic.hpp"

#include "ScoutDroneUI_classes.hpp"
#include "ScoutDroneUI_parameters.hpp"


namespace SDK
{

// Function ScoutDroneUI.DronePickUpIndicatorComponent.Init
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AFortScoutDrone*                  Drone                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDronePickUpIndicatorComponent::Init(class AFortScoutDrone* Drone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DronePickUpIndicatorComponent", "Init");

	Params::DronePickUpIndicatorComponent_Init Parms{};

	Parms.Drone = Drone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                           DestroyedActor                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDronePickUpIndicatorComponent::OnDroneDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DronePickUpIndicatorComponent", "OnDroneDestroyed");

	Params::DronePickUpIndicatorComponent_OnDroneDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScoutDroneHUD::GetTargetConfirmationTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "GetTargetConfirmationTime");

	Params::ScoutDroneHUD_GetTargetConfirmationTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneDismissAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneDismissAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   EnergyPercentage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnDroneEnergyChanged(float EnergyPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneEnergyChanged");

	Params::ScoutDroneHUD_OnDroneEnergyChanged Parms{};

	Parms.EnergyPercentage = EnergyPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPercentage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   CurrentHealth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneHealthUpdated");

	Params::ScoutDroneHUD_OnDroneHealthUpdated Parms{};

	Parms.HealthPercentage = HealthPercentage;
	Parms.CurrentHealth = CurrentHealth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneInteractAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneInteractAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneInteractAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneInteractAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneMarkAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneMarkAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneMarkAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneMarkAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDronePickUpAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDronePickUpAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDronePickUpTargetsAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpTargetsAvailable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDronePickUpTargetsEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpTargetsEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DistanceFromPlayer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   SignalPercentage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSignalDataUpdated");

	Params::ScoutDroneHUD_OnDroneSignalDataUpdated Parms{};

	Parms.DistanceFromPlayer = DistanceFromPlayer;
	Parms.SignalPercentage = SignalPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneSpeedBoostAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSpeedBoostAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnDroneSpeedBoostAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSpeedBoostAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged
// (Event, Protected, BlueprintEvent)

void UScoutDroneHUD::OnOwningPlayerDamaged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnOwningPlayerDamaged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              UpdatedTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnReticleChangeAbilityActivated(const struct FGameplayTag& UpdatedTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnReticleChangeAbilityActivated");

	Params::ScoutDroneHUD_OnReticleChangeAbilityActivated Parms{};

	Parms.UpdatedTag = std::move(UpdatedTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FScoutDroneStatusData&     StatusData                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnTargetingStatusChanged(const struct FScoutDroneStatusData& StatusData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnTargetingStatusChanged");

	Params::ScoutDroneHUD_OnTargetingStatusChanged Parms{};

	Parms.StatusData = std::move(StatusData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoutDroneUI.ScoutDroneHUD.GetControlledDrone
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortScoutDrone*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortScoutDrone* UScoutDroneHUD::GetControlledDrone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "GetControlledDrone");

	Params::ScoutDroneHUD_GetControlledDrone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterSignalLossRange
// (Event, Protected, BlueprintEvent)

void UScoutDroneTetherIndicator::BP_OnEnterSignalLossRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnEnterSignalLossRange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterWarningRange
// (Event, Protected, BlueprintEvent)

void UScoutDroneTetherIndicator::BP_OnEnterWarningRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnEnterWarningRange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnExitWarningRange
// (Event, Protected, BlueprintEvent)

void UScoutDroneTetherIndicator::BP_OnExitWarningRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnExitWarningRange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_WhileInWarningRange
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   SignalIntensityPercentage                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneTetherIndicator::BP_WhileInWarningRange(float SignalIntensityPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_WhileInWarningRange");

	Params::ScoutDroneTetherIndicator_BP_WhileInWarningRange Parms{};

	Parms.SignalIntensityPercentage = SignalIntensityPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.GetControlledDrone
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortScoutDrone*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortScoutDrone* UScoutDroneTetherIndicator::GetControlledDrone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "GetControlledDrone");

	Params::ScoutDroneTetherIndicator_GetControlledDrone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDeployed
// (Event, Protected, BlueprintEvent)

void AScoutDroneUIDirector::BP_OnScoutDroneDeployed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneUIDirector", "BP_OnScoutDroneDeployed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDismissed
// (Event, Protected, BlueprintEvent)

void AScoutDroneUIDirector::BP_OnScoutDroneDismissed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneUIDirector", "BP_OnScoutDroneDismissed");

	UObject::ProcessEvent(Func, nullptr);
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultWorld

#include "Basic.hpp"

#include "VaultWorld_classes.hpp"
#include "VaultWorld_parameters.hpp"


namespace SDK
{

// Function VaultWorld.VaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultWorld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultWorld.VaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPlayForward                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBackgroundIntensityLevel               IntensityTransition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnTransitionBackground");

	Params::VaultWorld_C_OnTransitionBackground Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWorld.VaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShowFloor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowEffects                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnUpdateDisplay");

	Params::VaultWorld_C_OnUpdateDisplay Parms{};

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWorld.VaultWorld_C.OnSetupBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class UTexture2D*                 LoadedBackgroundTexture                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVaultWorldBackgroundData& BackgroundInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVaultWorld_C::OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnSetupBackground");

	Params::VaultWorld_C_OnSetupBackground Parms{};

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = std::move(BackgroundInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWorld.VaultWorld_C.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bShowItemDetails                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::OnTransitionItemDetails(const bool bShowItemDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnTransitionItemDetails");

	Params::VaultWorld_C_OnTransitionItemDetails Parms{};

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::ExecuteUbergraph_VaultWorld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "ExecuteUbergraph_VaultWorld");

	Params::VaultWorld_C_ExecuteUbergraph_VaultWorld Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWorld.VaultWorld_C.GetVaultRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVaultRotator_C**                 VaultRotator                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AVaultWorld_C::GetVaultRotator(class AVaultRotator_C** VaultRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "GetVaultRotator");

	Params::VaultWorld_C_GetVaultRotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VaultRotator != nullptr)
		*VaultRotator = Parms.VaultRotator;
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorSoundIndicatorComponent

#include "Basic.hpp"

#include "DoorSoundIndicatorComponent_classes.hpp"
#include "DoorSoundIndicatorComponent_parameters.hpp"


namespace SDK
{

// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.GetAffiliationsToShowFor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<EFortTeamAffiliation>            ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<EFortTeamAffiliation> UDoorSoundIndicatorComponent_C::GetAffiliationsToShowFor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "GetAffiliationsToShowFor");

	Params::DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C.ShouldShowSoundIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerController*            PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDoorSoundIndicatorComponent_C::ShouldShowSoundIndicator(class AFortPlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorSoundIndicatorComponent_C", "ShouldShowSoundIndicator");

	Params::DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


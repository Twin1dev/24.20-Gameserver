﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CRD_CinematicSequence

#include "Basic.hpp"

#include "CRD_CinematicSequence_classes.hpp"
#include "CRD_CinematicSequence_parameters.hpp"


namespace SDK
{

// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*             Player                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACinematicSequenceDeviceBase::HandleSequencePlayerCreated(class ULevelSequencePlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "HandleSequencePlayerCreated");

	Params::CinematicSequenceDeviceBase_HandleSequencePlayerCreated Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
// (Final, Native, Public, BlueprintCallable)

void ACinematicSequenceDeviceBase::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
// (Final, Native, Public, BlueprintCallable)

void ACinematicSequenceDeviceBase::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
// (Final, Native, Public, BlueprintCallable)

void ACinematicSequenceDeviceBase::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequencePlayer*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequencePlayer* ACinematicSequenceDeviceBase::GetSequencePlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetSequencePlayer");

	Params::CinematicSequenceDeviceBase_GetSequencePlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


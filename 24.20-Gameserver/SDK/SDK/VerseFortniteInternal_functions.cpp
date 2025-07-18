﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortniteInternal

#include "Basic.hpp"

#include "VerseFortniteInternal_classes.hpp"
#include "VerseFortniteInternal_parameters.hpp"


namespace SDK
{

// Function VerseFortniteInternal.FortGameplayAbility_PlayAnim.OnBlendOut
// (Final, Native, Private)
// Parameters:
// const struct FGameplayTag&              NotifyTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_PlayAnim::OnBlendOut(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnBlendOut");

	Params::FortGameplayAbility_PlayAnim_OnBlendOut Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortGameplayAbility_PlayAnim.OnCancelled
// (Final, Native, Private)
// Parameters:
// const struct FGameplayTag&              NotifyTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_PlayAnim::OnCancelled(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCancelled");

	Params::FortGameplayAbility_PlayAnim_OnCancelled Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortGameplayAbility_PlayAnim.OnCompleted
// (Final, Native, Private)
// Parameters:
// const struct FGameplayTag&              NotifyTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_PlayAnim::OnCompleted(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCompleted");

	Params::FortGameplayAbility_PlayAnim_OnCompleted Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortGameplayAbility_PlayAnim.OnInterrupted
// (Final, Native, Private)
// Parameters:
// const struct FGameplayTag&              NotifyTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_PlayAnim::OnInterrupted(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnInterrupted");

	Params::FortGameplayAbility_PlayAnim_OnInterrupted Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortGameplayAbility_PlayAnim.OnNotifyBegin
// (Final, Native, Private)
// Parameters:
// const struct FGameplayTag&              NotifyTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_PlayAnim::OnNotifyBegin(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnNotifyBegin");

	Params::FortGameplayAbility_PlayAnim_OnNotifyBegin Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortGameplayAbility_PlayAnim.OnNotifyEnd
// (Final, Native, Private)
// Parameters:
// const struct FGameplayTag&              NotifyTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_PlayAnim::OnNotifyEnd(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnNotifyEnd");

	Params::FortGameplayAbility_PlayAnim_OnNotifyEnd Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortControllerStateHandlerComponent.NotifyOfStateChange
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FString*                          State                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Active                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerStateHandlerComponent::NotifyOfStateChange(class FString* State, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerStateHandlerComponent", "NotifyOfStateChange");

	Params::FortControllerStateHandlerComponent_NotifyOfStateChange Parms{};

	Parms.Active = Active;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);
}


// Function VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings
// (Final, Native, Private)

void UFortBuildingSettingsComponentBase::OnRep_Settings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponentBase", "OnRep_Settings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerDied
// (Final, Native, Public)
// Parameters:
// class AFortPlayerPawnAthena*            FortPlayerPawnAthena                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayspaceComponentHelper::HandlePlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerDied");

	Params::FortPlayspaceComponentHelper_HandlePlayerDied Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed
// (Final, Native, Public)
// Parameters:
// class APawn*                            Pawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayspaceComponentHelper::HandlePlayerPawnPossessed(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerPawnPossessed");

	Params::FortPlayspaceComponentHelper_HandlePlayerPawnPossessed Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOMRuntime

#include "Basic.hpp"

#include "SOMRuntime_classes.hpp"
#include "SOMRuntime_parameters.hpp"


namespace SDK
{

// Function SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UFortPlaylist*              Playlist                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTagContainer&     PlaylistContextTags                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_ScriptedObjectMovementManager::HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_ScriptedObjectMovementManager", "HandleCurrentPlaylistReady");

	Params::FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FScriptedObjectMovement_StaticPathStepData&StepData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::BeginMovingToStaticPathNode(const struct FScriptedObjectMovement_StaticPathStepData& StepData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "BeginMovingToStaticPathNode");

	Params::FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode Parms{};

	Parms.StepData = std::move(StepData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// const float                             ServerTimeWhenQueryInvoked                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const float                             RemainingTime                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::Cheat_NetMulticast_SendDebugTimerInfo(const float ServerTimeWhenQueryInvoked, const float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Cheat_NetMulticast_SendDebugTimerInfo");

	Params::FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo Parms{};

	Parms.ServerTimeWhenQueryInvoked = ServerTimeWhenQueryInvoked;
	Parms.RemainingTime = RemainingTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::CheatDrawKeyframes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "CheatDrawKeyframes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortScriptedObjectMovement_SlotDefinition*SlotDefinition                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*             StaticMeshComponent                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "ConfigureStaticMeshToSlotDefinition");

	Params::FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition Parms{};

	Parms.SlotDefinition = SlotDefinition;
	Parms.StaticMeshComponent = StaticMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::Editor_ClearResetObjectLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_ClearResetObjectLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::Editor_DebugLogStaticPathTravelIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_DebugLogStaticPathTravelIndex");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::Editor_NextStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_NextStep");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::Editor_PreviousStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_PreviousStep");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::Editor_ResetObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_ResetObject");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep
// (Final, Native, Public)

void AFortScriptedObjectMovement_MovableObjectBase::Editor_TryJumpToStartStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_TryJumpToStartStep");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMeshComponent* AFortScriptedObjectMovement_MovableObjectBase::GetScriptedObjectStaticMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetScriptedObjectStaticMeshComponent");

	Params::FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortScriptedObjectMovement_SlotDefinition*SlotDefinition                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "HandleSlotDefinitionSlotted");

	Params::FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted Parms{};

	Parms.SlotDefinition = SlotDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bReachedBeginPlaySkipStep                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "NotifyStaticPathStepComplete");

	Params::FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete Parms{};

	Parms.bReachedBeginPlaySkipStep = bReachedBeginPlaySkipStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData
// (Final, Native, Private)

void AFortScriptedObjectMovement_MovableObjectBase::OnRep_CurrentStepData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "OnRep_CurrentStepData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bCanEverAffectNavigation                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*                  TargetActorComponent                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "SetCanEverAffectNavigation");

	Params::FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation Parms{};

	Parms.bCanEverAffectNavigation = bCanEverAffectNavigation;
	Parms.TargetActorComponent = TargetActorComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortScriptedObjectMovement_MovableObjectBase::BlockOverlappingStaticPathSteps() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "BlockOverlappingStaticPathSteps");

	Params::FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector*                         OutBoxExtent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::GetStaticPathTravelingBounds(struct FVector* OutBoxExtent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetStaticPathTravelingBounds");

	Params::FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBoxExtent != nullptr)
		*OutBoxExtent = std::move(Parms.OutBoxExtent);
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortScriptedObjectMovement_MovableObjectBase::GetStaticPathZOffsetHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetStaticPathZOffsetHeight");

	Params::FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData
// (Final, Native, Public)

void AScriptedObjectMovement_StaticPath::GeneratePathData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "GeneratePathData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive
// (Native, Protected, HasDefaults)
// Parameters:
// const class FString&                    EventName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTimespan&                 TimeUntilEnd                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTimespan&                 TimeSinceBegin                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TimespanRatio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventActive(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventActive");

	Params::ScriptedObjectMovement_StaticPath_HandleCalendarEventActive Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded
// (Native, Protected, HasDefaults)
// Parameters:
// const class FString&                    EventName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTimespan&                 TimeUntilEnd                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTimespan&                 TimeSinceBegin                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TimespanRatio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventEnded(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventEnded");

	Params::ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated
// (Native, Protected, HasDefaults)
// Parameters:
// const class FString&                    EventName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTimespan&                 TimeUntilEnd                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FTimespan&                 TimeSinceBegin                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TimespanRatio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventUpdated(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventUpdated");

	Params::ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated
// (Final, Native, Public)

void AScriptedObjectMovement_StaticPath::LockAllPathNodesFromBeingRegenerated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "LockAllPathNodesFromBeingRegenerated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated
// (Final, Native, Public)

void AScriptedObjectMovement_StaticPath::UnlockAllPathsFromBeingRegenerated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "UnlockAllPathsFromBeingRegenerated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}


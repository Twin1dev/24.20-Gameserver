﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AthenaCollectionPlayerProgressTrack

#include "Basic.hpp"

#include "BP_AthenaCollectionPlayerProgressTrack_classes.hpp"
#include "BP_AthenaCollectionPlayerProgressTrack_parameters.hpp"


namespace SDK
{

// Function BP_AthenaCollectionPlayerProgressTrack.BP_AthenaCollectionPlayerProgressTrack_C.BP_OnPlayerProgressContainerReset
// (Event, Protected, BlueprintEvent)

void UBP_AthenaCollectionPlayerProgressTrack_C::BP_OnPlayerProgressContainerReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "BP_OnPlayerProgressContainerReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaCollectionPlayerProgressTrack.BP_AthenaCollectionPlayerProgressTrack_C.BP_OnPlayerProgressEntriesCreated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class UAthenaCollectionPlayerProgress*>&PlayerProgressEntries                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                                   NumToCollect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AthenaCollectionPlayerProgressTrack_C::BP_OnPlayerProgressEntriesCreated(const TArray<class UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int32 NumToCollect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "BP_OnPlayerProgressEntriesCreated");

	Params::BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated Parms{};

	Parms.PlayerProgressEntries = std::move(PlayerProgressEntries);
	Parms.NumToCollect = NumToCollect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AthenaCollectionPlayerProgressTrack.BP_AthenaCollectionPlayerProgressTrack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_AthenaCollectionPlayerProgressTrack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaCollectionPlayerProgressTrack.BP_AthenaCollectionPlayerProgressTrack_C.ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AthenaCollectionPlayerProgressTrack_C::ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack");

	Params::BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AthenaCollectionPlayerProgressTrack.BP_AthenaCollectionPlayerProgressTrack_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void UBP_AthenaCollectionPlayerProgressTrack_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "PlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaCollectionPlayerProgressTrack.BP_AthenaCollectionPlayerProgressTrack_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AthenaCollectionPlayerProgressTrack_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "PreConstruct");

	Params::BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


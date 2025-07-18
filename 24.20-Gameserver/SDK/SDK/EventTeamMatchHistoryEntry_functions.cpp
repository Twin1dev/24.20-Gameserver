﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventTeamMatchHistoryEntry

#include "Basic.hpp"

#include "EventTeamMatchHistoryEntry_classes.hpp"
#include "EventTeamMatchHistoryEntry_parameters.hpp"


namespace SDK
{

// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UEventTeamMatchHistoryEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UEventTeamMatchHistoryEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.ExecuteUbergraph_EventTeamMatchHistoryEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryEntry_C::ExecuteUbergraph_EventTeamMatchHistoryEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "ExecuteUbergraph_EventTeamMatchHistoryEntry");

	Params::EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "OnListItemObjectSet");

	Params::EventTeamMatchHistoryEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarUserListHeaderEntry

#include "Basic.hpp"

#include "SidebarUserListHeaderEntry_classes.hpp"
#include "SidebarUserListHeaderEntry_parameters.hpp"


namespace SDK
{

// Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USidebarUserListHeaderEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListHeaderEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarUserListHeaderEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListHeaderEntry_C", "BP_OnItemExpansionChanged");

	Params::SidebarUserListHeaderEntry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USidebarUserListHeaderEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListHeaderEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.ExecuteUbergraph_SidebarUserListHeaderEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarUserListHeaderEntry_C::ExecuteUbergraph_SidebarUserListHeaderEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListHeaderEntry_C", "ExecuteUbergraph_SidebarUserListHeaderEntry");

	Params::SidebarUserListHeaderEntry_C_ExecuteUbergraph_SidebarUserListHeaderEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USidebarUserListHeaderEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListHeaderEntry_C", "OnFocusLost");

	Params::SidebarUserListHeaderEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SidebarUserListHeaderEntry.SidebarUserListHeaderEntry_C.OnListItemObjectSet_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USidebarUserListHeaderEntry_C::OnListItemObjectSet_1(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListHeaderEntry_C", "OnListItemObjectSet_1");

	Params::SidebarUserListHeaderEntry_C_OnListItemObjectSet_1 Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}


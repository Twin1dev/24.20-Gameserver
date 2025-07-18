﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarPartyMemberListEntry

#include "Basic.hpp"

#include "SidebarPartyMemberListEntry_classes.hpp"
#include "SidebarPartyMemberListEntry_parameters.hpp"


namespace SDK
{

// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarPartyMemberListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarPartyMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USidebarPartyMemberListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USidebarPartyMemberListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USidebarPartyMemberListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.ExecuteUbergraph_SidebarPartyMemberListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarPartyMemberListEntry_C::ExecuteUbergraph_SidebarPartyMemberListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "ExecuteUbergraph_SidebarPartyMemberListEntry");

	Params::SidebarPartyMemberListEntry_C_ExecuteUbergraph_SidebarPartyMemberListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USidebarPartyMemberListEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "OnFocusLost");

	Params::SidebarPartyMemberListEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.OnNewAvatarsEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bUsingNewAvatars                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidebarPartyMemberListEntry_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPartyMemberListEntry_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarPartyMemberListEntry_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

}


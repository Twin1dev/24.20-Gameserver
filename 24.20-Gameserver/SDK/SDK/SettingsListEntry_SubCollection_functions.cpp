﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_SubCollection

#include "Basic.hpp"

#include "SettingsListEntry_SubCollection_classes.hpp"
#include "SettingsListEntry_SubCollection_parameters.hpp"


namespace SDK
{

// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.ExecuteUbergraph_SettingsListEntry_SubCollection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_SubCollection_C::ExecuteUbergraph_SettingsListEntry_SubCollection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "ExecuteUbergraph_SettingsListEntry_SubCollection");

	Params::SettingsListEntry_SubCollection_C_ExecuteUbergraph_SettingsListEntry_SubCollection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_SubCollection_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_SubCollection_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_SubCollection_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnMouseEnter");

	Params::SettingsListEntry_SubCollection_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_SubCollection_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnMouseLeave");

	Params::SettingsListEntry_SubCollection_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      ActionText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_SubCollection_C::OnSettingAssigned(const class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnSettingAssigned");

	Params::SettingsListEntry_SubCollection_C_OnSettingAssigned Parms{};

	Parms.ActionText = std::move(ActionText);

	UObject::ProcessEvent(Func, &Parms);
}

}


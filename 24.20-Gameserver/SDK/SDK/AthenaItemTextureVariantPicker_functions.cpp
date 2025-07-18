﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaItemTextureVariantPicker

#include "Basic.hpp"

#include "AthenaItemTextureVariantPicker_classes.hpp"
#include "AthenaItemTextureVariantPicker_parameters.hpp"


namespace SDK
{

// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.OnToggleAllItemsArchivedMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bDisplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemTextureVariantPicker_C::OnToggleAllItemsArchivedMessage(bool bDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "OnToggleAllItemsArchivedMessage");

	Params::AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage Parms{};

	Parms.bDisplay = bDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.ExecuteUbergraph_AthenaItemTextureVariantPicker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemTextureVariantPicker_C::ExecuteUbergraph_AthenaItemTextureVariantPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "ExecuteUbergraph_AthenaItemTextureVariantPicker");

	Params::AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaItemTextureVariantPicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


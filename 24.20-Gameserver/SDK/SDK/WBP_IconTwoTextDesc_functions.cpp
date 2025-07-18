﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IconTwoTextDesc

#include "Basic.hpp"

#include "WBP_IconTwoTextDesc_classes.hpp"
#include "WBP_IconTwoTextDesc_parameters.hpp"


namespace SDK
{

// Function WBP_IconTwoTextDesc.WBP_IconTwoTextDesc_C.ExecuteUbergraph_WBP_IconTwoTextDesc
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IconTwoTextDesc_C::ExecuteUbergraph_WBP_IconTwoTextDesc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "ExecuteUbergraph_WBP_IconTwoTextDesc");

	Params::WBP_IconTwoTextDesc_C_ExecuteUbergraph_WBP_IconTwoTextDesc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IconTwoTextDesc.WBP_IconTwoTextDesc_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IconTwoTextDesc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "PreConstruct");

	Params::WBP_IconTwoTextDesc_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IconTwoTextDesc.WBP_IconTwoTextDesc_C.UpdateMainText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IconTwoTextDesc_C::UpdateMainText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "UpdateMainText");

	Params::WBP_IconTwoTextDesc_C_UpdateMainText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IconTwoTextDesc.WBP_IconTwoTextDesc_C.UpdateSecondaryText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IconTwoTextDesc_C::UpdateSecondaryText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "UpdateSecondaryText");

	Params::WBP_IconTwoTextDesc_C_UpdateSecondaryText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IconTwoTextDesc.WBP_IconTwoTextDesc_C.UpdateTimerText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IconTwoTextDesc_C::UpdateTimerText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "UpdateTimerText");

	Params::WBP_IconTwoTextDesc_C_UpdateTimerText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FNEventsMetadataOverlay

#include "Basic.hpp"

#include "FNEventsMetadataOverlay_classes.hpp"
#include "FNEventsMetadataOverlay_parameters.hpp"


namespace SDK
{

// Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFNEventsMetadataOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FNEventsMetadataOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.ExecuteUbergraph_FNEventsMetadataOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFNEventsMetadataOverlay_C::ExecuteUbergraph_FNEventsMetadataOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FNEventsMetadataOverlay_C", "ExecuteUbergraph_FNEventsMetadataOverlay");

	Params::FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.OnPartnerUpdateComplete
// (BlueprintCallable, BlueprintEvent)

void UFNEventsMetadataOverlay_C::OnPartnerUpdateComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FNEventsMetadataOverlay_C", "OnPartnerUpdateComplete");

	UObject::ProcessEvent(Func, nullptr);
}

}


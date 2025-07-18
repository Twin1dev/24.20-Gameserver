﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LobbySeasonalResources

#include "Basic.hpp"

#include "BP_LobbySeasonalResources_classes.hpp"
#include "BP_LobbySeasonalResources_parameters.hpp"


namespace SDK
{

// Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_LobbySeasonalResources_C::BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_LobbySeasonalResources_C::BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LobbySeasonalResources_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.ExecuteUbergraph_BP_LobbySeasonalResources
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LobbySeasonalResources_C::ExecuteUbergraph_BP_LobbySeasonalResources(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "ExecuteUbergraph_BP_LobbySeasonalResources");

	Params::BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.OnShowMoreInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShouldShowMoreInfo                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LobbySeasonalResources_C::OnShowMoreInfo(bool bShouldShowMoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "OnShowMoreInfo");

	Params::BP_LobbySeasonalResources_C_OnShowMoreInfo Parms{};

	Parms.bShouldShowMoreInfo = bShouldShowMoreInfo;

	UObject::ProcessEvent(Func, &Parms);
}

}


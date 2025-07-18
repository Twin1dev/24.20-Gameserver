﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AffiliateKeyModal

#include "Basic.hpp"

#include "AffiliateKeyModal_classes.hpp"
#include "AffiliateKeyModal_parameters.hpp"


namespace SDK
{

// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAffiliateKeyModal_C::BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	Params::AffiliateKeyModal_C_BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AffiliateKeyModal_AcceptButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::BndEvt__AffiliateKeyModal_AcceptButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "BndEvt__AffiliateKeyModal_AcceptButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::AffiliateKeyModal_C_BndEvt__AffiliateKeyModal_AcceptButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AffiliateKeyModal_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::BndEvt__AffiliateKeyModal_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "BndEvt__AffiliateKeyModal_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::AffiliateKeyModal_C_BndEvt__AffiliateKeyModal_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AffiliateKeyModal_LaunchWebsite_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::BndEvt__AffiliateKeyModal_LaunchWebsite_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "BndEvt__AffiliateKeyModal_LaunchWebsite_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::AffiliateKeyModal_C_BndEvt__AffiliateKeyModal_LaunchWebsite_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::AffiliateKeyModal_C_BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAffiliateKeyModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::ExecuteUbergraph_AffiliateKeyModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "ExecuteUbergraph_AffiliateKeyModal");

	Params::AffiliateKeyModal_C_ExecuteUbergraph_AffiliateKeyModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.IsAffiliateKeyReadOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   bIsAffiliateKeyReadOnly_0                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::IsAffiliateKeyReadOnly(bool* bIsAffiliateKeyReadOnly_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "IsAffiliateKeyReadOnly");

	Params::AffiliateKeyModal_C_IsAffiliateKeyReadOnly Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsAffiliateKeyReadOnly_0 != nullptr)
		*bIsAffiliateKeyReadOnly_0 = Parms.bIsAffiliateKeyReadOnly_0;
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasValidAffiliateName                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    AffilateNameChecked                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, const class FString& AffilateNameChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "OnCheckComplete");

	Params::AffiliateKeyModal_C_OnCheckComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.bWasValidAffiliateName = bWasValidAffiliateName;
	Parms.AffilateNameChecked = std::move(AffilateNameChecked);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAffiliateKeyModal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.OnSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::OnSet(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "OnSet");

	Params::AffiliateKeyModal_C_OnSet Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.SetupAffiliateField
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    AffilateName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAffiliateKeyModal_C::SetupAffiliateField(const class FString& AffilateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "SetupAffiliateField");

	Params::AffiliateKeyModal_C_SetupAffiliateField Parms{};

	Parms.AffilateName = std::move(AffilateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AffiliateKeyModal.AffiliateKeyModal_C.WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UAffiliateKeyModal_C::WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AffiliateKeyModal_C", "WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}

}


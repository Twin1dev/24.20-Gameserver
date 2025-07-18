﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastWidgetDonut

#include "Basic.hpp"

#include "ToastWidgetDonut_classes.hpp"
#include "ToastWidgetDonut_parameters.hpp"


namespace SDK
{

// Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::ApplyAdditionalStyling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "ApplyAdditionalStyling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidgetDonut_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidgetDonut_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::ExecuteUbergraph_ToastWidgetDonut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "ExecuteUbergraph_ToastWidgetDonut");

	Params::ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UToastWidgetDonut_C::GetOpenButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "GetOpenButtonVisibility");

	Params::ToastWidgetDonut_C_GetOpenButtonVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*              Notification                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "OnNotificationSet");

	Params::ToastWidgetDonut_C_OnNotificationSet Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*              Notification                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "OnNotificationUpdated");

	Params::ToastWidgetDonut_C_OnNotificationUpdated Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)

void UToastWidgetDonut_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "SetImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Unbind                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::SetupAnimBindings(bool Unbind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "SetupAnimBindings");

	Params::ToastWidgetDonut_C_SetupAnimBindings Parms{};

	Parms.Unbind = Unbind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "StartIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.UpdateToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*              Notification                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::UpdateToast(class UFortUINotification* Notification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidgetDonut_C", "UpdateToast");

	Params::ToastWidgetDonut_C_UpdateToast Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);
}

}


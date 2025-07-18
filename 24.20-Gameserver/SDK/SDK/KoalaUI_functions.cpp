﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KoalaUI

#include "Basic.hpp"

#include "KoalaUI_classes.hpp"
#include "KoalaUI_parameters.hpp"


namespace SDK
{

// Function KoalaUI.FortSidebarPanelKoala.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bConnected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSidebarPanelKoala::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarPanelKoala", "OnConnectionChanged");

	Params::FortSidebarPanelKoala_OnConnectionChanged Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.GetTrackedClipCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKoalaHUDWidget::GetTrackedClipCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "GetTrackedClipCount");

	Params::KoalaHUDWidget_GetTrackedClipCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KoalaUI.KoalaHUDWidget.HandleAthenaGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// EAthenaGamePhase                        GamePhase                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandleAthenaGamePhaseChanged");

	Params::KoalaHUDWidget_HandleAthenaGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer
// (Final, Native, Private)
// Parameters:
// const class AFortPlayerStateAthena*     Player                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandleLocalPlayerKilledPlayer(const class AFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandleLocalPlayerKilledPlayer");

	Params::KoalaHUDWidget_HandleLocalPlayerKilledPlayer Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon
// (Final, Native, Private)

void UKoalaHUDWidget::HandlePlayerMatchWon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerMatchWon");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped
// (Final, Native, Private)
// Parameters:
// const class UFortItemDefinition*        MontageItemDef                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                        PawnEmoting                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandlePlayerPawnEmoteStopped(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerPawnEmoteStopped");

	Params::KoalaHUDWidget_HandlePlayerPawnEmoteStopped Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.OnAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EKoalaAvailability                      Availability                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnAvailabilityChanged(EKoalaAvailability Availability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnAvailabilityChanged");

	Params::KoalaHUDWidget_OnAvailabilityChanged Parms{};

	Parms.Availability = Availability;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.OnClipStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InClipID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EKoalaClipStatus                        InClipStatus                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InUploadProgress                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnClipStatusChanged(int32 InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnClipStatusChanged");

	Params::KoalaHUDWidget_OnClipStatusChanged Parms{};

	Parms.InClipID = InClipID;
	Parms.InClipStatus = InClipStatus;
	Parms.InUploadProgress = InUploadProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EKoalaConnectionStatus                  InStatus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnConnectionChanged(EKoalaConnectionStatus InStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnConnectionChanged");

	Params::KoalaHUDWidget_OnConnectionChanged Parms{};

	Parms.InStatus = InStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.OnInputComplete
// (Event, Protected, BlueprintEvent)

void UKoalaHUDWidget::OnInputComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnInputComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KoalaUI.KoalaHUDWidget.OnInputProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Progress                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnInputProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnInputProgress");

	Params::KoalaHUDWidget_OnInputProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EKoalaRecording                         InRecordingStatus                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnRecordingStatusChanged(EKoalaRecording InRecordingStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnRecordingStatusChanged");

	Params::KoalaHUDWidget_OnRecordingStatusChanged Parms{};

	Parms.InRecordingStatus = InRecordingStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.OnReminderEnded
// (Final, Native, Protected, BlueprintCallable)

void UKoalaHUDWidget::OnReminderEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnReminderEnded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.OnReminderTimerStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnReminderTimerStarted(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnReminderTimerStarted");

	Params::KoalaHUDWidget_OnReminderTimerStarted Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown
// (Final, Native, Protected, BlueprintCallable)

void UKoalaHUDWidget::OnTouchAreaMouseDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnTouchAreaMouseDown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.RegisterClipButtonInput
// (Final, Native, Private)

void UKoalaHUDWidget::RegisterClipButtonInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "RegisterClipButtonInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput
// (Final, Native, Private)

void UKoalaHUDWidget::UnregisterClipButtonInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "UnregisterClipButtonInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KoalaUI.KoalaHUDWidget.GetUploadingClipCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKoalaHUDWidget::GetUploadingClipCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "GetUploadingClipCount");

	Params::KoalaHUDWidget_GetUploadingClipCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bAvailable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaSettingDetailExtension::OnAvailabilityChanged(bool bAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaSettingDetailExtension", "OnAvailabilityChanged");

	Params::KoalaSettingDetailExtension_OnAvailabilityChanged Parms{};

	Parms.bAvailable = bAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bConnected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaSettingDetailExtension::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaSettingDetailExtension", "OnConnectionChanged");

	Params::KoalaSettingDetailExtension_OnConnectionChanged Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);
}

}


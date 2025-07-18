﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultRotator

#include "Basic.hpp"

#include "VaultRotator_classes.hpp"
#include "VaultRotator_parameters.hpp"


namespace SDK
{

// Function VaultRotator.VaultRotator_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void AVaultRotator_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.ToggleBackgroundText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDisplayText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::ToggleBackgroundText(bool bDisplayText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "ToggleBackgroundText");

	Params::VaultRotator_C_ToggleBackgroundText Parms{};

	Parms.bDisplayText = bDisplayText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::Timeline_Zoom__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "Timeline_Zoom__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::Timeline_Zoom__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "Timeline_Zoom__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.Timeline_YawRotation__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::Timeline_YawRotation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "Timeline_YawRotation__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::SwitchMobileLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "SwitchMobileLighting");

	Params::VaultRotator_C_SwitchMobileLighting Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.Timeline_YawRotation__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::Timeline_YawRotation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "Timeline_YawRotation__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.SetBackgroundString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      CustomText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void AVaultRotator_C::SetBackgroundString(const class FText& CustomText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "SetBackgroundString");

	Params::VaultRotator_C_SetBackgroundString Parms{};

	Parms.CustomText = std::move(CustomText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::SwitchPCLighting_LOWDetail(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "SwitchPCLighting_LOWDetail");

	Params::VaultRotator_C_SwitchPCLighting_LOWDetail Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              RGBA0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              RGBA1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "SetBackgroundColor");

	Params::VaultRotator_C_SetBackgroundColor Parms{};

	Parms.RGBA0 = std::move(RGBA0);
	Parms.RGBA1 = std::move(RGBA1);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::SwitchPCLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "SwitchPCLighting");

	Params::VaultRotator_C_SwitchPCLighting Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::PlaySoundWhenEnabled(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "PlaySoundWhenEnabled");

	Params::VaultRotator_C_PlaySoundWhenEnabled Parms{};

	Parms.sound = sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultRotator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_180_to_360__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "CameraTurn_180_to_360__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.OnUpdateBackgroundColor
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnableAutotestBackground                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::OnUpdateBackgroundColor(bool bEnableAutotestBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnUpdateBackgroundColor");

	Params::VaultRotator_C_OnUpdateBackgroundColor Parms{};

	Parms.bEnableAutotestBackground = bEnableAutotestBackground;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_180_to_360__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "CameraTurn_180_to_360__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   TargetZoomLevel_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::OnTargetZoomLevelSet(float TargetZoomLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnTargetZoomLevelSet");

	Params::VaultRotator_C_OnTargetZoomLevelSet Parms{};

	Parms.TargetZoomLevel_0 = TargetZoomLevel_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_0_to_180__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "CameraTurn_0_to_180__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelCanceled
// (Event, Protected, BlueprintEvent)

void AVaultRotator_C::OnTargetZoomLevelCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnTargetZoomLevelCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_0_to_180__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "CameraTurn_0_to_180__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.OnTargetRotationOffsetSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FRotator&                  TargetRotationOffset_0                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void AVaultRotator_C::OnTargetRotationOffsetSet(const struct FRotator& TargetRotationOffset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnTargetRotationOffsetSet");

	Params::VaultRotator_C_OnTargetRotationOffsetSet Parms{};

	Parms.TargetRotationOffset_0 = std::move(TargetRotationOffset_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.OnTargetRotationOffsetCanceled
// (Event, Protected, BlueprintEvent)

void AVaultRotator_C::OnTargetRotationOffsetCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnTargetRotationOffsetCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultRotator.VaultRotator_C.OnSetBackgroundMessageText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      BackgroundMessageText                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVaultRotator_C::OnSetBackgroundMessageText(const class FText& BackgroundMessageText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnSetBackgroundMessageText");

	Params::VaultRotator_C_OnSetBackgroundMessageText Parms{};

	Parms.BackgroundMessageText = std::move(BackgroundMessageText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.OnCameraTransitionReady
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    bPrimaryToSecondary                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UFortAccountItemDefinition* PrimaryRequestedItem                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FSceneTransitionOptions&   Options                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AVaultRotator_C::OnCameraTransitionReady(bool bPrimaryToSecondary, const class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "OnCameraTransitionReady");

	Params::VaultRotator_C_OnCameraTransitionReady Parms{};

	Parms.bPrimaryToSecondary = bPrimaryToSecondary;
	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.Options = std::move(Options);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::LightControl(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "LightControl");

	Params::VaultRotator_C_LightControl Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::ExecuteUbergraph_VaultRotator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultRotator_C", "ExecuteUbergraph_VaultRotator");

	Params::VaultRotator_C_ExecuteUbergraph_VaultRotator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


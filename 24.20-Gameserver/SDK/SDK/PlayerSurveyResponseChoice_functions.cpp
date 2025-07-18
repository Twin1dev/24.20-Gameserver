﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyResponseChoice

#include "Basic.hpp"

#include "PlayerSurveyResponseChoice_classes.hpp"
#include "PlayerSurveyResponseChoice_parameters.hpp"


namespace SDK
{

// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyResponseChoice_C::ExecuteUbergraph_PlayerSurveyResponseChoice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "ExecuteUbergraph_PlayerSurveyResponseChoice");

	Params::PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush*                     CurrentBrush                                           (Parm, OutParm)

void UPlayerSurveyResponseChoice_C::GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "GetCurrentButtonBrush");

	Params::PlayerSurveyResponseChoice_C_GetCurrentButtonBrush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentBrush != nullptr)
		*CurrentBrush = std::move(Parms.CurrentBrush);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::OnSurveyResetChoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "OnSurveyResetChoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortPlayerSurveyResponseChoiceType     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyResponseChoice_C::SetChoiceType(EFortPlayerSurveyResponseChoiceType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "SetChoiceType");

	Params::PlayerSurveyResponseChoice_C_SetChoiceType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::Update_Text_Scale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "Update Text Scale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::UpdateButtonColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "UpdateButtonColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::UpdateChoiceImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "UpdateChoiceImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity
// (Private, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyResponseChoice_C::UpdateInputActionRenderOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "UpdateInputActionRenderOpacity");

	UObject::ProcessEvent(Func, nullptr);
}

}


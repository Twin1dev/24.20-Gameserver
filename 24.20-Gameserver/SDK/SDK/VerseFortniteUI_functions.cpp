﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortniteUI

#include "Basic.hpp"

#include "VerseFortniteUI_classes.hpp"
#include "VerseFortniteUI_parameters.hpp"


namespace SDK
{

// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Text
// (Final, Native, Private)

void UVerseFortniteUIFrameworkButton_Base::OnRep_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "OnRep_Text");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkButton_Base::ServerClick(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "ServerClick");

	Params::VerseFortniteUIFrameworkButton_Base_ServerClick Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.SetText
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      Text_0                                                 (Parm, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkButton_Base::SetText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "SetText");

	Params::VerseFortniteUIFrameworkButton_Base_SetText Parms{};

	Parms.Text_0 = std::move(Text_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UVerseFortniteUIFrameworkButton_Base::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "GetText");

	Params::VerseFortniteUIFrameworkButton_Base_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
// (Final, Native, Public, HasOutParams)
// Parameters:
// const class FText&                      InText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// ETextCommit                             InCommitMethod                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkText_Base::ExecuteServerTextCommitted(const class FText& InText, ETextCommit InCommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ExecuteServerTextCommitted");

	Params::VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted Parms{};

	Parms.InText = std::move(InText);
	Parms.InCommitMethod = InCommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FText&                      NewText                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkText_Base::ServerTextCommitted(class APlayerController* PlayerController, const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ServerTextCommitted");

	Params::VerseFortniteUIFrameworkText_Base_ServerTextCommitted Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NewText = std::move(NewText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
// (Final, Native, Public)
// Parameters:
// float                                   InNewValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   InValueID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::ExecuteServerValueChanged(float InNewValue, int32 InValueID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ExecuteServerValueChanged");

	Params::VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged Parms{};

	Parms.InNewValue = InNewValue;
	Parms.InValueID = InValueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
// (Final, Native, Private)
// Parameters:
// float                                   NewValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::HandleValueChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "HandleValueChanged");

	Params::VerseFortniteUIFrameworkSlider_HandleValueChanged Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
// (Final, Native, Private)

void UVerseFortniteUIFrameworkSlider::OnRep_MaxValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MaxValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
// (Final, Native, Private)

void UVerseFortniteUIFrameworkSlider::OnRep_MinValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MinValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
// (Final, Native, Private)

void UVerseFortniteUIFrameworkSlider::OnRep_StepSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_StepSize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
// (Final, Native, Private)

void UVerseFortniteUIFrameworkSlider::OnRep_Value()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_Value");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InNewValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   InValueID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32 InValueID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ServerValueChanged");

	Params::VerseFortniteUIFrameworkSlider_ServerValueChanged Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InNewValue = InNewValue;
	Parms.InValueID = InValueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InMaxValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetMaxValue(float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMaxValue");

	Params::VerseFortniteUIFrameworkSlider_SetMaxValue Parms{};

	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InMinValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetMinValue(float InMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMinValue");

	Params::VerseFortniteUIFrameworkSlider_SetMinValue Parms{};

	Parms.InMinValue = InMinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InMinValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetStepSize(float InMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetStepSize");

	Params::VerseFortniteUIFrameworkSlider_SetStepSize Parms{};

	Parms.InMinValue = InMinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteUIFrameworkSlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetValue");

	Params::VerseFortniteUIFrameworkSlider_SetValue Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetMaxValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMaxValue");

	Params::VerseFortniteUIFrameworkSlider_GetMaxValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetMinValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMinValue");

	Params::VerseFortniteUIFrameworkSlider_GetMinValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetStepSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetStepSize");

	Params::VerseFortniteUIFrameworkSlider_GetStepSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVerseFortniteUIFrameworkSlider::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetValue");

	Params::VerseFortniteUIFrameworkSlider_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


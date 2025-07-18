﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VariantCustomizationHeader

#include "Basic.hpp"

#include "WBP_VariantCustomizationHeader_classes.hpp"
#include "WBP_VariantCustomizationHeader_parameters.hpp"


namespace SDK
{

// Function WBP_VariantCustomizationHeader.WBP_VariantCustomizationHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VariantCustomizationHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VariantCustomizationHeader.WBP_VariantCustomizationHeader_C.ExecuteUbergraph_WBP_VariantCustomizationHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VariantCustomizationHeader_C::ExecuteUbergraph_WBP_VariantCustomizationHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "ExecuteUbergraph_WBP_VariantCustomizationHeader");

	Params::WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VariantCustomizationHeader.WBP_VariantCustomizationHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VariantCustomizationHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "PreConstruct");

	Params::WBP_VariantCustomizationHeader_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VariantCustomizationHeader.WBP_VariantCustomizationHeader_C.Set Header
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInterface*               Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_VariantCustomizationHeader_C::Set_Header(const class FText& InText, class UMaterialInterface* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "Set Header");

	Params::WBP_VariantCustomizationHeader_C_Set_Header Parms{};

	Parms.InText = std::move(InText);
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VariantCustomizationHeader.WBP_VariantCustomizationHeader_C.Set Subheader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_VariantCustomizationHeader_C::Set_Subheader(const class FText& InText, class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "Set Subheader");

	Params::WBP_VariantCustomizationHeader_C_Set_Subheader Parms{};

	Parms.InText = std::move(InText);
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}

}


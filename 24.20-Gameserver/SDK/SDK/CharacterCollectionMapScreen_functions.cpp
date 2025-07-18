﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCollectionMapScreen

#include "Basic.hpp"

#include "CharacterCollectionMapScreen_classes.hpp"
#include "CharacterCollectionMapScreen_parameters.hpp"


namespace SDK
{

// Function CharacterCollectionMapScreen.CollectionNPCServiceWidget.PopulateData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FNPCServiceWidgetData&     WidgetData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCollectionNPCServiceWidget::PopulateData(const struct FNPCServiceWidgetData& WidgetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget", "PopulateData");

	Params::CollectionNPCServiceWidget_PopulateData Parms{};

	Parms.WidgetData = std::move(WidgetData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCollectionMapScreen.CollectionNPCServiceWidget.PopulateEmpty
// (Event, Public, BlueprintEvent)

void UCollectionNPCServiceWidget::PopulateEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget", "PopulateEmpty");

	UObject::ProcessEvent(Func, nullptr);
}

}


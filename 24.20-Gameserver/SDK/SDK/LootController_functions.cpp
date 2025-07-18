﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootController

#include "Basic.hpp"

#include "LootController_classes.hpp"
#include "LootController_parameters.hpp"


namespace SDK
{

// Function LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FGameplayTagContainer&     InItemGameplayTagsNotAllowed                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_CR_CreativeAllowLootItem::SetItemGameplayTagsNotAllowed(const struct FGameplayTagContainer& InItemGameplayTagsNotAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_CreativeAllowLootItem", "SetItemGameplayTagsNotAllowed");

	Params::FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed Parms{};

	Parms.InItemGameplayTagsNotAllowed = std::move(InItemGameplayTagsNotAllowed);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer            ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer AFortAthenaMutator_CR_LootChoice::GetContextTagsToAdd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToAdd");

	Params::FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer            ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer AFortAthenaMutator_CR_LootChoice::GetContextTagsToRemove() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToRemove");

	Params::FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* AFortAthenaMutator_CR_LootChoice::GetLootPackageTable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootPackageTable");

	Params::FortAthenaMutator_CR_LootChoice_GetLootPackageTable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AFortAthenaMutator_CR_LootChoice::GetLootSelectionString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootSelectionString");

	Params::FortAthenaMutator_CR_LootChoice_GetLootSelectionString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* AFortAthenaMutator_CR_LootChoice::GetLootTierDataTable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootTierDataTable");

	Params::FortAthenaMutator_CR_LootChoice_GetLootTierDataTable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LootController.LootControllerNativeComponent.AddToArray
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBuildingContainersFoundEntry>&InOutBuildingContainersFoundArray                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// const int32                             InBuildingContainerFoundIndex                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FBuildingContainersArrayEntry&InBuildingContainerToAdd                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, const int32 InBuildingContainerFoundIndex, const struct FBuildingContainersArrayEntry& InBuildingContainerToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "AddToArray");

	Params::LootControllerNativeComponent_AddToArray Parms{};

	Parms.InOutBuildingContainersFoundArray = std::move(InOutBuildingContainersFoundArray);
	Parms.InBuildingContainerFoundIndex = InBuildingContainerFoundIndex;
	Parms.InBuildingContainerToAdd = std::move(InBuildingContainerToAdd);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InOutBuildingContainersFoundArray = std::move(Parms.InOutBuildingContainersFoundArray);
}


// Function LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>               ActorClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::AsyncGetActorsOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "AsyncGetActorsOfClass");

	Params::LootControllerNativeComponent_AsyncGetActorsOfClass Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LootController.LootControllerNativeComponent.PrintDebugString
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// const class FString&                    DebugString                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              LogWarning                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::PrintDebugString(const class FString& DebugString, const bool LogWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "PrintDebugString");

	Params::LootControllerNativeComponent_PrintDebugString Parms{};

	Parms.DebugString = std::move(DebugString);
	Parms.LogWarning = LogWarning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LootController.LootControllerNativeComponent.IsRemoveLootEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULootControllerNativeComponent::IsRemoveLootEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "IsRemoveLootEnabled");

	Params::LootControllerNativeComponent_IsRemoveLootEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LootController.LootControllerNativeComponent.IsThrottleEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULootControllerNativeComponent::IsThrottleEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "IsThrottleEnabled");

	Params::LootControllerNativeComponent_IsThrottleEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


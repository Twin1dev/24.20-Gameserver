﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootController

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// Class LootController.FortAthenaMutator_CR_CreativeAllowLootItem
// 0x0020 (0x0350 - 0x0330)
class AFortAthenaMutator_CR_CreativeAllowLootItem final : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer                  ItemGameplayTagsNotAllowed;                        // 0x0330(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	void SetItemGameplayTagsNotAllowed(const struct FGameplayTagContainer& InItemGameplayTagsNotAllowed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_CR_CreativeAllowLootItem">();
	}
	static class AFortAthenaMutator_CR_CreativeAllowLootItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_CR_CreativeAllowLootItem>();
	}
};

// Class LootController.FortAthenaMutator_CR_LootChoice
// 0x0000 (0x0330 - 0x0330)
class AFortAthenaMutator_CR_LootChoice final : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer GetContextTagsToAdd() const;
	struct FGameplayTagContainer GetContextTagsToRemove() const;
	class UDataTable* GetLootPackageTable() const;
	class FString GetLootSelectionString() const;
	class UDataTable* GetLootTierDataTable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_CR_LootChoice">();
	}
	static class AFortAthenaMutator_CR_LootChoice* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_CR_LootChoice>();
	}
};

// Class LootController.LootControllerNativeComponent
// 0x0020 (0x00C0 - 0x00A0)
class ULootControllerNativeComponent final : public UActorComponent
{
public:
	TArray<class AActor*>                         OutActors;                                         // 0x00A0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMulticastInlineDelegate<void(bool bSuccess)> OnAsyncGetActorsOfClassCompleted;                  // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

public:
	void AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, const int32 InBuildingContainerFoundIndex, const struct FBuildingContainersArrayEntry& InBuildingContainerToAdd);
	void AsyncGetActorsOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass);
	void PrintDebugString(const class FString& DebugString, const bool LogWarning);

	bool IsRemoveLootEnabled() const;
	bool IsThrottleEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LootControllerNativeComponent">();
	}
	static class ULootControllerNativeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULootControllerNativeComponent>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CorruptionGameplayCodeRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CorruptionGameplayCodeRuntime_structs.hpp"
#include "Engine_classes.hpp"
#include "SOMRuntime_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// Class CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
// 0x0000 (0x0028 - 0x0028)
class UWarEffortFundingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 AdjustDonation(int32 DonationAmount, EWarEffortFundingStationType StationType);
	static bool DoesChoiceHaveWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	static float GetIndexFundedPercent(const struct FWarEffortFundingMetadata& MetaData, int32 Index_0, EWarEffortFundingStationType StationType);
	static bool IsIndexFunded(const struct FWarEffortFundingMetadata& MetaData, int32 Index_0, EWarEffortFundingStationType StationType);
	static bool IsOption1ChoiceWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	static bool IsOption2ChoiceWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	static class FString WriteTextToBuffer(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WarEffortFundingLibrary">();
	}
	static class UWarEffortFundingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWarEffortFundingLibrary>();
	}
};

// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
// 0x0068 (0x0090 - 0x0028)
class UCorruptionCoverageMap final : public UObject
{
public:
	uint8                                         Pad_28[0x68];                                      // 0x0028(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, const struct FVector& InTopLeftWorldCoordinate, const struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);

	bool IsLocationCorrupted(const struct FVector& Location, float Padding) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CorruptionCoverageMap">();
	}
	static class UCorruptionCoverageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorruptionCoverageMap>();
	}
};

// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
// 0x0020 (0x0050 - 0x0030)
class UFortCorruptionSequenceData final : public UPrimaryDataAsset
{
public:
	TArray<struct FCorruptionCalendarEventData>   CorruptionStartEvents;                             // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCorruptionPauseEvent>          CorruptionPauseEvents;                             // 0x0040(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCorruptionSequenceData">();
	}
	static class UFortCorruptionSequenceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCorruptionSequenceData>();
	}
};

// Class CorruptionGameplayCodeRuntime.CubeMovementStaticPath
// 0x0030 (0x0510 - 0x04E0)
class ACubeMovementStaticPath final : public AScriptedObjectMovement_StaticPath
{
public:
	float                                         GenerationZTraceHeight;                            // 0x04D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         CubeSpacingFactor;                                 // 0x04DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         CubeAngleLimitDegrees;                             // 0x04E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortCorruptionSequenceData*            CorruptionSequence;                                // 0x04E8(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4F0[0x8];                                      // 0x04F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides;       // 0x04F8(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_508[0x8];                                      // 0x0508(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearAllGeneratedSplinesAndLockedData();

	void EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CubeMovementStaticPath">();
	}
	static class ACubeMovementStaticPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACubeMovementStaticPath>();
	}
};

// Class CorruptionGameplayCodeRuntime.WarEffortMeshActor
// 0x0088 (0x0310 - 0x0288)
class AWarEffortMeshActor final : public AInfo
{
public:
	class UMeshNetworkComponent*                  MeshNetworkComponent;                              // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                   ActiveFundedItems;                                 // 0x0290(0x0010)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                   ActiveTryBeforeYouBuyItems;                        // 0x02A0(0x0010)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWarEffortFundingData>          CurrentFundingData;                                // 0x02B0(0x0010)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2C0[0x50];                                     // 0x02C0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_ActiveFundedItems();
	void OnRep_ActiveTryBeforeYouBuyItems();
	void OnRep_CurrentFundingData();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WarEffortMeshActor">();
	}
	static class AWarEffortMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWarEffortMeshActor>();
	}
};

// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
// 0x0068 (0x04B8 - 0x0450)
class AFortAthenaMutator_WarEffort final : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                         Pad_450[0x8];                                      // 0x0450(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWarEffortMutatorMetadata              MeshNetworkMetadata;                               // 0x0458(0x0020)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWarEffortMutatorChoiceData>    WeaponChoices;                                     // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetId>                PreloadedItemList;                                 // 0x0488(0x0010)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	bool                                          bCanPreloadItems;                                  // 0x0498(0x0001)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_499[0x1F];                                     // 0x0499(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_PreloadedItemList();
	void SetFundingManagerReady(bool bIsReady);
	void SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount);
	void SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent);
	void SetItemFundedState(const struct FGameplayTag& ItemFundingTag, bool bIsActive);
	void SetTryBeforeYouBuyItemState(const struct FGameplayTag& ItemFundingTag, bool bIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_WarEffort">();
	}
	static class AFortAthenaMutator_WarEffort* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_WarEffort>();
	}
};

}


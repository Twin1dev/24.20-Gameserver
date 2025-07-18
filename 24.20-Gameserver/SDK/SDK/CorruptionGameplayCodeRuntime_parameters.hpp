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
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.AdjustDonation
// 0x000C (0x000C - 0x0000)
struct WarEffortFundingLibrary_AdjustDonation final
{
public:
	int32                                         DonationAmount;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWarEffortFundingStationType                  StationType;                                       // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.DoesChoiceHaveWinner
// 0x0038 (0x0038 - 0x0000)
struct WarEffortFundingLibrary_DoesChoiceHaveWinner final
{
public:
	struct FWarEffortFundingMetadata              MetaData;                                          // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ChoiceIndex;                                       // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.GetIndexFundedPercent
// 0x0040 (0x0040 - 0x0000)
struct WarEffortFundingLibrary_GetIndexFundedPercent final
{
public:
	struct FWarEffortFundingMetadata              MetaData;                                          // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         Index_0;                                           // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWarEffortFundingStationType                  StationType;                                       // 0x0034(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsIndexFunded
// 0x0038 (0x0038 - 0x0000)
struct WarEffortFundingLibrary_IsIndexFunded final
{
public:
	struct FWarEffortFundingMetadata              MetaData;                                          // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         Index_0;                                           // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWarEffortFundingStationType                  StationType;                                       // 0x0034(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0035(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption1ChoiceWinner
// 0x0038 (0x0038 - 0x0000)
struct WarEffortFundingLibrary_IsOption1ChoiceWinner final
{
public:
	struct FWarEffortFundingMetadata              MetaData;                                          // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ChoiceIndex;                                       // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption2ChoiceWinner
// 0x0038 (0x0038 - 0x0000)
struct WarEffortFundingLibrary_IsOption2ChoiceWinner final
{
public:
	struct FWarEffortFundingMetadata              MetaData;                                          // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ChoiceIndex;                                       // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer
// 0x0028 (0x0028 - 0x0000)
struct WarEffortFundingLibrary_WriteTextToBuffer final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.UpdateCorruptionCoverageMap
// 0x0050 (0x0050 - 0x0000)
struct CorruptionCoverageMap_UpdateCorruptionCoverageMap final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                 CorruptionRenderTarget;                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InTopLeftWorldCoordinate;                          // 0x0010(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InBottomRightWorldCoordinate;                      // 0x0028(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CoverageThreshold;                                 // 0x0040(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugDrawDuration;                                 // 0x0044(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.IsLocationCorrupted
// 0x0020 (0x0020 - 0x0000)
struct CorruptionCoverageMap_IsLocationCorrupted final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Padding;                                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData
// 0x0010 (0x0010 - 0x0000)
struct CubeMovementStaticPath_EditorGetCorruptionGenerationData final
{
public:
	struct FCubeMovement_CorruptionGenerationData OutData;                                           // 0x0000(0x0010)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady
// 0x0001 (0x0001 - 0x0000)
struct FortAthenaMutator_WarEffort_SetFundingManagerReady final
{
public:
	bool                                          bIsReady;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount
// 0x0018 (0x0018 - 0x0000)
struct FortAthenaMutator_WarEffort_SetItemFundedAmount final
{
public:
	struct FGameplayTag                           ItemFundingTag;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CurrentFundingAmount;                              // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         TargetFundingAmount;                               // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaMutator_WarEffort_SetItemFundedPercent final
{
public:
	struct FGameplayTag                           ItemFundingTag;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FundingPercent;                                    // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaMutator_WarEffort_SetItemFundedState final
{
public:
	struct FGameplayTag                           ItemFundingTag;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsActive;                                         // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState final
{
public:
	struct FGameplayTag                           ItemFundingTag;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsActive;                                         // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


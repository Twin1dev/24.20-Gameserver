﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StormCaller

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StormCaller.StormCallerComponent.ApplyPOINamesToDataRegistry
// 0x0040 (0x0040 - 0x0000)
struct StormCallerComponent_ApplyPOINamesToDataRegistry final
{
public:
	const class UPlaylistUserOptions*             UserOptions;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           GameplayTagForPOI;                                 // 0x0008(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   MapCenterText;                                     // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   RandomText;                                        // 0x0028(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function StormCaller.StormCallerComponent.ApplySavedPoiOptions
// 0x0028 (0x0028 - 0x0000)
struct StormCallerComponent_ApplySavedPoiOptions final
{
public:
	TArray<class FString>                         PoiSavedOptionKeys;                                // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FText>                           PoiSavedOptionName;                                // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortActorOptionsComponent*             ToyOptionsComponent;                               // 0x0020(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StormCaller.StormCallerComponent.GetPoiVolumeFromOptionIndex
// 0x0010 (0x0010 - 0x0000)
struct StormCallerComponent_GetPoiVolumeFromOptionIndex final
{
public:
	int32                                         OptionIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPoiVolume*                         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StormCaller.StormCallerComponent.UpdatePoiSavedOptions
// 0x0030 (0x0030 - 0x0000)
struct StormCallerComponent_UpdatePoiSavedOptions final
{
public:
	TArray<class FString>                         InOutPoiSavedOptionKeys;                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FText>                           InOutPoiSavedOptionNames;                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	const class UPlaylistUserOptions*             UserOptions;                                       // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           GameplayTagForPOI;                                 // 0x0028(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function StormCaller.StormCallerComponent.GetSafeZoneLocationBlockList
// 0x0010 (0x0010 - 0x0000)
struct StormCallerComponent_GetSafeZoneLocationBlockList final
{
public:
	TArray<struct FVector4>                       ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}


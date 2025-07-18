﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// ScriptStruct LootController.BuildingContainersArrayEntry
// 0x00A0 (0x00A0 - 0x0000)
struct FBuildingContainersArrayEntry final
{
public:
	class ABuildingContainer*                     BuildingContainer;                                 // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SearchLootTierGroup;                               // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0078(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LootController.BuildingContainersFoundEntry
// 0x0018 (0x0018 - 0x0000)
struct FBuildingContainersFoundEntry final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBuildingContainersArrayEntry>  BuildingContainers;                                // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


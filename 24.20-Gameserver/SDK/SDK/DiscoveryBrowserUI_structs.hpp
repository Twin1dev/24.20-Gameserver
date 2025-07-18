﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscoveryBrowserUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum DiscoveryBrowserUI.EActivityBrowserTileStyle
// NumValues: 0x0004
enum class EActivityBrowserTileStyle : uint8
{
	Default                                  = 0,
	Minimal                                  = 1,
	Detailed                                 = 2,
	EActivityBrowserTileStyle_MAX            = 3,
};

// ScriptStruct DiscoveryBrowserUI.CachedSurfaceData
// 0x0018 (0x0018 - 0x0000)
struct FCachedSurfaceData final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortCreativeDiscoveryActivityProvider*> CachedDataProviders;                       // 0x0008(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct DiscoveryBrowserUI.ColorSchemeParamaterValues
// 0x00A8 (0x00A8 - 0x0000)
struct FColorSchemeParamaterValues final
{
public:
	class UMaterialParameterCollection*           AlternateMaterialCollection;                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                      ScalarParameterValues;                             // 0x0008(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>        VectorParameterValues;                             // 0x0058(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

}


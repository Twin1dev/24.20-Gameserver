﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UEKittTexture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class UEKittTexture.UEKittTexture
// 0x0038 (0x0178 - 0x0140)
class UUEKittTexture final : public UTexture
{
public:
	struct FIntPoint                              Dimensions;                                        // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ClearColor;                                        // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_158[0x20];                                     // 0x0158(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UEKittTexture">();
	}
	static class UUEKittTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUEKittTexture>();
	}
};

}


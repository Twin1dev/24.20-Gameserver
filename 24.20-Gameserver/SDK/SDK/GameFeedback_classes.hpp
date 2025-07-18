﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameFeedback

#include "Basic.hpp"

#include "GameFeedback_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GameFeedback.LogOptions
// 0x0010 (0x0038 - 0x0028)
class ULogOptions final : public UObject
{
public:
	TArray<struct FLogSubmitOptions>              LogOptions;                                        // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LogOptions">();
	}
	static class ULogOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogOptions>();
	}
};

}


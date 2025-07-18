﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PapayaTimedEvents

#include "Basic.hpp"

#include "NetCore_structs.hpp"


namespace SDK
{

// ScriptStruct PapayaTimedEvents.MediaTimeEventItem
// 0x002C (0x0038 - 0x000C)
struct FMediaTimeEventItem final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventName;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Time;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Parameter;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct PapayaTimedEvents.MediaTimeEventArray
// 0x0010 (0x0118 - 0x0108)
struct FMediaTimeEventArray final : public FFastArraySerializer
{
public:
	TArray<struct FMediaTimeEventItem>            Items;                                             // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


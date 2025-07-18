﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicMediaMetadataResolver

#include "Basic.hpp"

#include "EpicMediaOptions_structs.hpp"


namespace SDK::Params
{

// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
// 0x0120 (0x0120 - 0x0000)
struct EpicMediaMetadataResolver_GetBlurl final
{
public:
	class FString                                 InVUID;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInBlurlLive;                                      // 0x0010(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEpicMediaOptions                      InMediaOptions;                                    // 0x0018(0x0100)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0118(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


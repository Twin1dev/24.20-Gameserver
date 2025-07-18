﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaveTable

#include "Basic.hpp"

#include "WaveTable_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WaveTable.WaveTableBank
// 0x0020 (0x0048 - 0x0028)
class UWaveTableBank final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EWaveTableResolution                          Resolution;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBipolar;                                          // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWaveTableBankEntry>            Entries;                                           // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveTableBank">();
	}
	static class UWaveTableBank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveTableBank>();
	}
};

}


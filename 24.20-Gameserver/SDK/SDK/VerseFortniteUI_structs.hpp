﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortniteUI

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct VerseFortniteUI.VerseFortniteUIPresenterElement
// 0x0020 (0x0020 - 0x0000)
struct FVerseFortniteUIPresenterElement final
{
public:
	class UVerseFortniteUINamedSlot*              SlotWidget;                                        // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                UMGWidget;                                         // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x10];                                      // 0x0010(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
// 0x0008 (0x0008 - 0x0000)
struct FVerseFortniteUIFrameworkSliderValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SentID;                                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraCore

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NiagaraCore.NiagaraVariableCommonReference
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraVariableCommonReference final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                UnderlyingType;                                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraCompileHash final
{
public:
	TArray<uint8>                                 DataHash;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


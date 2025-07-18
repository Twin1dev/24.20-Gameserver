﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystem

#include "Basic.hpp"


namespace SDK
{

// Enum OnlineSubsystem.EInAppPurchaseState
// NumValues: 0x0009
enum class EInAppPurchaseState : uint8
{
	Unknown                                  = 0,
	Success                                  = 1,
	Failed                                   = 2,
	Cancelled                                = 3,
	Invalid                                  = 4,
	NotAllowed                               = 5,
	Restored                                 = 6,
	AlreadyOwned                             = 7,
	EInAppPurchaseState_MAX                  = 8,
};

// Enum OnlineSubsystem.EMPMatchOutcome
// NumValues: 0x000B
enum class EMPMatchOutcome : uint8
{
	None                                     = 0,
	Quit                                     = 1,
	Won                                      = 2,
	Lost                                     = 3,
	Tied                                     = 4,
	TimeExpired                              = 5,
	First                                    = 6,
	Second                                   = 7,
	Third                                    = 8,
	Fourth                                   = 9,
	EMPMatchOutcome_MAX                      = 10,
};

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010 (0x0010 - 0x0000)
struct FNamedInterface final
{
public:
	class FName                                   InterfaceName;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                InterfaceObject;                                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018 (0x0018 - 0x0000)
struct FNamedInterfaceDef final
{
public:
	class FName                                   InterfaceName;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InterfaceClassName;                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


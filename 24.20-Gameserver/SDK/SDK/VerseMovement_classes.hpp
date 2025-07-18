﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseMovement

#include "Basic.hpp"

#include "VerseMovement_structs.hpp"
#include "Engine_classes.hpp"
#include "EntityActor_classes.hpp"


namespace SDK
{

// Class VerseMovement.NetPhysicsMoveConfig
// 0x0090 (0x00C0 - 0x0030)
class UNetPhysicsMoveConfig final : public UDataAsset
{
public:
	TArray<struct FNetPhysicsMoveConfigEntry>     Entries;                                           // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNetPhysicsMoveLimits                  Limits;                                            // 0x0040(0x0080)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetPhysicsMoveConfig">();
	}
	static class UNetPhysicsMoveConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetPhysicsMoveConfig>();
	}
};

// Class VerseMovement.NetPhysicsMoveComponent
// 0x0078 (0x0118 - 0x00A0)
class UNetPhysicsMoveComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x58];                                      // 0x00A0(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	class UNetPhysicsMoveConfig*                  MoveConfig;                                        // 0x00F8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNetPhysicsMoveObject                  SimOutput;                                         // 0x0100(0x0001)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CachedPC;                                          // 0x0108(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110[0x8];                                      // 0x0110(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetPhysicsMoveComponent">();
	}
	static class UNetPhysicsMoveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetPhysicsMoveComponent>();
	}
};

// Class VerseMovement.VerseMovementComponentBase
// 0x0000 (0x0090 - 0x0090)
class UVerseMovementComponentBase : public UEntityActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseMovementComponentBase">();
	}
	static class UVerseMovementComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseMovementComponentBase>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteGameFramework

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"
#include "NetCore_structs.hpp"


namespace SDK
{

// Enum FortniteGameFramework.ETaskObjectStateChangeType
// NumValues: 0x0004
enum class ETaskObjectStateChangeType : uint8
{
	None                                     = 0,
	BeginState                               = 1,
	EndState                                 = 2,
	ETaskObjectStateChangeType_MAX           = 3,
};

// ScriptStruct FortniteGameFramework.ComponentCacheHelper
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FComponentCacheHelper final
{
public:
	uint8                                         Pad_0[0x58];                                       // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct FortniteGameFramework.ActorOwnedStateTreeConfig
// 0x0030 (0x0030 - 0x0000)
struct FActorOwnedStateTreeConfig final
{
public:
	TSoftObjectPtr<class UStateTree>              StateTreeAsset;                                    // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldReplicate;                                  // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct FortniteGameFramework.StateTreeRuntimeData
// 0x0030 (0x0030 - 0x0000)
struct FStateTreeRuntimeData final
{
public:
	class UObject*                                Owner;                                             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStateTree*                             StateTree;                                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeInstanceData                 StateTreeInstanceData;                             // 0x0010(0x0010)(NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x10];                                      // 0x0020(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct FortniteGameFramework.StateChangeData
// 0x001C (0x0028 - 0x000C)
struct FStateChangeData final : public FFastArraySerializerItem
{
public:
	int32                                         StateTreeDataHandle;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Handle;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StateIdentifier;                                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStateTreeTaskObject*                   StateObject;                                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETaskObjectStateChangeType                    StateChangeType;                                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct FortniteGameFramework.StateChangeDataArray
// 0x0018 (0x0120 - 0x0108)
struct FStateChangeDataArray final : public FFastArraySerializer
{
public:
	TArray<struct FStateChangeData>               StateChangeDataList;                               // 0x0108(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UStateTreeManagerComponent*             StateTreeManagerComponent;                         // 0x0118(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteGameFramework.StateTreeClientSimulationData
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FStateTreeClientSimulationData final
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


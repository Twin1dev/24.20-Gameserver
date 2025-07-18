﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassEntity

#include "Basic.hpp"

#include "StructUtils_structs.hpp"


namespace SDK
{

// Enum MassEntity.EMassCommandOperationType
// NumValues: 0x0008
enum class EMassCommandOperationType : uint8
{
	None                                     = 0,
	Create                                   = 1,
	Add                                      = 2,
	Remove                                   = 3,
	ChangeComposition                        = 4,
	Set                                      = 5,
	Destroy                                  = 6,
	MAX                                      = 7,
};

// Enum MassEntity.EMassObservedOperation
// NumValues: 0x0003
enum class EMassObservedOperation : uint8
{
	Add                                      = 0,
	Remove                                   = 1,
	MAX                                      = 2,
};

// Enum MassEntity.EProcessorExecutionFlags
// NumValues: 0x0008
enum class EProcessorExecutionFlags : uint8
{
	None                                     = 0,
	Standalone                               = 1,
	Server                                   = 2,
	Client                                   = 4,
	Editor                                   = 8,
	AllNetModes                              = 7,
	All                                      = 15,
	EProcessorExecutionFlags_MAX             = 16,
};

// Enum MassEntity.EMassProcessingPhase
// NumValues: 0x0007
enum class EMassProcessingPhase : uint8
{
	PrePhysics                               = 0,
	StartPhysics                             = 1,
	DuringPhysics                            = 2,
	EndPhysics                               = 3,
	PostPhysics                              = 4,
	FrameEnd                                 = 5,
	MAX                                      = 6,
};

// Enum MassEntity.EMassFragmentAccess
// NumValues: 0x0004
enum class EMassFragmentAccess : uint8
{
	None                                     = 0,
	ReadOnly                                 = 1,
	ReadWrite                                = 2,
	MAX                                      = 3,
};

// Enum MassEntity.EMassFragmentPresence
// NumValues: 0x0005
enum class EMassFragmentPresence : uint8
{
	All                                      = 0,
	Any                                      = 1,
	None                                     = 2,
	Optional                                 = 3,
	MAX                                      = 4,
};

// ScriptStruct MassEntity.MassFragmentRequirements
// 0x01E8 (0x01E8 - 0x0000)
struct alignas(0x08) FMassFragmentRequirements
{
public:
	uint8                                         Pad_0[0x1E8];                                      // 0x0000(0x01E8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassEntityQuery
// 0x00B8 (0x02A0 - 0x01E8)
struct alignas(0x10) FMassEntityQuery final : public FMassFragmentRequirements
{
public:
	uint8                                         Pad_1E8[0xB8];                                     // 0x01E8(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassFragment
// 0x0000 (0x0000 - 0x0000)
#pragma pack(push, 0x1)
struct alignas(0x01) FMassFragment
{
};
#pragma pack(pop)

// ScriptStruct MassEntity.MassTag
// 0x0001 (0x0001 - 0x0000)
struct FMassTag final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassChunkFragment
// 0x0001 (0x0001 - 0x0000)
struct FMassChunkFragment final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassSharedFragment
// 0x0000 (0x0000 - 0x0000)
#pragma pack(push, 0x1)
struct alignas(0x01) FMassSharedFragment
{
};
#pragma pack(pop)

// ScriptStruct MassEntity.MassEntityHandle
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FMassEntityHandle final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SerialNumber;                                      // 0x0004(0x0004)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassEntity.MassEntityView
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FMassEntityView final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassRuntimePipeline
// 0x0010 (0x0010 - 0x0000)
struct FMassRuntimePipeline final
{
public:
	TArray<class UMassProcessor*>                 Processors;                                        // 0x0000(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// ScriptStruct MassEntity.MassObserversMap
// 0x0050 (0x0050 - 0x0000)
struct FMassObserversMap final
{
public:
	TMap<class UScriptStruct*, struct FMassRuntimePipeline> Container;                               // 0x0000(0x0050)(NativeAccessSpecifierPrivate)
};

// ScriptStruct MassEntity.MassObserverManager
// 0x01C8 (0x01C8 - 0x0000)
struct FMassObserverManager final
{
public:
	uint8                                         Pad_0[0x80];                                       // 0x0000(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMassObserversMap                      FragmentObservers[0x2];                            // 0x0080(0x0050)(Protected, NativeAccessSpecifierProtected)
	struct FMassObserversMap                      TagObservers[0x2];                                 // 0x0120(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C0[0x8];                                      // 0x01C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassProcessorClassCollection
// 0x0010 (0x0010 - 0x0000)
struct FMassProcessorClassCollection final
{
public:
	TArray<TSubclassOf<class UMassProcessor>>     ClassCollection;                                   // 0x0000(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct MassEntity.MassEntityObserverClassesMap
// 0x0050 (0x0050 - 0x0000)
struct FMassEntityObserverClassesMap final
{
public:
	TMap<class UScriptStruct*, struct FMassProcessorClassCollection> Container;                      // 0x0000(0x0050)(NativeAccessSpecifierPrivate)
};

// ScriptStruct MassEntity.MassProcessingPhaseConfig
// 0x0020 (0x0020 - 0x0000)
struct FMassProcessingPhaseConfig final
{
public:
	class FName                                   PhaseName;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UMassCompositeProcessor>    PhaseGroupClass;                                   // 0x0008(0x0008)(Edit, ZeroConstructor, Config, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMassProcessor*>                 ProcessorCDOs;                                     // 0x0010(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct MassEntity.ProcessorAuxDataBase
// 0x0001 (0x0001 - 0x0000)
struct FProcessorAuxDataBase final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassProcessingContext
// 0x0040 (0x0040 - 0x0000)
struct FMassProcessingContext final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInstancedStruct                       AuxData;                                           // 0x0018(0x0010)(NativeAccessSpecifierPublic)
	bool                                          bFlushCommandBuffer;                               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x17];                                      // 0x0029(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassEntity.MassProcessorExecutionOrder
// 0x0028 (0x0028 - 0x0000)
struct FMassProcessorExecutionOrder final
{
public:
	class FName                                   ExecuteInGroup;                                    // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ExecuteBefore;                                     // 0x0008(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                           ExecuteAfter;                                      // 0x0018(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// ScriptStruct MassEntity.MassSubsystemRequirements
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FMassSubsystemRequirements final
{
public:
	uint8                                         Pad_0[0x48];                                       // 0x0000(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


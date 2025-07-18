﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigLogicModule

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ControlRig_structs.hpp"


namespace SDK
{

// Enum RigLogicModule.EArchetype
// NumValues: 0x0007
enum class EArchetype : uint8
{
	Asian                                    = 0,
	Black                                    = 1,
	Caucasian                                = 2,
	Hispanic                                 = 3,
	Alien                                    = 4,
	Other                                    = 5,
	EArchetype_MAX                           = 6,
};

// Enum RigLogicModule.EGender
// NumValues: 0x0004
enum class EGender : uint8
{
	Male                                     = 0,
	Female                                   = 1,
	Other                                    = 2,
	EGender_MAX                              = 3,
};

// Enum RigLogicModule.ETranslationUnit
// NumValues: 0x0003
enum class ETranslationUnit : uint8
{
	CM                                       = 0,
	M                                        = 1,
	ETranslationUnit_MAX                     = 2,
};

// Enum RigLogicModule.ERotationUnit
// NumValues: 0x0003
enum class ERotationUnit : uint8
{
	Degrees                                  = 0,
	Radians                                  = 1,
	ERotationUnit_MAX                        = 2,
};

// Enum RigLogicModule.EDirection
// NumValues: 0x0007
enum class EDirection : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	Up                                       = 2,
	Down                                     = 3,
	Front                                    = 4,
	Back                                     = 5,
	EDirection_MAX                           = 6,
};

// Enum RigLogicModule.EDNADataLayer
// NumValues: 0x0008
enum class EDNADataLayer : uint8
{
	Descriptor                               = 0,
	Definition                               = 1,
	Behavior                                 = 2,
	Geometry                                 = 3,
	GeometryWithoutBlendShapes               = 4,
	AllWithoutBlendShapes                    = 5,
	All                                      = 6,
	EDNADataLayer_MAX                        = 7,
};

// Enum RigLogicModule.ERigLogicCalculationType
// NumValues: 0x0004
enum class ERigLogicCalculationType : uint8
{
	Scalar                                   = 0,
	SSE                                      = 1,
	AVX                                      = 2,
	ERigLogicCalculationType_MAX             = 3,
};

// Enum RigLogicModule.ELodUpdateOption
// NumValues: 0x0004
enum class ELodUpdateOption : uint8
{
	LOD0Only                                 = 0,
	LOD1AndHigher                            = 1,
	All                                      = 2,
	ELodUpdateOption_MAX                     = 3,
};

// ScriptStruct RigLogicModule.CoordinateSystem
// 0x0003 (0x0003 - 0x0000)
struct FCoordinateSystem final
{
public:
	EDirection                                    XAxis;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDirection                                    YAxis;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDirection                                    ZAxis;                                             // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigLogicModule.MeshBlendShapeChannelMapping
// 0x0008 (0x0008 - 0x0000)
struct FMeshBlendShapeChannelMapping final
{
public:
	int32                                         MeshIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BlendShapeChannelIndex;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigLogicModule.TextureCoordinate
// 0x0008 (0x0008 - 0x0000)
struct FTextureCoordinate final
{
public:
	float                                         U;                                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V;                                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigLogicModule.VertexLayout
// 0x000C (0x000C - 0x0000)
struct FVertexLayout final
{
public:
	int32                                         Position;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TextureCoordinate;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Normal;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct RigLogicModule.AnimNode_RigLogic
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_RigLogic final : public FAnimNode_Base
{
public:
	struct FPoseLink                              AnimSequence;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x38];                                      // 0x0020(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
// 0x0010 (0x0010 - 0x0000)
struct FRigUnit_RigLogic_IntArray final
{
public:
	TArray<int32>                                 Values;                                            // 0x0000(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
// 0x0088 (0x0088 - 0x0000)
struct FRigUnit_RigLogic_Data final
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  SkelMeshComponent;                                 // 0x0000(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x18];                                       // 0x0008(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 InputCurveIndices;                                 // 0x0020(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<int32>                                 HierarchyBoneIndices;                              // 0x0030(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>     MorphTargetCurveIndices;                           // 0x0040(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>     BlendShapeIndices;                                 // 0x0050(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>     CurveElementIndicesForAnimMaps;                    // 0x0060(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_RigLogic_IntArray>     RigLogicIndicesForAnimMaps;                        // 0x0070(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint32                                        CurrentLOD;                                        // 0x0080(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct RigLogicModule.RigUnit_RigLogic
// 0x0088 (0x00C0 - 0x0038)
struct FRigUnit_RigLogic final : public FRigUnitMutable
{
public:
	struct FRigUnit_RigLogic_Data                 Data;                                              // 0x0038(0x0088)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

}


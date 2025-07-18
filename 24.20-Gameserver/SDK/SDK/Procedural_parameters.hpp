﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Procedural

#include "Basic.hpp"

#include "Procedural_structs.hpp"


namespace SDK::Params
{

// Function Procedural.ProceduralParameterModifier.GetContribution
// 0x0004 (0x0004 - 0x0000)
struct ProceduralParameterModifier_GetContribution final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
// 0x0004 (0x0004 - 0x0000)
struct HISMBuilderSettings_SetOverriddenLightMapRes final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
// 0x0004 (0x0004 - 0x0000)
struct HISMBuilderSettings_GetOverriddenLightMapRes final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralGenerationContext.GetGenerationComponent
// 0x0008 (0x0008 - 0x0000)
struct ProceduralGenerationContext_GetGenerationComponent final
{
public:
	class UProceduralGenerationComponent*         ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralGenerationContext.GetGenerationVolume
// 0x0008 (0x0008 - 0x0000)
struct ProceduralGenerationContext_GetGenerationVolume final
{
public:
	class AVolume*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralGeneratorContext.Generate
// 0x0001 (0x0001 - 0x0000)
struct ProceduralGeneratorContext_Generate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
// 0x0010 (0x0010 - 0x0000)
struct ProceduralGeneratorContext_GetOrCreateGeneratorContext final
{
public:
	class UProceduralGenerator*                   Generator_0;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralGeneratorContext*            Context;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralGeneratorContext.OnGenerate
// 0x0001 (0x0001 - 0x0000)
struct ProceduralGeneratorContext_OnGenerate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts
// 0x0010 (0x0010 - 0x0000)
struct ProceduralGeneratorContext_GetGeneratedContexts final
{
public:
	TArray<class UProceduralGeneratorContext*>    ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralPointCloud.GetPointsByTag
// 0x0018 (0x0018 - 0x0000)
struct ProceduralPointCloud_GetPointsByTag final
{
public:
	class FName                                   InTag;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProceduralPointCloudPoint>     ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.SetPitchMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_SetPitchMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.SetPitchMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_SetPitchMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.SetRollMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_SetRollMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.SetRollMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_SetRollMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.SetYawMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_SetYawMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.SetYawMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_SetYawMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.GetPitchMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_GetPitchMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.GetPitchMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_GetPitchMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.GetRollMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_GetRollMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.GetRollMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_GetRollMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.GetYawMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_GetYawMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationMapModifier.GetYawMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationMapModifier_GetYawMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_SetRandomPitchMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_SetRandomPitchMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_SetRandomRollMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_SetRandomRollMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_SetRandomYawMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_SetRandomYawMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_GetRandomPitchMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_GetRandomPitchMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_GetRandomRollMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_GetRandomRollMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_GetRandomYawMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralRotationNoiseModifier_GetRandomYawMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleMapModifier_SetRemapScaleMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleMapModifier_SetRemapScaleMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleMapModifier_GetRemapScaleMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleMapModifier_GetRemapScaleMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleNoiseModifier_SetScaleMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleNoiseModifier_SetScaleMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleNoiseModifier_GetScaleMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScaleNoiseModifier_GetScaleMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScatterSettings_SetSourcePointDistanceMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScatterSettings_SetSourcePointDistanceMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScatterSettings_GetSourcePointDistanceMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralScatterSettings_GetSourcePointDistanceMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceHeightMap_SetHeightRangeMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceHeightMap_SetHeightRangeMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceHeightMap_GetHeightRangeMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceHeightMap_GetHeightRangeMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceHeightMap.GetValue
// 0x0008 (0x0008 - 0x0000)
struct ProceduralSurfaceHeightMap_GetValue final
{
public:
	float                                         InHeight;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
// 0x0004 (0x0004 - 0x0000)
struct ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
// 0x0008 (0x0008 - 0x0000)
struct ProceduralSurfaceSlopeAngleMap_GetValue final
{
public:
	float                                         InSlopeAngle;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


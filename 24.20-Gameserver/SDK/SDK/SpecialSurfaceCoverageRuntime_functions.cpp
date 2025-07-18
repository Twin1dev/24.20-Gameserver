﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpecialSurfaceCoverageRuntime

#include "Basic.hpp"

#include "SpecialSurfaceCoverageRuntime_classes.hpp"
#include "SpecialSurfaceCoverageRuntime_parameters.hpp"


namespace SDK
{

// Function SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap.UpdateCoverageMap
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*           SpecialSurfaceRenderTarget                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   InTopLeftWorldCoordinate                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   InBottomRightWorldCoordinate                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   CoverageThreshold                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DebugDrawDuration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameStateComponent_SurfaceCoverageMap::UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, const struct FVector& InTopLeftWorldCoordinate, const struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_SurfaceCoverageMap", "UpdateCoverageMap");

	Params::FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpecialSurfaceRenderTarget = SpecialSurfaceRenderTarget;
	Parms.InTopLeftWorldCoordinate = std::move(InTopLeftWorldCoordinate);
	Parms.InBottomRightWorldCoordinate = std::move(InBottomRightWorldCoordinate);
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


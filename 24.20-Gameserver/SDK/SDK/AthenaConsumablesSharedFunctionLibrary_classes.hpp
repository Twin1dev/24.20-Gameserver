﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaConsumablesSharedFunctionLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ECardinalDirection_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaConsumablesSharedFunctionLibrary.AthenaConsumablesSharedFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAthenaConsumablesSharedFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_Actor_Forward_Cardinal_Direction(class AActor* Actor, class UObject* __WorldContext, ECardinalDirection* OutCardinalDirection, double* OutYaw);

	void IsOverlappingDeployableBlockVolume(class UObject* WorldContextObject, float BlockingAreaCheckRadius, const struct FVector& Location, class UObject* __WorldContext, bool* bOverlapping) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaConsumablesSharedFunctionLibrary_C">();
	}
	static class UAthenaConsumablesSharedFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaConsumablesSharedFunctionLibrary_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RidingGeneric_Interafce

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RidingGeneric_Interafce.RidingGeneric_Interafce_C
// 0x0000 (0x0000 - 0x0000)
class IRidingGeneric_Interafce_C final
{
public:
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void ToggleRidingAlternative();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RidingGeneric_Interafce_C">();
	}
	static class IRidingGeneric_Interafce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IRidingGeneric_Interafce_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};

}


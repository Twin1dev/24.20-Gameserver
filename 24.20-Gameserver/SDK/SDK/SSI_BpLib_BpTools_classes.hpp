﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSI_BpLib_BpTools

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SSI_BpLib_BpTools.SSI_BpLib_BpTools_C
// 0x0000 (0x0028 - 0x0028)
class USSI_BpLib_BpTools_C final : public UBlueprintFunctionLibrary
{
public:
	static void OnLocalPlayersTeam(class AActor* TargetActor, class UObject* __WorldContext, bool* Return_Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SSI_BpLib_BpTools_C">();
	}
	static class USSI_BpLib_BpTools_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USSI_BpLib_BpTools_C>();
	}
};

}


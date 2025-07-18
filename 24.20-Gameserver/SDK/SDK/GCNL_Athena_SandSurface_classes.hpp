﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_SandSurface

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GCNL_Athena_Surface_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C
// 0x0020 (0x0998 - 0x0978)
class AGCNL_Athena_SandSurface_C final : public AGCNL_Athena_Surface_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCNL_Athena_SandSurface_C;          // 0x0978(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FootStepFX;                                        // 0x0980(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bNotValid;                                         // 0x0988(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReplayMode;                                       // 0x0989(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98A[0x6];                                      // 0x098A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortReplaySpectatorAthena*             ReplayController;                                  // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Athena_SandSurface(int32 EntryPoint);
	void OnLoopingStartNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnPlayerFootstep();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_SandSurface_C">();
	}
	static class AGCNL_Athena_SandSurface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_SandSurface_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_BoostJumpPack_FuelRegen

#include "Basic.hpp"


namespace SDK::Params
{

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen
// 0x0018 (0x0018 - 0x0000)
struct GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_Event_PlayerPawn;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink
// 0x0008 (0x0008 - 0x0000)
struct GCL_BoostJumpPack_FuelRegen_C_ResetBlink final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


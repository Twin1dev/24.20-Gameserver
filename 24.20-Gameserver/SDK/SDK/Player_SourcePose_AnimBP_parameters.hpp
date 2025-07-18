﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_SourcePose_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK::Params
{

// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Player_SourcePose_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.ExecuteUbergraph_Player_SourcePose_AnimBP
// 0x0004 (0x0004 - 0x0000)
struct Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.ResetBlendListNode
// 0x0040 (0x0040 - 0x0000)
struct Player_SourcePose_AnimBP_C_ResetBlendListNode final
{
public:
	struct FAnimUpdateContext                     Context;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                     Node;                                              // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	EAnimNodeReferenceConversionResult            CallFunc_ConvertToBlendListBase_Result;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlendListBaseReference                CallFunc_ConvertToBlendListBase_ReturnValue;       // 0x0028(0x0010)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


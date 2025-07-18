﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Temple_FaceAcc_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GravityOverrideParamsStruct_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "F_MED_Temple_FaceAcc_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Temple_FaceAcc_AnimBP.F_MED_Temple_FaceAcc_AnimBP_C
// 0x3CA0 (0x4390 - 0x06F0)
class UF_MED_Temple_FaceAcc_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct F_MED_Temple_FaceAcc_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x06F8(0x0003)(HasGetValueTypeHash)
	uint8                                         Pad_6FB[0x5];                                      // 0x06FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0700(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0708(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0710(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0730(0x01D0)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_2;                         // 0x0900(0x0990)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x1290(0x0990)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x1C20(0x0990)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x25B0(0x0100)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x26B0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x26D0(0x0028)()
	uint8                                         Pad_26F8[0x8];                                     // 0x26F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Trail                        AnimGraphNode_Trail;                               // 0x2700(0x02A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x29A0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x29C8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2A10(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x2A38(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2A58(0x0028)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2A80(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2AA0(0x0100)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2BA0(0x0020)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_4;                        // 0x2BC0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_3;                        // 0x2CC8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_2;                        // 0x2DD0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_1;                        // 0x2ED8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x2FE0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x30E8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3108(0x0020)()
	uint8                                         Pad_3128[0x8];                                     // 0x3128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x3130(0x0510)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x3640(0x0510)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3B50(0x0048)()
	bool                                          IsWearingBackBling;                                // 0x3B98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B99[0x7];                                     // 0x3B99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        IsWearingCape;                                     // 0x3BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GravityVector;                                     // 0x3BA8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        templePackAlpha;                                   // 0x3BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IsGenericBackpackAlpha;                            // 0x3BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isWearingCapeBool;                                 // 0x3BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isWearingBackpack;                                 // 0x3BD1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isTemplePack;                                      // 0x3BD2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BD3[0x5];                                     // 0x3BD3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGravityOverrideParamsStruct           Gravity_Override_Params;                           // 0x3BD8(0x07B8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_Temple_FaceAcc_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Temple_FaceAcc_AnimBP_C">();
	}
	static class UF_MED_Temple_FaceAcc_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Temple_FaceAcc_AnimBP_C>();
	}
};

}


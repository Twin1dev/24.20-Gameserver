﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerHealthDamage_CameraLensEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
// 0x0038 (0x0038 - 0x0000)
struct B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_NewParam;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_First_Hit;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
// 0x0010 (0x0010 - 0x0000)
struct B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter final
{
public:
	double                                        NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          First_Hit;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_SCMachine_Passive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlaylistValid;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TestPlaylist;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGameStateComponent_Reboot*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsResurrectionEnabled_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.CheckPlayerChipSpawnEnabled
// 0x0020 (0x0020 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled final
{
public:
	bool                                          IsChipSpawnEnabled;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive
// 0x01B0 (0x01B0 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueAsBoolWithContext_ReturnValue;    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0xA];                                        // 0x0006(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Resurrection_Active_bEnabled;       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0xF];                                       // 0x00E1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_CustomEvent_FortPlayerPawnAthena;           // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABGA_Athena_SCMachine_Pickup_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;            // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBattleLabModePlaylist_ReturnValue;      // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRespawningAllowed_ReturnValue;          // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPlayerChipSpawnEnabled_IsChipSpawnEnabled; // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied final
{
public:
	class AFortPlayerPawnAthena*                  FortPlayerPawnAthena;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer
// 0x0018 (0x0018 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_SaveOutPlayer final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


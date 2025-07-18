﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HidingProp_Teleport

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.EventReceived_ABAD14334D754F46E9037882BF0256B6
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_EventReceived_ABAD14334D754F46E9037882BF0256B6 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.ExecuteUbergraph_GA_Athena_HidingProp_Teleport
// 0x08F0 (0x08F0 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_ExecuteUbergraph_GA_Athena_HidingProp_Teleport final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0028(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_2; // 0x0034(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0040(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00F0(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x01B0(0x00B0)()
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0268(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_276[0x2];                                      // 0x0276(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0278(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_2;         // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x029C(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x02A4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0340(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x3];                                      // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue; // 0x0384(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;           // 0x0390(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x03A0(0x0018)()
	class UObject*                                CallFunc_EffectContextGetSourceObject_ReturnValue; // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_HidingProp_C*                        K2Node_DynamicCast_AsB_Hiding_Prop;                // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x03D0(0x00D0)(ContainsInstancedReference)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x04A0(0x00D0)(ContainsInstancedReference)
	class AFortPawn*                              K2Node_CustomEvent_Pawn;                           // 0x0570(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0578(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0580(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0588(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_594[0x4];                                      // 0x0594(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x05B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x05B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x05D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x05E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x0600(0x00D0)(ContainsInstancedReference)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D1[0x7];                                      // 0x06D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x06D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E1[0x7];                                      // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_3;           // 0x06E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x06F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F1[0x7];                                      // 0x06F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x06F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Select_Default;                             // 0x0710(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortAsyncAction_TeleportAndWaitForLevelStreaming* CallFunc_CreateTeleportAndWaitForLevelStreaming_ReturnValue; // 0x0728(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TeleportPlayerPawn_ReturnValue;           // 0x0731(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_732[0x2];                                      // 0x0732(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IncrementAnalyticMatchCount_ReturnValue;  // 0x0734(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_2;                   // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_739[0x7];                                      // 0x0739(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3; // 0x0740(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1; // 0x0748(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_3;                   // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_751[0x3];                                      // 0x0751(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0754(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue_1;  // 0x0758(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75C[0x4];                                      // 0x075C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0768(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_774[0x4];                                      // 0x0774(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x0778(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage;                         // 0x0780(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_784[0x4];                                      // 0x0784(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x0788(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0790(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0798(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;                  // 0x07B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BC[0x4];                                      // 0x07BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Momentum;                       // 0x07C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4; // 0x07D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x07E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E9[0x3];                                      // 0x07E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x07EC(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x07F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F9[0x7];                                      // 0x07F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5; // 0x0800(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x0808(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0811(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_812[0x6];                                      // 0x0812(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_3;         // 0x0818(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_821[0x7];                                      // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0828(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0838(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_839[0x7];                                      // 0x0839(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x0840(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6; // 0x0848(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0850(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_854[0x4];                                      // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1; // 0x0858(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_CustomEvent_FortPawn;                       // 0x0860(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue; // 0x0868(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0870(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*            K2Node_DynamicCast_AsFort_Ability_System_Component; // 0x0878(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0881(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_882[0x6];                                      // 0x0882(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_1;                 // 0x0888(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;                            // 0x0890(0x0048)(ContainsInstancedReference)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x08D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_ServerWorldTime_ImplicitCast;   // 0x08E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FireAnalyticEventEnvironmentalItemUsed_SessionLength_ImplicitCast; // 0x08E8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.FailedToActivatePassiveAbility
// 0x0048 (0x0048 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.GrapplerFailSafe
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_GrapplerFailSafe final
{
public:
	class AFortPawn*                              FortPawn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnPawnDied
// 0x0060 (0x0060 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_OnPawnDied final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    FHitComponent;                                     // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Momentum;                                          // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.QuestUpdate
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_HidingProp_Teleport_C_QuestUpdate final
{
public:
	class AFortPawn*                              Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerPawn_Tandem

#include "Basic.hpp"

#include "BP_PlayerPawn_NonParticipant_classes.hpp"
#include "Engine_structs.hpp"
#include "Struct_NPC_HealthInfo_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C
// 0x0080 (0x62F0 - 0x6270)
class ABP_PlayerPawn_Tandem_C final : public ABP_PlayerPawn_NonParticipant_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerPawn_Tandem_C;             // 0x6270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWidgetComponent*                   NPCStatusWidget;                                   // 0x6278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConverted;                                       // 0x6280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Leader_Team;                                       // 0x6281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6282[0x6];                                     // 0x6282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_NPC_HealthInfo                 HealthInfo;                                        // 0x6288(0x0020)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          NPCStatusWidgetHealthBarDisabled;                  // 0x62A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62A9[0x7];                                     // 0x62A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ShowHealth;                                        // 0x62B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        NPCHealthBarHideTimeAfterDeath;                    // 0x62D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NPCMaxDistanceFromDamageINstigatorToDrawHealthBar; // 0x62E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHealthCheatEnabled;                              // 0x62E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EnableHiredTandemHealthBar();
	void ExecuteUbergraph_BP_PlayerPawn_Tandem(int32 EntryPoint);
	void HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void HandlePawnUnconverted(class AFortPawn* UnconvertedPawn);
	void NPCSetupHealthBarOnDeath();
	void NPCTandemDisableHealthBar();
	void NPCTandemEnableHealthBars();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnRep_HealthInfo();
	void PawnHealthChanged();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void StartHealthBar();
	void StartUpdatingHealthWidget();
	void StopUpdatingHealthWidget();
	void UpdateConvertIndicator();
	void UpdatePawnHealthHUD();
	void WidgetVisibilityChanged(bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerPawn_Tandem_C">();
	}
	static class ABP_PlayerPawn_Tandem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerPawn_Tandem_C>();
	}
};

}


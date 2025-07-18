﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Pickaxe_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// 0x0090 (0x1378 - 0x12E8)
class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x12E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x12F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x12F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x1300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x1308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x1310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1311[0x7];                                     // 0x1311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x1318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                Effects_Color_Level;                               // 0x1320(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Equipped;                                          // 0x1338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEquipPendingInstigator;                           // 0x1339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseTimeofDayControl;                               // 0x133A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Swing_Right_;                                      // 0x133B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_133C[0x4];                                     // 0x133C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     Impact_FX;                                         // 0x1340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Left_Swing_Rotation;                               // 0x1348(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Right_Swing_Rotation;                              // 0x1360(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Anim_Trails_Disable();
	void Anim_Trails_Notify(bool bActive);
	void Binding_Time_of_Day_Control(bool F_);
	void BindSwingAnimTrailEvents();
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32 EntryPoint);
	void FootStepLeft();
	void FootStepRight();
	void HandleKillWatch();
	void HandleWeaponHolstered();
	void K2_OnUnEquip();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingLeft_End();
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingRight_End();
	void OnEquippedWeaponDestory();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnInitWeaponCosmetics();
	void OnInstigatorSet();
	void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded);
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(class FName StatName, int32 StatValue);
	void OnWeaponAttached();
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result);
	void PlayRClickImpacts();
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void SetWpnRarity();
	void SwingLeft();
	void SwingLeftEnd();
	void SwingRight();
	void SwingRightEnd();
	void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void UnbindSwingAnimTrailEvents();
	void UpdateBasedOnKills(int32 Watched_Kills);
	void UserConstructionScript();
	void Vehicle_Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Pickaxe_Generic_C">();
	}
	static class AB_Athena_Pickaxe_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Pickaxe_Generic_C>();
	}
};

}


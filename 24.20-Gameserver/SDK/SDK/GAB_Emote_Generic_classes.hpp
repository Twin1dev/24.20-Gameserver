﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Emote_Generic

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// 0x0060 (0x0B88 - 0x0B28)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        PostTriggerCancelDelay;                            // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideReticle;                                       // 0x0B40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B41[0x7];                                      // 0x0B41(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ReticleHUDElementTags;                             // 0x0B48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   MontageOverrideSection;                            // 0x0B68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAbilityStopped;                                   // 0x0B6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B6D[0x3];                                      // 0x0B6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   EmoteHolsterId;                                    // 0x0B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHolstered;                                        // 0x0B74(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B75[0x3];                                      // 0x0B75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   HUDElementVisibilityReasonName;                    // 0x0B78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaitForLoadedCount;                                // 0x0B7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bClearInteractOnActivate;                          // 0x0B80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint);
	void ForceStopMontage();
	void GetBodyTypeAndGender(EFortCustomBodyType* BodyType, EFortCustomGender* Gender);
	TSoftObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, EFortCustomBodyType BodyType, EFortCustomGender Gender);
	void IsMontagePlaying(class UAnimMontage* Montage, bool* Result);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void NonMontageAsyncAssetsReady();
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(class UObject* Loaded);
	void OnMontageStartedPlaying();
	void PlayInitialEmoteMontage();
	void SetReticleVisibility(bool ShouldHide);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	bool ShouldPlayFailedMontage(const struct FGameplayTagContainer& FailedReason) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Emote_Generic_C">();
	}
	static class UGAB_Emote_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Emote_Generic_C>();
	}
};

}


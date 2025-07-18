﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AmbientAudioController

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
// 0x0130 (0x01F8 - 0x00C8)
class UBP_AmbientAudioController_C final : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        CheckFrequency;                                    // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInSnowCurrent;                                    // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAmbientAudioDataAsset*                 WinterAudioBank;                                   // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bSnowEnabled;                                      // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAmbientAudioDataAsset*                 StormAudioBank;                                    // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AmbientAudioInsideTag;                             // 0x00F8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAmbientAudioDataAsset*                 CurieAudioBank;                                    // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SnowOriginWorldLoc;                                // 0x0108(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SnowRadius;                                        // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   SnowTagsToApply;                                   // 0x0128(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   SnowEntryName;                                     // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        IndoorInterpTime;                                  // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IndoorStateChangedTime;                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsIndoors;                                        // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        IsPlayerIndoorsInterp;                             // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrViewTarget;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   GenericTagsToApply;                                // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bTagApplicationEnabled;                            // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteriorAudioState                           Current_State;                                     // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17A[0x2];                                      // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Current_Room_Size_Tag;                             // 0x017C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class UReverbEffect*> Reverbs;                                         // 0x0180(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent;                            // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SupportedTagLevels;                                // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        SpecialSurfacePadding;                             // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                              AmbientAudioSoundMix;                              // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyPlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Tag_Array);
	void CacheViewTarget();
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint);
	void InitSnowCoverageComponent(class AGameStateBase* Game_State);
	void On_Room_Size_Changed(const struct FGameplayTag& Curr, const struct FGameplayTag& Prev);
	void On_Room_State_Changed(EInteriorAudioState Curr, EInteriorAudioState Prev);
	void OnReady_C8AC4F724844E04160BE56BEAB4A2614(class AGameStateBase* GameState);
	void OnViewTargetChanged(class AActor* New_Target, class AActor* Prev_Target);
	void ReceiveBeginPlay();
	void RemovePlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Array);
	void Update();
	void Update_Interior_Audio_Verb();
	void UpdateSnowSetupBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AmbientAudioController_C">();
	}
	static class UBP_AmbientAudioController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AmbientAudioController_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HBOnboardingFlow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x0038 (0x02C0 - 0x0288)
class AHBOnboardingFlow_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition_Campaign*      PlayPeriodicEventMovieQuest;                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayedPeriodicEventMovie;                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasRecheckedNeedToPlayPeriodicEventMovie;         // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A2[0x6];                                      // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    PlayPeriodicEventCineObjective;                    // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                 PeriodicEventMovieAnnouncementClass;               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	bool NeedsToPlayEventMovie();
	void HandlePlayEventCine();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager);
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint);
	void StartFlow();
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain);
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HBOnboardingFlow_C">();
	}
	static class AHBOnboardingFlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHBOnboardingFlow_C>();
	}
};

}


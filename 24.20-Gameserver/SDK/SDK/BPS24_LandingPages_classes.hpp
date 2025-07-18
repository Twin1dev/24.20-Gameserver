﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS24_LandingPages

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_structs.hpp"
#include "BattlePassS24UI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPS24_LandingPages.BPS24_LandingPages_C
// 0x00D8 (0x0620 - 0x0548)
class UBPS24_LandingPages_C final : public UBattlePassLandingPageS24
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0548(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_CurrentSeason;                                // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Season;                                       // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPS24_BattlePassDynamicIcon_C*         WBP_BattlePassDynamicIcon;                         // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              On_show_BP_character;                              // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Custo_Character;                           // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Mystery_Character;                         // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Bonus_Character;                           // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Crew_Character;                            // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Buy_BP;                                    // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Buy_Level;                                 // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              On_show_Gift_Battle_Pass;                          // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CustomizationOwned;                                // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_601[0x7];                                      // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, bool bShowRewardCount, const class FString& ButtonID)> OnShowButtonDetails; // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             ScreenAppearWhooshSound;                           // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BPS20_LandingPages_Button_BonusRewards_K2Node_ComponentBoundEvent_11_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_CharacterCustomizer_K2Node_ComponentBoundEvent_9_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_JoinSubscription_K2Node_ComponentBoundEvent_12_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_Quests_K2Node_ComponentBoundEvent_10_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_Rewards_K2Node_ComponentBoundEvent_8_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS23_LandingPages_Button_WeeklyRewards_K2Node_ComponentBoundEvent_3_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void Button_BonusRewards_Event_0(class UBPS24_LandingPageButton_C* Button_BonusRewards_0);
	void Button_CharacterCustomizer_Event_0(class UBPS24_LandingPageButton_C* Button_CharacterCustomizer_0);
	void Button_JoinSubscription_Event_0(class UBPS24_LandingPageButton_C* Button_JoinSubscription_0);
	void Button_MysteryRewards_Event_0(class UBPS24_LandingPageButton_C* Button_MysteryRewards);
	void Button_RewardOverview_Event_2(class UBPS24_LandingPageButton_C* Button_RewardOverview);
	void Construct();
	void ExecuteUbergraph_BPS24_LandingPages(int32 EntryPoint);
	void On_BattlePass_completed(bool BPComplete);
	void OnBattlePassSubscriptionAllowed(const bool bSubscriptionAllowed);
	void OnEnterSubPage();
	void OnInitialized();
	void Play_intro();
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages(class UBPS24_LandingPageButton_C* Button_RewardOverview);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_0(class UBPS24_LandingPageButton_C* Button_CharacterCustomizer_0);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_1(class UBPS24_LandingPageButton_C* Button_MysteryRewards);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_2(class UBPS24_LandingPageButton_C* Button_BonusRewards_0);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_3(class UBPS24_LandingPageButton_C* Button_JoinSubscription_0);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_4(class UBPS24_LandingPageButton_C* Button_RewardOverview);
	void SetBattlePassOwned(bool bOwned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_LandingPages_C">();
	}
	static class UBPS24_LandingPages_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_LandingPages_C>();
	}
};

}


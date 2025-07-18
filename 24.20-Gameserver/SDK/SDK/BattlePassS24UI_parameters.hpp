﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassS24UI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "BattlePassS24UI_structs.hpp"


namespace SDK::Params
{

// Function BattlePassS24UI.BattlePassLandingPageS24.OnBattlePassSubscriptionAllowed
// 0x0001 (0x0001 - 0x0000)
struct BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed final
{
public:
	bool                                          bSubscriptionAllowed;                              // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassRewardPageS24.HandleRewardTracksBoundaryNavigation
// 0x0010 (0x0010 - 0x0000)
struct BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation final
{
public:
	EUINavigation                                 InNavigation;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassRewardPageS24.OnInitForPageType
// 0x0001 (0x0001 - 0x0000)
struct BattlePassRewardPageS24_OnInitForPageType final
{
public:
	ERewardPageType                               InRewardPageType;                                  // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassRewardPageS24.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct BattlePassRewardPageS24_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassRewardPageS24.OnLoadingScreenSelectedChanged
// 0x0001 (0x0001 - 0x0000)
struct BattlePassRewardPageS24_OnLoadingScreenSelectedChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassRewardPageS24.OnPageChanged
// 0x0008 (0x0008 - 0x0000)
struct BattlePassRewardPageS24_OnPageChanged final
{
public:
	int32                                         PageNumber;                                        // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RewardPageTotal;                                   // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassRewardPageS24.GetRewardPageBackgroundData
// 0x0060 (0x0060 - 0x0000)
struct BattlePassRewardPageS24_GetRewardPageBackgroundData final
{
public:
	struct FVaultWorldBackgroundData              ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.HandleClaimRewardComplete
// 0x0018 (0x0018 - 0x0000)
struct BattlePassScreenS24_HandleClaimRewardComplete final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OfferTemplateIdList;                               // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.HandleFullScreenMapToggled
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS24_HandleFullScreenMapToggled final
{
public:
	bool                                          bMapVisible;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnBattlePassGiftingAllowed
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS24_OnBattlePassGiftingAllowed final
{
public:
	bool                                          bGiftingAllowed;                                   // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnInsufficientFunds
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS24_OnInsufficientFunds final
{
public:
	EBattlePassCurrencyType                       CurrencyType;                                      // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnInsufficientResource
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS24_OnInsufficientResource final
{
public:
	const class UFortPersistentResourceItemDefinition* PersistentResource;                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnItemDelayed
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS24_OnItemDelayed final
{
public:
	struct FTimespan                              Delay;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetBaseRewardsInfo
// 0x0010 (0x0010 - 0x0000)
struct BattlePassScreenS24_OnSetBaseRewardsInfo final
{
public:
	int32                                         OwnedRewards;                                      // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalRewards;                                      // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompletedPages;                                    // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalPages;                                        // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetBonusRewardsInfo
// 0x001C (0x001C - 0x0000)
struct BattlePassScreenS24_OnSetBonusRewardsInfo final
{
public:
	bool                                          bIsUnlocked;                                       // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OwnedRewards;                                      // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalRewards;                                      // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompletedPages;                                    // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalPages;                                        // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ClaimedOutfits;                                    // 0x0014(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalOutfits;                                      // 0x0018(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetCoverPageData
// 0x0038 (0x0038 - 0x0000)
struct BattlePassScreenS24_OnSetCoverPageData final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0018(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bPageComplete;                                     // 0x0030(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetCrewInfo
// 0x0058 (0x0058 - 0x0000)
struct BattlePassScreenS24_OnSetCrewInfo final
{
public:
	bool                                          bIsNextMonthRewards;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   MonthText;                                         // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTimespan                              NextMonthlyRewardTimespan;                         // 0x0020(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   CharacterDisplayName;                              // 0x0028(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   CharacterDescription;                              // 0x0040(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetItemPrice
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS24_OnSetItemPrice final
{
public:
	int32                                         Cost;                                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBattlePassCurrencyType                       CurrencyType;                                      // 0x0004(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetPrerequisiteInfo
// 0x0028 (0x0028 - 0x0000)
struct BattlePassScreenS24_OnSetPrerequisiteInfo final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         CurrentAmount;                                     // 0x0018(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NeededAmount;                                      // 0x001C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBattlePassRewardPrerequisiteType             PrerequisiteType;                                  // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowPrerequisiteLock;                             // 0x0021(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetQuestRewardsInfo
// 0x0018 (0x0018 - 0x0000)
struct BattlePassScreenS24_OnSetQuestRewardsInfo final
{
public:
	struct FTimespan                              DelayTimespan;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OwnedRewards;                                      // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalRewards;                                      // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompletedPages;                                    // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalPages;                                        // 0x0014(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetResourcePrice
// 0x0010 (0x0010 - 0x0000)
struct BattlePassScreenS24_OnSetResourcePrice final
{
public:
	int32                                         Cost;                                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortPersistentResourceItemDefinition* PersistentResource;                           // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnSetWeeklyRewardsInfo
// 0x0020 (0x0020 - 0x0000)
struct BattlePassScreenS24_OnSetWeeklyRewardsInfo final
{
public:
	struct FTimespan                              DelayTimespan;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AvailableRewards;                                  // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OwnedRewards;                                      // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalRewards;                                      // 0x0010(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AvailablePages;                                    // 0x0014(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompletedPages;                                    // 0x0018(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalPages;                                        // 0x001C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnTransitionItemDetails
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS24_OnTransitionItemDetails final
{
public:
	bool                                          bTransitionForward;                                // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnUpdateBattlePassRequiredBar
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS24_OnUpdateBattlePassRequiredBar final
{
public:
	bool                                          bPassRequiredVisible;                              // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.OnUpdateStatusBar
// 0x0020 (0x0020 - 0x0000)
struct BattlePassScreenS24_OnUpdateStatusBar final
{
public:
	class FText                                   StatusText;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	EBattlePassStatusBarTypeS24                   BarType;                                           // 0x0018(0x0001)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BattlePassS24UI.BattlePassScreenS24.GetQuestPageDelay
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS24_GetQuestPageDelay final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.BattlePassScreenS24.IsSeasonalCustomizationItemOwned
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS24_IsSeasonalCustomizationItemOwned final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.FortBattlePassResourcesWidgetS24.OnBattleStarRewardsSet
// 0x0004 (0x0004 - 0x0000)
struct FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet final
{
public:
	int32                                         Rewards;                                           // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.FortBattlePassResourcesWidgetS24.OnStylePointsRewardsSet
// 0x0004 (0x0004 - 0x0000)
struct FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet final
{
public:
	int32                                         Rewards;                                           // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BattlePassS24UI.FortBattlePassTutorialTooltipS24.SetText
// 0x0018 (0x0018 - 0x0000)
struct FortBattlePassTutorialTooltipS24_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};

}


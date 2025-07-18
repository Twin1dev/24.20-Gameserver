﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// 0x0040 (0x07D8 - 0x0798)
class UAthenaLobby_C final : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFeaturedCreativeContent_C*             FeaturedCreativeContent;                           // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   QuestsBangWrapper;                                 // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFancyToastWidget_C*                    StoreToastWidget;                                  // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreToastRequest*                     StoreToastRequest;                                 // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TryShowToast;                                      // 0x07C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputAction_InspectChallenges;                     // 0x07C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AttemptToShowToast();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ConfigureGenericLinkButton();
	void Construct();
	void DisplayGlyphQuestUpdated(int32 NewGlyphs);
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint);
	void HandleLobbyColorSchemeChange(const struct FLinearColor& NewColorScheme, bool UseDefaultScheme);
	void HandleUnseenQuestsChanged(bool bHasUnseenQuests);
	void OnComplete_9036807A49B907A7A1B78EB727BAB97A(class UUserWidget* UserWidget);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnMatchmakingWidgetChanged();
	void OnPlaylistChanged(EFortLobbyType LobbyType, const class UFortPlaylistAthena* PlaylistData);
	void OnQuestsButtonVisibilityChanged(ESlateVisibility NewVisibility);
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void StartAthenaLobbyMusic();
	void TryToastAgainNextFrame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobby_C">();
	}
	static class UAthenaLobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobby_C>();
	}
};

}


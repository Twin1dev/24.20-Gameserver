﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRankEmblem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerRankEmblem.PlayerRankEmblem_C
// 0x0020 (0x02B0 - 0x0290)
class UPlayerRankEmblem_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Flash;                                             // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          BindToLocalPlayerByDefault;                        // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBannerInfo(const struct FPlayerBannerInfo& Banner);
	void SetBannerOwner(class AFortPlayerController* Target);
	void SetBannerSurroundLevel(int32 Level, bool Animate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerRankEmblem_C">();
	}
	static class UPlayerRankEmblem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerRankEmblem_C>();
	}
};

}


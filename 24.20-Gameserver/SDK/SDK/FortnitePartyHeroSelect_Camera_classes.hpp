﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortnitePartyHeroSelect_Camera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// 0x0020 (0x0A10 - 0x09F0)
class AFortnitePartyHeroSelect_Camera_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       CameraActor_0;                                     // 0x09F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          MouseDown;                                         // 0x0A00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A01[0x7];                                      // 0x0A01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CachedPawn;                                        // 0x0A08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void HandleMouseRelease();
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32 EntryPoint);
	void HandleMousePress();
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortnitePartyHeroSelect_Camera_C">();
	}
	static class AFortnitePartyHeroSelect_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortnitePartyHeroSelect_Camera_C>();
	}
};

}


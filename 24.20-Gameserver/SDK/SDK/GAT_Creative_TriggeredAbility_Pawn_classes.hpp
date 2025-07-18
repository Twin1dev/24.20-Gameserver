﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Creative_TriggeredAbility_Pawn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_Creative_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
// 0x0010 (0x0B60 - 0x0B50)
class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Creative_TriggeredAbility_Pawn_C; // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPawn*                              AbilityOwner;                                      // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void SetupPawnActorAbility(class AFortPawn** FortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Creative_TriggeredAbility_Pawn_C">();
	}
	static class UGAT_Creative_TriggeredAbility_Pawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Creative_TriggeredAbility_Pawn_C>();
	}
};

}


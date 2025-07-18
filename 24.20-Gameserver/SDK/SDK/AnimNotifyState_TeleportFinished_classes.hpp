﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_TeleportFinished

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_TeleportFinished_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_TeleportFinished_C">();
	}
	static class UAnimNotifyState_TeleportFinished_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_TeleportFinished_C>();
	}
};

}


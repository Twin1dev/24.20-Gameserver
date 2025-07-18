﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlaySoundWithCondition

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
// 0x0000 (0x0050 - 0x0050)
class UAnimNotify_PlaySoundWithCondition_C final : public UFortAnimNotify_PlaySoundConditional
{
public:
	bool ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlaySoundWithCondition_C">();
	}
	static class UAnimNotify_PlaySoundWithCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlaySoundWithCondition_C>();
	}
};

}


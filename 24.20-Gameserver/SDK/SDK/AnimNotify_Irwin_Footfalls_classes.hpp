﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_Irwin_Footfalls

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_Irwin_Footfalls_C final : public UAnimNotify
{
public:
	int32                                         FootfallsIndex;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          is_Running__;                                      // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          is_Sprinting__;                                    // 0x003D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_Irwin_Footfalls_C">();
	}
	static class UAnimNotify_Irwin_Footfalls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_Irwin_Footfalls_C>();
	}
};

}


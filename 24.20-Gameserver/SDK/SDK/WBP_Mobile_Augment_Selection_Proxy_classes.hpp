﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mobile_Augment_Selection_Proxy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C
// 0x0008 (0x0380 - 0x0378)
class UWBP_Mobile_Augment_Selection_Proxy_C final : public UFortMobileHUDElementProxy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mobile_Augment_Selection_Proxy_C">();
	}
	static class UWBP_Mobile_Augment_Selection_Proxy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mobile_Augment_Selection_Proxy_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CRD_ModalDialogRuntime

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// Class CRD_ModalDialogRuntime.ModalDialogVariant
// 0x0020 (0x03C8 - 0x03A8)
class UModalDialogVariant final : public UCommonActivatableWidget
{
public:
	class UWidgetAnimation*                       BoundAnim_Open;                                    // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                       BoundAnim_Response;                                // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMulticastInlineDelegate<void()>              OnResponseAnimationFinished;                       // 0x03B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

public:
	static bool ShouldUseModalDialogTemplateWidgets();

	void AttemptToPlayOpenAnimation();
	void AttemptToPlayResponseAnimation();
	void HandleResponseAnimationFinished();

	bool HasResponseAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModalDialogVariant">();
	}
	static class UModalDialogVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModalDialogVariant>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortniteUI

#include "Basic.hpp"

#include "VerseFortnite_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "VerseFortniteUI_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UIFramework_classes.hpp"
#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class VerseFortniteUI.VerseFortnitePlayspaceHUDController
// 0x0088 (0x00B0 - 0x0028)
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHUDElementVisibilityRepData           VisibilityData;                                    // 0x0038(0x0078)(Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortnitePlayspaceHUDController">();
	}
	static class UVerseFortnitePlayspaceHUDController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortnitePlayspaceHUDController>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIOverlaySlot
// 0x0008 (0x0060 - 0x0058)
class UVerseFortniteUIOverlaySlot final : public UOverlaySlot
{
public:
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIOverlaySlot">();
	}
	static class UVerseFortniteUIOverlaySlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIOverlaySlot>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIOverlay
// 0x0000 (0x0170 - 0x0170)
class UVerseFortniteUIOverlay final : public UOverlay
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIOverlay">();
	}
	static class UVerseFortniteUIOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIOverlay>();
	}
};

// Class VerseFortniteUI.VerseFortniteUINamedSlot
// 0x0010 (0x0180 - 0x0170)
class UVerseFortniteUINamedSlot final : public UNamedSlot
{
public:
	uint8                                         Pad_170[0x10];                                     // 0x0170(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUINamedSlot">();
	}
	static class UVerseFortniteUINamedSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUINamedSlot>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
// 0x0030 (0x03D8 - 0x03A8)
class UVerseFortniteUIActivableWidgetBase final : public UCommonActivatableWidget
{
public:
	class UVerseFortniteUINamedSlot*              MainSlot;                                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3B0[0x8];                                      // 0x03B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    MainMenuInputRowHandle;                            // 0x03B8(0x0010)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTagContainer>          HudToDeactivateOnInitialization;                   // 0x03C8(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIActivableWidgetBase">();
	}
	static class UVerseFortniteUIActivableWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIActivableWidgetBase>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIPresenter
// 0x0098 (0x00D0 - 0x0038)
class UVerseFortniteUIPresenter final : public UUIFrameworkGameViewportPresenter
{
public:
	TArray<struct FVerseFortniteUIPresenterElement> Pending;                                         // 0x0038(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FVerseFortniteUIPresenterElement> Created;                                         // 0x0048(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIOverlay*                PlayerGameViewport;                                // 0x0058(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIOverlay*                ContentGameViewport;                               // 0x0060(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerseFortniteUIActivableWidgetBase*    PopupContainer;                                    // 0x0068(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   WidgetForDynamicUI;                                // 0x0078(0x0028)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainForDynamicUI;                         // 0x00A0(0x0028)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIPresenter">();
	}
	static class UVerseFortniteUIPresenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIPresenter>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
// 0x0030 (0x0100 - 0x00D0)
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{
public:
	class FText                                   Text;                                              // 0x00D0(0x0018)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x18];                                      // 0x00E8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_Text();
	void ServerClick(class APlayerController* PlayerController);
	void SetText(const class FText& Text_0);

	class FText GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Base">();
	}
	static class UVerseFortniteUIFrameworkButton_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Base>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
// 0x0000 (0x0100 - 0x0100)
class UVerseFortniteUIFrameworkButton_Loud final : public UVerseFortniteUIFrameworkButton_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Loud">();
	}
	static class UVerseFortniteUIFrameworkButton_Loud* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Loud>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
// 0x0000 (0x0100 - 0x0100)
class UVerseFortniteUIFrameworkButton_Regular final : public UVerseFortniteUIFrameworkButton_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Regular">();
	}
	static class UVerseFortniteUIFrameworkButton_Regular* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Regular>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
// 0x0000 (0x0100 - 0x0100)
class UVerseFortniteUIFrameworkButton_Quiet final : public UVerseFortniteUIFrameworkButton_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkButton_Quiet">();
	}
	static class UVerseFortniteUIFrameworkButton_Quiet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkButton_Quiet>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkText_Base
// 0x0018 (0x0118 - 0x0100)
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{
public:
	uint8                                         Pad_100[0x18];                                     // 0x0100(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ExecuteServerTextCommitted(const class FText& InText, ETextCommit InCommitMethod);
	void ServerTextCommitted(class APlayerController* PlayerController, const class FText& NewText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkText_Base">();
	}
	static class UVerseFortniteUIFrameworkText_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkText_Base>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
// 0x0000 (0x0118 - 0x0118)
class UVerseFortniteUIFrameworkTextBlock final : public UUIFrameworkTextBlock
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkTextBlock">();
	}
	static class UVerseFortniteUIFrameworkTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkTextBlock>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableText
// 0x0000 (0x0118 - 0x0118)
class UVerseFortniteUIFrameworkEditableText final : public UVerseFortniteUIFrameworkText_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkEditableText">();
	}
	static class UVerseFortniteUIFrameworkEditableText* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkEditableText>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
// 0x0000 (0x0118 - 0x0118)
class UVerseFortniteUIFrameworkEditableTextBox final : public UVerseFortniteUIFrameworkText_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkEditableTextBox">();
	}
	static class UVerseFortniteUIFrameworkEditableTextBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkEditableTextBox>();
	}
};

// Class VerseFortniteUI.VerseFortniteUIFrameworkSlider
// 0x0038 (0x0108 - 0x00D0)
class UVerseFortniteUIFrameworkSlider final : public UUIFrameworkWidget
{
public:
	struct FVerseFortniteUIFrameworkSliderValue   Value;                                             // 0x00D0(0x0008)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	float                                         MinValue;                                          // 0x00D8(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MaxValue;                                          // 0x00DC(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         StepSize;                                          // 0x00E0(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E4[0x24];                                      // 0x00E4(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ExecuteServerValueChanged(float InNewValue, int32 InValueID);
	void HandleValueChanged(float NewValue);
	void OnRep_MaxValue();
	void OnRep_MinValue();
	void OnRep_StepSize();
	void OnRep_Value();
	void ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32 InValueID);
	void SetMaxValue(float InMaxValue);
	void SetMinValue(float InMinValue);
	void SetStepSize(float InMinValue);
	void SetValue(float InValue);

	float GetMaxValue() const;
	float GetMinValue() const;
	float GetStepSize() const;
	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteUIFrameworkSlider">();
	}
	static class UVerseFortniteUIFrameworkSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteUIFrameworkSlider>();
	}
};

}


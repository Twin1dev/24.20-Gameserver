﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UTooltipLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Create_Basic_Tooltip(class APlayerController* Owning_Player, const class FText& Body_Text, const class FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UClass* Header_Style, class UClass* Body_Style, class UObject* __WorldContext, class UUserWidget** Output);
	static void Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, const class FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value);
	static void Create_Custom_Tooltip(class APlayerController* Owning_Player, const class FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output);
	static void Create_Item_Tooltip(class APlayerController* Owning_Player, const class FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int32 OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value);
	static void CreateXPTooltip(class APlayerController* Owner, const class FText& Header, const class FText& CommanderXP, const class FText& BoostXP, const class FText& RestXP, const class FText& Body, class UObject* __WorldContext, class UCommonUserWidget** Out);
	static void Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, const class FText& Tooltip_Text, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TooltipLibrary_C">();
	}
	static class UTooltipLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltipLibrary_C>();
	}
};

}


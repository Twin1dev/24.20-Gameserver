﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialTagsFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class USocialTagsFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ClearLerpColorTimer(double ColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* __WorldContext);
	static void Get_Sidebar_Social_Tag_Category_Structure(const class FString& TagCategory, class UObject* __WorldContext, struct FSidebarSocialTagCategoryStructure* SidebarSocialTagCategoryStructure);
	static void InterpolateMaterialColor(class UMaterialInstanceDynamic* Material, class FName ColorParameterName, const struct FLinearColor& CurrentColor, const struct FLinearColor& TargetColor, double ColorLerpAlpha, class UObject* __WorldContext);
	static void InterpolateTagBorderColors(class UMaterialInstanceDynamic* TagBorderMaterial, class FName NameInnerColor, const struct FLinearColor& CurrentInnerColor, const struct FLinearColor& TargetInnerColor, class FName NameOuterColor, const struct FLinearColor& CurrentOuterColor, const struct FLinearColor& TargetOuterColor, double HoveredBorderColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* WorldContext, class UObject* __WorldContext);
	static void InterpolateTagBorderGradientColor(class UBorder* TagBorder, class FName TagInnerColorGradient_1, class FName TagInnerColorGradient_2, const struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, class UObject* __WorldContext);
	static void InterpolateTagBorderOuterStrokeColor(class UBorder* TagBorder, class FName TagOuterStrokeColor, const struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, const struct FLinearColor& TagOuterStrokeColorUnhovered, class UObject* __WorldContext);
	static void InterpolateTagContentColors(class UTextBlock* TagName, class UImage* CheckMark, const struct FLinearColor& CurrentTagContentColor, const struct FLinearColor& TargetTagContentColor, double HoveredTagContentLerpAlpha, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialTagsFunctionLibrary_C">();
	}
	static class USocialTagsFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialTagsFunctionLibrary_C>();
	}
};

}


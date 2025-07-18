﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarLfgState_Image

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarLfgState_Image.SidebarLfgState_Image_C
// 0x0050 (0x02B8 - 0x0268)
class USidebarLfgState_Image_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 LFG_Icon;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      LFG_Material;                                      // 0x0278(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                           LFG_Color;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               LFG_DynamicMaterial;                               // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SidebarLfgState_Image(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetColor(const struct FLinearColor& InColorAndOpacity);
	void SetMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgState_Image_C">();
	}
	static class USidebarLfgState_Image_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgState_Image_C>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DynamicAthenaHUD

#include "Basic.hpp"

#include "DynamicUI_classes.hpp"


namespace SDK
{

// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
// 0x0010 (0x02C8 - 0x02B8)
class ADynamicAthenaHUDDirector final : public ADynamicUIDirectorBase
{
public:
	class UDynamicUIScene*                        VehicleHUDScene;                                   // 0x02B8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                        CreativeQuickbarScene;                             // 0x02C0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped);
	void HandleEnteringVehicle();
	void HandleExitingVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicAthenaHUDDirector">();
	}
	static class ADynamicAthenaHUDDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADynamicAthenaHUDDirector>();
	}
};

}


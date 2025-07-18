﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoagieUI

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// Class HoagieUI.FortHoagieVehicleReticle
// 0x0008 (0x0440 - 0x0438)
class UFortHoagieVehicleReticle final : public UFortAthenaVehicleDashboardWidget
{
public:
	class AFortHoagieVehicle*                     OwningHoagieVehicle;                               // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void OnSetupComplete(bool bVehicleUsesFuelSystem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieVehicleReticle">();
	}
	static class UFortHoagieVehicleReticle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHoagieVehicleReticle>();
	}
};

}


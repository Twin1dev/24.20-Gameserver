﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicalRimlight

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PhysicalRimlight.PhysicalRimlight_C
// 0x00D8 (0x0360 - 0x0288)
class APhysicalRimlight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Right_Side_Rim_Light;                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             RightSideRim_Transform;                            // 0x02A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x0300(0x0010)(Edit, BlueprintVisible)
	double                                        Rim_Light_Physical_Intensity;                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RimlightDistanceFromCamera;                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RimlightOffsetFromCamera;                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   PlayerPawnAthenaRef;                               // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FString                                 l_cvarName;                                        // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialParameterCollection*           Material_params;                                   // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   Sunlight_Color_Param_name;                         // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Rimlight_CvarBoost;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Day_Phase_(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ExecuteUbergraph_PhysicalRimlight(int32 EntryPoint);
	void InitRim();
	void PhysicalRimlight_AutoGenFunc(const class FString& CVarName);
	void ReceiveBeginPlay();
	void RimlightAttemptValidation();
	void Set_Rimlight_Color_and_Intensity();
	void UpdateRimlight();
	void ValidateRimlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PhysicalRimlight_C">();
	}
	static class APhysicalRimlight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhysicalRimlight_C>();
	}
};

}


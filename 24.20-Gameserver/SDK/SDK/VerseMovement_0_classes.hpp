﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseMovement_0

#include "Basic.hpp"

#include "VerseNative_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseMovement_0_structs.hpp"
#include "VerseAssets_0_classes.hpp"
#include "VerseMovement_classes.hpp"


namespace SDK
{

// VerseClass VerseMovement.$SolarisSignatureFunctionOuter
// 0x0000 (0x0028 - 0x0028)
class VerseMovement_0::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseMovement.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseMovement_0::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseMovement_0::U_SolarisSignatureFunctionOuter>();
	}
};

// VerseClass VerseMovement.VerseMovement
// 0x0000 (0x0028 - 0x0028)
class UVerseMovement final : public UObject
{
public:
	static FOptionProperty_ _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	static struct FVerseMovement_move_config VerseMovement_move_config_Factory();
	static struct FVerseMovement_move_config_entry VerseMovement_move_config_entry_Factory();
	static struct FVerseMovement_move_input_trigger_params VerseMovement_move_input_trigger_params_Factory();
	static struct FVerseMovement_move_physics_trigger_params VerseMovement_move_physics_trigger_params_Factory();
	static struct FVerseMovement_move_response VerseMovement_move_response_Factory();
	static struct FVerseMovement_move_trace_trigger_params VerseMovement_move_trace_trigger_params_Factory();
	static struct FVerseMovement_move_trigger VerseMovement_move_trigger_Factory();

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseMovement">();
	}
	static class UVerseMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseMovement>();
	}
};

// VerseClass VerseMovement.VerseMovement_move_config_asset
// 0x0000 (0x00D8 - 0x00D8)
class UVerseMovement_move_config_asset final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseMovement_move_config_asset">();
	}
	static class UVerseMovement_move_config_asset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseMovement_move_config_asset>();
	}
};

// VerseClass VerseMovement.VerseMovement_movement_component
// 0x00A0 (0x0130 - 0x0090)
class UVerseMovement_movement_component final : public UVerseMovementComponentBase
{
public:
	FVerseFunctionProperty_                       __verse_0x7FF30FB8__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R; // 0x0090(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x9B2AB509__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R; // 0x00A0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0xDCFE6B31__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R; // 0x00B0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0xEBFA767D__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R; // 0x00C0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x6B688D48__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R; // 0x00D0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x9BAFC7E4__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R; // 0x00E0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x52278BB4__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R; // 0x00F0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x8AEC8FE0__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R; // 0x0100(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0xDB669E82__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R; // 0x0110(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x5E1AAB3A__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R; // 0x0120(0x0010)(InstancedReference, HasGetValueTypeHash)

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R(class UVerseMovement_move_config_asset* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R(const struct FVerseMovement_move_config& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseMovement_movement_component">();
	}
	static class UVerseMovement_movement_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseMovement_movement_component>();
	}
};

// VerseClass VerseMovement.VerseMovement_VerseMovementUtil
// 0x0010 (0x0038 - 0x0028)
class UVerseMovement_VerseMovementUtil final : public UObject
{
public:
	struct FVerseMovement_move_config             __verse_0x40F5E85A_CarConfig;                      // 0x0028(0x0010)(InstancedReference)

public:
	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseMovement_VerseMovementUtil">();
	}
	static class UVerseMovement_VerseMovementUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseMovement_VerseMovementUtil>();
	}
};

}


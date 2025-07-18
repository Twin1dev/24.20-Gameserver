﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseAIBase_0

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"


namespace SDK
{

// VerseEnum VerseAIBase.VerseAIBase_action_result
// NumValues: 0x0004
enum class EVerseAIBase_action_result : uint8
{
	Success                                  = 0,
	Canceled                                 = 1,
	Disallowed                               = 2,
	VerseAIBase_action_MAX                   = 3,
};

// VerseEnum VerseAIBase.VerseAIBase_fallible_action_result
// NumValues: 0x0005
enum class EVerseAIBase_fallible_action_result : uint8
{
	Success                                  = 0,
	Failure                                  = 1,
	Canceled                                 = 2,
	Disallowed                               = 3,
	VerseAIBase_fallible_action_MAX          = 4,
};

// VerseEnum VerseAIBase.VerseAIBase_fort_loot_type
// NumValues: 0x0005
enum class EVerseAIBase_fort_loot_type : uint8
{
	pickup                                   = 0,
	chest                                    = 1,
	supply_drop                              = 2,
	unknown                                  = 3,
	VerseAIBase_fort_loot_MAX                = 4,
};

// VerseEnum VerseAIBase.VerseAIBase_fort_obstacle_status
// NumValues: 0x0004
enum class EVerseAIBase_fort_obstacle_status : uint8
{
	incoming_obstacle                        = 0,
	blocked_by_obstacle                      = 1,
	trap_obstacle                            = 2,
	VerseAIBase_fort_obstacle_MAX            = 3,
};

// VerseEnum VerseAIBase.VerseAIBase_navigation_result
// NumValues: 0x0006
enum class EVerseAIBase_navigation_result : uint8
{
	Reached                                  = 0,
	PartiallyReached                         = 1,
	Canceled                                 = 2,
	Blocked                                  = 3,
	Unreachable                              = 4,
	VerseAIBase_navigation_MAX               = 5,
};

// VerseStruct VerseAIBase.tuple_L_R
// 0x0001 (0x0001 - 0x0000)
struct VerseAIBase_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;                               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lagent_Mfloat_Mfloat_R
// 0x0018 (0x0018 - 0x0000)
struct VerseAIBase_0::Ftuple_Lagent_Mfloat_Mfloat_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        __verse_0x932BF92E_Elem2;                          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lagent_Mlogic_R
// 0x0010 (0x0010 - 0x0000)
struct VerseAIBase_0::Ftuple_Lagent_Mlogic_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;                      // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (InstancedReference, NoDestructor, HasGetValueTypeHash))
};

// VerseStruct VerseAIBase.tuple_Lasset_M_Kchar_R
// 0x0018 (0x0018 - 0x0000)
struct VerseAIBase_0::Ftuple_Lasset_M_Kchar_R final
{
public:
	class UClass*                                 __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0010)(InstancedReference, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
// 0x0010 (0x0010 - 0x0000)
struct VerseAIBase_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class UObject*                                __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct VerseAIBase_0::Ftuple_L_R              __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0001)(InstancedReference, HasGetValueTypeHash)
	struct VerseAIBase_0::Ftuple_L_R              __verse_0x932BF92E_Elem2;                          // 0x0009(0x0001)(InstancedReference, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lfort__inventory__item__asset_Mint_R
// 0x0010 (0x0010 - 0x0000)
struct VerseAIBase_0::Ftuple_Lfort__inventory__item__asset_Mint_R final
{
public:
	class UVerseAIBase_fort_inventory_item_asset* __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                         __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.VerseAIBase_fort_item_descriptor
// 0x0018 (0x0018 - 0x0000)
struct FVerseAIBase_fort_item_descriptor final
{
public:
	class UVerseAIBase_fort_item_tag*             __verse_0x93BEB694_ItemType;                       // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// VerseStruct VerseAIBase.tuple_Lfort__item__descriptor_Mfort__item__tag_R
// 0x0020 (0x0020 - 0x0000)
struct VerseAIBase_0::Ftuple_Lfort__item__descriptor_Mfort__item__tag_R final
{
public:
	struct FVerseAIBase_fort_item_descriptor      __verse_0x18E3F084_Elem0;                          // 0x0000(0x0018)(InstancedReference, NoDestructor)
	class UVerseAIBase_fort_item_tag*             __verse_0x7D844C3C_Elem1;                          // 0x0018(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lgameplay__ability__asset_M_Kchar_R
// 0x0018 (0x0018 - 0x0000)
struct Ftuple_Lgameplay__ability__asset_M_Kchar_R final
{
public:
	class UClass*                                 __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0010)(InstancedReference, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// 0x0018 (0x0018 - 0x0000)
struct VerseAIBase_0::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R final
{
public:
	class UVerseAIBase_navigation_target*         __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0009)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                              __verse_0x932BF92E_Elem2;                          // 0x0011(0x0002)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.tuple_Lvector3_Mfloat_Mfloat_R
// 0x0028 (0x0028 - 0x0000)
struct VerseAIBase_0::Ftuple_Lvector3_Mfloat_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;                          // 0x0000(0x0018)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                        __verse_0x7D844C3C_Elem1;                          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        __verse_0x932BF92E_Elem2;                          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.VerseAIBase_fort_loot_info
// 0x0028 (0x0028 - 0x0000)
struct FVerseAIBase_fort_loot_info final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB0C27E0A_Location;                       // 0x0000(0x0018)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	EVerseAIBase_fort_loot_type                   __verse_0x72E298E9_Type;                           // 0x0018(0x0001)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerseEngine_Entity_entity*             __verse_0xC218B7D2_Loot;                           // 0x0020(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.VerseAIBase_fort_obstacle_info
// 0x0028 (0x0028 - 0x0000)
struct FVerseAIBase_fort_obstacle_info final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB0C27E0A_Location;                       // 0x0000(0x0018)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	EVerseAIBase_fort_obstacle_status             __verse_0xFA60180E_Status;                         // 0x0018(0x0001)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerseEngine_Entity_entity*             __verse_0x82A44C52_Obstacle;                       // 0x0020(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// VerseStruct VerseAIBase.VerseAIBase_fort_threat_info
// 0x0030 (0x0030 - 0x0000)
struct FVerseAIBase_fort_threat_info final
{
public:
	FOptionProperty_                              __verse_0x459049A1_Target;                         // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSpatialMath_vector3                   __verse_0x4A328DE2_LastKnownPosition;              // 0x0008(0x0018)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                         __verse_0xAC2B8860_HasLineOfSight : 1;             // 0x0020(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (InstancedReference, NoDestructor, HasGetValueTypeHash))
	uint8                                         BitPad_20_1 : 7;                                   // 0x0020(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         __verse_0xABBA0802_IsThreatening : 1;              // 0x0021(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (InstancedReference, NoDestructor, HasGetValueTypeHash))
	uint8                                         Pad_22[0xE];                                       // 0x0022(0x000E)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// VerseStruct VerseAIBase.VerseAIBase_fort_weapon_descriptor
// 0x0018 (0x0018 - 0x0000)
struct FVerseAIBase_fort_weapon_descriptor final
{
public:
	int64                                         __verse_0xB3780369_TotalAmmo;                      // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0xAEE6FE8C_LoadedAmmo;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        __verse_0x40EB5EBF_MaxRange;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


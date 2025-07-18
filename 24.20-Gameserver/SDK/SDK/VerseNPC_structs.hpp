﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseNPC

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"


namespace SDK
{

// VerseStruct VerseNPC.tuple_L_R
// 0x0001 (0x0001 - 0x0000)
struct VerseNPC::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;                               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseNPC.tuple_Lagent_Mfloat_Mfloat_R
// 0x0018 (0x0018 - 0x0000)
struct VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        __verse_0x932BF92E_Elem2;                          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseNPC.tuple_Lagent_Mlogic_R
// 0x0010 (0x0010 - 0x0000)
struct VerseNPC::Ftuple_Lagent_Mlogic_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;                      // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (InstancedReference, NoDestructor, HasGetValueTypeHash))
};

// VerseStruct VerseNPC.tuple_Lfort__inventory__item__asset_Mint_R
// 0x0010 (0x0010 - 0x0000)
struct VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R final
{
public:
	class UVerseAIBase_fort_inventory_item_asset* __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                         __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// VerseStruct VerseNPC.tuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// 0x0018 (0x0018 - 0x0000)
struct VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R final
{
public:
	class UVerseAIBase_navigation_target*         __verse_0x18E3F084_Elem0;                          // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;                          // 0x0008(0x0009)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                              __verse_0x932BF92E_Elem2;                          // 0x0011(0x0002)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// VerseStruct VerseNPC.tuple_Lvector3_Mfloat_Mfloat_R
// 0x0028 (0x0028 - 0x0000)
struct VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;                          // 0x0000(0x0018)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                        __verse_0x7D844C3C_Elem1;                          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        __verse_0x932BF92E_Elem2;                          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


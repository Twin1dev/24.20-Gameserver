﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleMapZoneNode

#include "Basic.hpp"

#include "BP_BattleMapBaseNode_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleMapZoneNode.BP_BattleMapZoneNode_C
// 0x0008 (0x03D0 - 0x03C8)
class ABP_BattleMapZoneNode_C final : public ABP_BattleMapBaseNode_C
{
public:
	class UStaticMeshComponent*                   StaticMesh_Inverted;                               // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapZoneNode_C">();
	}
	static class ABP_BattleMapZoneNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapZoneNode_C>();
	}
};

}


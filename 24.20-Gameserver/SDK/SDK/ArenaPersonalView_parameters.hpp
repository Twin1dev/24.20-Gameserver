﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaPersonalView

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ArenaPersonalView.ArenaPersonalView_C.Colorize
// 0x01D0 (0x01D0 - 0x0000)
struct ArenaPersonalView_C_Colorize final
{
public:
	struct FFortTournamentDisplayInfo             Color_Info;                                        // 0x0000(0x01D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ArenaPersonalView.ArenaPersonalView_C.ExecuteUbergraph_ArenaPersonalView
// 0x01E8 (0x01E8 - 0x0000)
struct ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_Color_Info;                     // 0x0008(0x01D0)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x01D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


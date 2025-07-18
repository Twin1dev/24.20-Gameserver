﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VKEditUI

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
// 0x0004 (0x0004 - 0x0000)
struct VKConnectionIndicator_HandleMemorySamplerProgressUpdated final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
// 0x0002 (0x0002 - 0x0000)
struct VKConnectionIndicator_OnMinigameStateChanged final
{
public:
	EFortMinigameState                            MinigameState;                                     // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMinigameState                            PreviousMinigameState;                             // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
// 0x0008 (0x0008 - 0x0000)
struct VKDebugMessagesBase_BP_OnGameStateInitialized final
{
public:
	class AFortGameState*                         GameState;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
// 0x0008 (0x0008 - 0x0000)
struct VKDebugMessagesBase_HandleGameStateInitialized final
{
public:
	class AFortGameState*                         GameState;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


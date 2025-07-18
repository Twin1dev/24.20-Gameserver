﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeLowMemoryFallbackRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem.OnPlaylistDataChanged
// 0x0030 (0x0030 - 0x0000)
struct CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged final
{
public:
	class AFortGameStateAthena*                   GameState;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UFortPlaylist*                    Playlist;                                          // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  PlaylistContextTags;                               // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}


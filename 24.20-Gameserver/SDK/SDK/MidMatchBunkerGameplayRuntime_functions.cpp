﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MidMatchBunkerGameplayRuntime

#include "Basic.hpp"

#include "MidMatchBunkerGameplayRuntime_classes.hpp"
#include "MidMatchBunkerGameplayRuntime_parameters.hpp"


namespace SDK
{

// Function MidMatchBunkerGameplayRuntime.FortAthenaMutator_MidMatchBunkerGameplay.OnPlaylistDataReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UFortPlaylist*              Playlist                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTagContainer&     PlaylistContextTags                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_MidMatchBunkerGameplay::OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_MidMatchBunkerGameplay", "OnPlaylistDataReady");

	Params::FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


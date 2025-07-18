﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite

#include "Basic.hpp"

#include "VerseFortnite_classes.hpp"
#include "VerseFortnite_parameters.hpp"


namespace SDK
{

// Function VerseFortnite.VerseFortniteBRTeamCollection.OnActiveTeamArrayBuilt
// (Final, Native, Private)

void UVerseFortniteBRTeamCollection::OnActiveTeamArrayBuilt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteBRTeamCollection", "OnActiveTeamArrayBuilt");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                           DestroyedMinigame                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteMinigameTeamCollection::OnMinigameDestroyed(class AActor* DestroyedMinigame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteMinigameTeamCollection", "OnMinigameDestroyed");

	Params::VerseFortniteMinigameTeamCollection_OnMinigameDestroyed Parms{};

	Parms.DestroyedMinigame = DestroyedMinigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameSetUp
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*                    InMinigame                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteMinigameTeamCollection::OnMinigameSetUp(class AFortMinigame* InMinigame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteMinigameTeamCollection", "OnMinigameSetUp");

	Params::VerseFortniteMinigameTeamCollection_OnMinigameSetUp Parms{};

	Parms.InMinigame = InMinigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite.VerseFortniteActorWrapper.OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                           DestroyedActor                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteActorWrapper::OnActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteActorWrapper", "OnActorDestroyed");

	Params::VerseFortniteActorWrapper_OnActorDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite.VerseFortniteCharacter.HandlePawnEliminated
// (Native, Protected)
// Parameters:
// class AFortPlayerPawnAthena*            EliminatedPawn                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteCharacter::HandlePawnEliminated(class AFortPlayerPawnAthena* EliminatedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteCharacter", "HandlePawnEliminated");

	Params::VerseFortniteCharacter_HandlePawnEliminated Parms{};

	Parms.EliminatedPawn = EliminatedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite.VerseFortniteCharacter.HandlePosessedPawnChanged
// (Final, Native, Private)
// Parameters:
// class APawn*                            OldPawn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                            NewPawn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteCharacter::HandlePosessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteCharacter", "HandlePosessedPawnChanged");

	Params::VerseFortniteCharacter_HandlePosessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


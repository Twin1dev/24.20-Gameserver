﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SupplyDropRadioRuntime

#include "Basic.hpp"

#include "SupplyDropRadioRuntime_classes.hpp"
#include "SupplyDropRadioRuntime_parameters.hpp"


namespace SDK
{

// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                           EndPlayActor                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EEndPlayReason                          Reason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABuildingGameplayActorSupplyDropRadio::HandleMoveIgnoredActorEndPlay(class AActor* EndPlayActor, EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "HandleMoveIgnoredActorEndPlay");

	Params::BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay Parms{};

	Parms.EndPlayActor = EndPlayActor;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
// (Event, Protected, BlueprintEvent)

void ABuildingGameplayActorSupplyDropRadio::OnRep_BalloonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_BalloonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
// (Event, Protected, BlueprintEvent)

void ABuildingGameplayActorSupplyDropRadio::OnRep_DistanceFromOriginalSpawnLocForBalloonOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_DistanceFromOriginalSpawnLocForBalloonOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
// (BlueprintAuthorityOnly, Event, Protected, BlueprintCallable, BlueprintEvent)

void ABuildingGameplayActorSupplyDropRadio::OpenSupplyDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OpenSupplyDrop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// const ESupplyDropRadioBalloonState      InBalloonState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABuildingGameplayActorSupplyDropRadio::SetBalloonState(const ESupplyDropRadioBalloonState InBalloonState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetBalloonState");

	Params::BuildingGameplayActorSupplyDropRadio_SetBalloonState Parms{};

	Parms.InBalloonState = InBalloonState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// const float                             InGravityMultiplier                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABuildingGameplayActorSupplyDropRadio::SetGravityMultiplier(const float InGravityMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetGravityMultiplier");

	Params::BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier Parms{};

	Parms.InGravityMultiplier = InGravityMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const bool                              bValidBlock                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FHitResult&                MovementHitResult                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABuildingGameplayActorSupplyDropRadio::UpdateGroundInfo(const bool bValidBlock, const struct FHitResult& MovementHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "UpdateGroundInfo");

	Params::BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo Parms{};

	Parms.bValidBlock = bValidBlock;
	Parms.MovementHitResult = std::move(MovementHitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESupplyDropRadioBalloonState            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ESupplyDropRadioBalloonState ABuildingGameplayActorSupplyDropRadio::GetBalloonState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetBalloonState");

	Params::BuildingGameplayActorSupplyDropRadio_GetBalloonState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ABuildingGameplayActorSupplyDropRadio::GetGravityZ() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetGravityZ");

	Params::BuildingGameplayActorSupplyDropRadio_GetGravityZ Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// const class AActor*                     InActor                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ABuildingGameplayActorSupplyDropRadio::GetHighestAttachParent(const class AActor* InActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetHighestAttachParent");

	Params::BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*                    ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* ABuildingGameplayActorSupplyDropRadio::GetRootCollisionComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetRootCollisionComponent");

	Params::BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ABuildingGameplayActorSupplyDropRadio::IsGrounded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsGrounded");

	Params::BuildingGameplayActorSupplyDropRadio_IsGrounded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ABuildingGameplayActorSupplyDropRadio::IsMoving() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsMoving");

	Params::BuildingGameplayActorSupplyDropRadio_IsMoving Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// const float                             DistanceSquared                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioAttachActorComponent::SetOwningActorNetCullDistance(const float DistanceSquared) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSupplyDropRadioAttachActorComponent", "SetOwningActorNetCullDistance");

	Params::FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance Parms{};

	Parms.DistanceSquared = DistanceSquared;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerGameplay*    PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bNewMoveAbortConversation                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioBlueprintLibrary::SetMoveShouldAbortConversation(class AFortPlayerControllerGameplay* PlayerController, const bool bNewMoveAbortConversation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortSupplyDropRadioBlueprintLibrary", "SetMoveShouldAbortConversation");

	Params::FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bNewMoveAbortConversation = bNewMoveAbortConversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerGameplay*    PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSupplyDropRadioBlueprintLibrary::StopCurrentConversation(class AFortPlayerControllerGameplay* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortSupplyDropRadioBlueprintLibrary", "StopCurrentConversation");

	Params::FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


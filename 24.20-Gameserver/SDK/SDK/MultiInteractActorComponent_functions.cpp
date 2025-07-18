﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MultiInteractActorComponent

#include "Basic.hpp"

#include "MultiInteractActorComponent_classes.hpp"
#include "MultiInteractActorComponent_parameters.hpp"


namespace SDK
{

// Function MultiInteractActorComponent.MultiInteractActorComponent_C.AddGCNL
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiInteractActorComponent_C::AddGCNL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "AddGCNL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteGCNFromTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*&                 PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag&                    InteractTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   PreviousInteractPlayerCount                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::ExecuteGCNFromTag(class AFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int32 PreviousInteractPlayerCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "ExecuteGCNFromTag");

	Params::MultiInteractActorComponent_C_ExecuteGCNFromTag Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.InteractTag = std::move(InteractTag);
	Parms.PreviousInteractPlayerCount = PreviousInteractPlayerCount;

	UObject::ProcessEvent(Func, &Parms);

	PlayerPawn = Parms.PlayerPawn;
	InteractTag = std::move(Parms.InteractTag);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteUbergraph_MultiInteractActorComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::ExecuteUbergraph_MultiInteractActorComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "ExecuteUbergraph_MultiInteractActorComponent");

	Params::MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UMultiInteractActorComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.RemoveGCNL
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiInteractActorComponent_C::RemoveGCNL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "RemoveGCNL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.SetRequiredDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewRequiredDuration                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::SetRequiredDuration(double NewRequiredDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "SetRequiredDuration");

	Params::MultiInteractActorComponent_C_SetRequiredDuration Parms{};

	Parms.NewRequiredDuration = NewRequiredDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustJoinedInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// const class AFortPlayerStateAthena*     JoinedPlayer                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::UpdateForPlayerJustJoinedInteraction(const class AFortPlayerStateAthena* JoinedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "UpdateForPlayerJustJoinedInteraction");

	Params::MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction Parms{};

	Parms.JoinedPlayer = JoinedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustLeftInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// const class AFortPlayerStateAthena*     LeftPlayer                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::UpdateForPlayerJustLeftInteraction(const class AFortPlayerStateAthena* LeftPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiInteractActorComponent_C", "UpdateForPlayerJustLeftInteraction");

	Params::MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction Parms{};

	Parms.LeftPlayer = LeftPlayer;

	UObject::ProcessEvent(Func, &Parms);
}

}


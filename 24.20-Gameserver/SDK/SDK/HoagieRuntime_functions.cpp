﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoagieRuntime

#include "Basic.hpp"

#include "HoagieRuntime_classes.hpp"
#include "HoagieRuntime_parameters.hpp"


namespace SDK
{

// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*       InEngine                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortLayeredAudioComponent*       InRotor                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieAudioController::CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieAudioController", "CacheAudioComponents");

	Params::FortHoagieAudioController_CacheAudioComponents Parms{};

	Parms.InEngine = InEngine;
	Parms.InRotor = InRotor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortHoagieVehicle*               InVehicle                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieAudioController::CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieAudioController", "CacheHoagieVehicle");

	Params::FortHoagieAudioController_CacheHoagieVehicle Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieAudioController.Update
// (Final, Native, Public, BlueprintCallable)

void AFortHoagieAudioController::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieAudioController", "Update");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// const struct FHitResult&                RotorHit                                               (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::MulticastRotorImpulse(const struct FHitResult& RotorHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "MulticastRotorImpulse");

	Params::FortHoagieVehicle_MulticastRotorImpulse Parms{};

	Parms.RotorHit = std::move(RotorHit);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnBoostStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   ImpactLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                      DamageInstigator                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bMainRotor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnCritRotor(float Damage, const struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnCritRotor");

	Params::FortHoagieVehicle_OnCritRotor Parms{};

	Parms.Damage = Damage;
	Parms.ImpactLocation = std::move(ImpactLocation);
	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.bMainRotor = bMainRotor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// const struct FVector&                   HitLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   NormalImpulse                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnImpactOtherHoagie(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnImpactOtherHoagie");

	Params::FortHoagieVehicle_OnImpactOtherHoagie Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.NormalImpulse = std::move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnImpactWhileCritical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnImpactWhileCritical");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
// (Final, Native, Protected)

void AFortHoagieVehicle::OnRefueledFromEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRefueledFromEmpty");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
// (Final, Native, Private)

void AFortHoagieVehicle::OnRep_ControlState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRep_ControlState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
// (Final, Native, Protected)

void AFortHoagieVehicle::OnRep_HoagieState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRep_HoagieState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Impact                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    bInner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamageDealt(const struct FHitResult& Impact, bool bInner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealt");

	Params::FortHoagieVehicle_OnRotorDamageDealt Parms{};

	Parms.Impact = std::move(Impact);
	Parms.bInner = bInner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Impact                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamageDealtInner(const struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtInner");

	Params::FortHoagieVehicle_OnRotorDamageDealtInner Parms{};

	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Impact                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamageDealtOuter(const struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamageDealtOuter");

	Params::FortHoagieVehicle_OnRotorDamageDealtOuter Parms{};

	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Impact                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnRotorDamagePlayer(const struct FHitResult& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorDamagePlayer");

	Params::FortHoagieVehicle_OnRotorDamagePlayer Parms{};

	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnRotorsStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnRotorsStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnStartupBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnStartupBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnStartupEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnStartupEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   RotorAngleDegrees                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::OnTickRotors(float RotorAngleDegrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "OnTickRotors");

	Params::FortHoagieVehicle_OnTickRotors Parms{};

	Parms.RotorAngleDegrees = RotorAngleDegrees;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
// (Final, Net, Native, Event, Private, NetServer)
// Parameters:
// const struct FReplicatedHeliControlState&InControlState                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "ServerUpdateControlState");

	Params::FortHoagieVehicle_ServerUpdateControlState Parms{};

	Parms.InControlState = std::move(InControlState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Degrees                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::SetMainRotorRotation(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "SetMainRotorRotation");

	Params::FortHoagieVehicle_SetMainRotorRotation Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::SetRotorWashActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "SetRotorWashActive");

	Params::FortHoagieVehicle_SetRotorWashActive Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Degrees                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::SetTailRotorRotation(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "SetTailRotorRotation");

	Params::FortHoagieVehicle_SetTailRotorRotation Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Pawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Duration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::ShowCooldownCue(class AFortPlayerPawn* Pawn, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "ShowCooldownCue");

	Params::FortHoagieVehicle_ShowCooldownCue Parms{};

	Parms.Pawn = Pawn;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortHoagieVehicle::UpdateDamageStateNative(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "UpdateDamageStateNative");

	Params::FortHoagieVehicle_UpdateDamageStateNative Parms{};

	Parms.Damage = Damage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void AFortHoagieVehicle::UpdateHoagieAnimBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "UpdateHoagieAnimBP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetAltitude() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetAltitude");

	Params::FortHoagieVehicle_GetAltitude Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetBoostCooldown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostCooldown");

	Params::FortHoagieVehicle_GetBoostCooldown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortHoagieVehicle::GetBoostDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDirection");

	Params::FortHoagieVehicle_GetBoostDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetBoostDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostDuration");

	Params::FortHoagieVehicle_GetBoostDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetBoostTimeLeft() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetBoostTimeLeft");

	Params::FortHoagieVehicle_GetBoostTimeLeft Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetDistanceToGround() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetDistanceToGround");

	Params::FortHoagieVehicle_GetDistanceToGround Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetForwardAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetForwardAlpha");

	Params::FortHoagieVehicle_GetForwardAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::GetIsEngineOn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetIsEngineOn");

	Params::FortHoagieVehicle_GetIsEngineOn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetLiftAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetLiftAlpha");

	Params::FortHoagieVehicle_GetLiftAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetMaxAltitude() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetMaxAltitude");

	Params::FortHoagieVehicle_GetMaxAltitude Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetMaxBoostCooldown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetMaxBoostCooldown");

	Params::FortHoagieVehicle_GetMaxBoostCooldown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetRotorAngleDegrees() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorAngleDegrees");

	Params::FortHoagieVehicle_GetRotorAngleDegrees Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortHoagieVehicle::GetRotorCenterPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorCenterPosition");

	Params::FortHoagieVehicle_GetRotorCenterPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetRotorSpeed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeed");

	Params::FortHoagieVehicle_GetRotorSpeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetRotorSpeedPercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetRotorSpeedPercent");

	Params::FortHoagieVehicle_GetRotorSpeedPercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetShutdownTimeLeft() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetShutdownTimeLeft");

	Params::FortHoagieVehicle_GetShutdownTimeLeft Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetSteerAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetSteerAlpha");

	Params::FortHoagieVehicle_GetSteerAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetStrafeAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetStrafeAlpha");

	Params::FortHoagieVehicle_GetStrafeAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    bWorldSpace                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortHoagieVehicle::GetThrustDirection(bool bWorldSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetThrustDirection");

	Params::FortHoagieVehicle_GetThrustDirection Parms{};

	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortHoagieVehicle::GetVerticalSpeedKmh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "GetVerticalSpeedKmh");

	Params::FortHoagieVehicle_GetVerticalSpeedKmh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::IsScrapingBottom() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "IsScrapingBottom");

	Params::FortHoagieVehicle_IsScrapingBottom Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::IsShuttingDown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "IsShuttingDown");

	Params::FortHoagieVehicle_IsShuttingDown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortHoagieVehicle::IsStartingUp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicle", "IsStartingUp");

	Params::FortHoagieVehicle_IsStartingUp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


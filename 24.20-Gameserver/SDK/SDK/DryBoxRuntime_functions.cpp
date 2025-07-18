﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DryBoxRuntime

#include "Basic.hpp"

#include "DryBoxRuntime_classes.hpp"
#include "DryBoxRuntime_parameters.hpp"


namespace SDK
{

// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.EndSwingingSession
// (Final, Native, Public, BlueprintCallable)

void UNyxGlassWeaponComponent_Swinging::EndSwingingSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "EndSwingingSession");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.IsAttacking
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNyxGlassWeaponComponent_Swinging::IsAttacking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "IsAttacking");

	Params::NyxGlassWeaponComponent_Swinging_IsAttacking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.Multicast_SetTargetingDataOnRemoteClients
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// const struct FNyxGlassTargetingData&    NewData                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNyxGlassWeaponComponent_Swinging::Multicast_SetTargetingDataOnRemoteClients(const struct FNyxGlassTargetingData& NewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "Multicast_SetTargetingDataOnRemoteClients");

	Params::NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients Parms{};

	Parms.NewData = std::move(NewData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnAttached
// (Final, Native, Public, BlueprintCallable)

void UNyxGlassWeaponComponent_Swinging::OnAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnAttached");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnAttackStart
// (Final, Native, Public, BlueprintCallable)

void UNyxGlassWeaponComponent_Swinging::OnAttackStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnAttackStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnBPWeaponFired
// (Final, Native, Public, BlueprintCallable)

void UNyxGlassWeaponComponent_Swinging::OnBPWeaponFired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnBPWeaponFired");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnDetached
// (Final, Native, Public, BlueprintCallable)

void UNyxGlassWeaponComponent_Swinging::OnDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnDetached");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnNyxGlassStateChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const ENyxGlassState                    OldState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const ENyxGlassState                    NewState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNyxGlassWeaponComponent_Swinging::OnNyxGlassStateChanged(const ENyxGlassState OldState, const ENyxGlassState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnNyxGlassStateChanged");

	Params::NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnServerTargetingDataReceived
// (Event, Public, BlueprintEvent)

void UNyxGlassWeaponComponent_Swinging::OnServerTargetingDataReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnServerTargetingDataReceived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnTargetingComplete
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FNyxGlassTargetingData&    TargetingData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNyxGlassWeaponComponent_Swinging::OnTargetingComplete(const struct FNyxGlassTargetingData& TargetingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnTargetingComplete");

	Params::NyxGlassWeaponComponent_Swinging_OnTargetingComplete Parms{};

	Parms.TargetingData = std::move(TargetingData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnWeaponFired
// (Final, Native, Private)

void UNyxGlassWeaponComponent_Swinging::OnWeaponFired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnWeaponFired");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnWeaponUnequip
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*                      Weapon                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNyxGlassWeaponComponent_Swinging::OnWeaponUnequip(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnWeaponUnequip");

	Params::NyxGlassWeaponComponent_Swinging_OnWeaponUnequip Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.Server_SetTargetingData
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// const struct FNyxGlassTargetingData&    NewData                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNyxGlassWeaponComponent_Swinging::Server_SetTargetingData(const struct FNyxGlassTargetingData& NewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "Server_SetTargetingData");

	Params::NyxGlassWeaponComponent_Swinging_Server_SetTargetingData Parms{};

	Parms.NewData = std::move(NewData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.ShouldUpdateTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNyxGlassWeaponComponent_Swinging::ShouldUpdateTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "ShouldUpdateTargeting");

	Params::NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.UpdateRopeVFX
// (Event, Public, BlueprintEvent)

void UNyxGlassWeaponComponent_Swinging::UpdateRopeVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "UpdateRopeVFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.CalcInitialAccelerationAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNyxGlassWeaponComponent_Swinging::CalcInitialAccelerationAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "CalcInitialAccelerationAlpha");

	Params::NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.GetNyxGlassSlashSubstate
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// ENyxGlassSlashSubstate                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ENyxGlassSlashSubstate UNyxGlassWeaponComponent_Swinging::GetNyxGlassSlashSubstate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "GetNyxGlassSlashSubstate");

	Params::NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.GetNyxGlassState
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// ENyxGlassState                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ENyxGlassState UNyxGlassWeaponComponent_Swinging::GetNyxGlassState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "GetNyxGlassState");

	Params::NyxGlassWeaponComponent_Swinging_GetNyxGlassState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DryBoxRuntime.NyxGlassWeaponComponent_Swinging.OnVelocityCalculated
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// const struct FNyxGlassVelocityMetadata& VelocityMetadata                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNyxGlassWeaponComponent_Swinging::OnVelocityCalculated(const struct FNyxGlassVelocityMetadata& VelocityMetadata) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnVelocityCalculated");

	Params::NyxGlassWeaponComponent_Swinging_OnVelocityCalculated Parms{};

	Parms.VelocityMetadata = std::move(VelocityMetadata);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DryBoxRuntime.NyxGlassFuelAttributeSet.OnRep_Fuel
// (Final, Native, Private, HasOutParams)
// Parameters:
// const struct FFortGameplayAttributeData&OldValue                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNyxGlassFuelAttributeSet::OnRep_Fuel(const struct FFortGameplayAttributeData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassFuelAttributeSet", "OnRep_Fuel");

	Params::NyxGlassFuelAttributeSet_OnRep_Fuel Parms{};

	Parms.OldValue = std::move(OldValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DryBoxRuntime.NyxGlassFuelAttributeSet.OnRep_LocalFuel
// (Final, Native, Private, HasOutParams)
// Parameters:
// const struct FFortGameplayAttributeData&OldValue                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNyxGlassFuelAttributeSet::OnRep_LocalFuel(const struct FFortGameplayAttributeData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassFuelAttributeSet", "OnRep_LocalFuel");

	Params::NyxGlassFuelAttributeSet_OnRep_LocalFuel Parms{};

	Parms.OldValue = std::move(OldValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


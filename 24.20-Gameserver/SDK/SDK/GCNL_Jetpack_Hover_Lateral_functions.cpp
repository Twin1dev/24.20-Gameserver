﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Jetpack_Hover_Lateral

#include "Basic.hpp"

#include "GCNL_Jetpack_Hover_Lateral_classes.hpp"
#include "GCNL_Jetpack_Hover_Lateral_parameters.hpp"


namespace SDK
{

// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Jetpack_Hover_Lateral_C::ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral");

	Params::GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Jetpack_Hover_Lateral_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "K2_HandleGameplayCue");

	Params::GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCNL_Jetpack_Hover_Lateral_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "OnActive");

	Params::GCNL_Jetpack_Hover_Lateral_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCNL_Jetpack_Hover_Lateral_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "OnRemove");

	Params::GCNL_Jetpack_Hover_Lateral_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGCNL_Jetpack_Hover_Lateral_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ResetFX
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Jetpack_Hover_Lateral_C::ResetFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "ResetFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.SetJetpackAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Jetpack_Hover_Lateral_C::SetJetpackAudioEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "SetJetpackAudioEnabled");

	Params::GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.TryToPlayGroundEffects
// (Event, Protected, BlueprintEvent)

void AGCNL_Jetpack_Hover_Lateral_C::TryToPlayGroundEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "TryToPlayGroundEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}


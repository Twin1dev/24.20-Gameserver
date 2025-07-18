﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StateTreeModule

#include "Basic.hpp"

#include "StateTreeModule_classes.hpp"
#include "StateTreeModule_parameters.hpp"


namespace SDK
{

// Function StateTreeModule.StateTreeNodeBlueprintBase.RequestTransition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FStateTreeStateLink&       TargetState                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// const EStateTreeTransitionPriority      Priority                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeNodeBlueprintBase::RequestTransition(const struct FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeNodeBlueprintBase", "RequestTransition");

	Params::StateTreeNodeBlueprintBase_RequestTransition Parms{};

	Parms.TargetState = std::move(TargetState);
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FStateTreeEvent&           Event                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UStateTreeNodeBlueprintBase::SendEvent(const struct FStateTreeEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeNodeBlueprintBase", "SendEvent");

	Params::StateTreeNodeBlueprintBase_SendEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStateTreeConditionBlueprintBase::ReceiveTestCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeConditionBlueprintBase", "ReceiveTestCondition");

	Params::StateTreeConditionBlueprintBase_ReceiveTestCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// const float                             DeltaTime                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeEvaluatorBlueprintBase::ReceiveTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTick");

	Params::StateTreeEvaluatorBlueprintBase_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart
// (Event, Public, BlueprintEvent)

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop
// (Event, Public, BlueprintEvent)

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&TRANSITION                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// EStateTreeRunStatus                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveEnterState(const struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveEnterState");

	Params::StateTreeTaskBlueprintBase_ReceiveEnterState Parms{};

	Parms.TRANSITION = std::move(TRANSITION);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&TRANSITION                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveExitState(const struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveExitState");

	Params::StateTreeTaskBlueprintBase_ReceiveExitState Parms{};

	Parms.TRANSITION = std::move(TRANSITION);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// const EStateTreeRunStatus               CompletionStatus                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FStateTreeActiveStates&    CompletedActiveStates                                  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveStateCompleted");

	Params::StateTreeTaskBlueprintBase_ReceiveStateCompleted Parms{};

	Parms.CompletionStatus = CompletionStatus;
	Parms.CompletedActiveStates = std::move(CompletedActiveStates);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// const float                             DeltaTime                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EStateTreeRunStatus                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveTick");

	Params::StateTreeTaskBlueprintBase_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


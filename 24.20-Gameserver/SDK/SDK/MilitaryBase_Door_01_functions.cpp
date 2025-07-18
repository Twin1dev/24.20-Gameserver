﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MilitaryBase_Door_01

#include "Basic.hpp"

#include "MilitaryBase_Door_01_classes.hpp"
#include "MilitaryBase_Door_01_parameters.hpp"


namespace SDK
{

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMilitaryBase_Door_01_C::BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMilitaryBase_Door_01_C::BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      ControllerInstigator                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AMilitaryBase_Door_01_C::Close(class AController* ControllerInstigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "Close");

	Params::MilitaryBase_Door_01_C_Close Parms{};

	Parms.ControllerInstigator = ControllerInstigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor
// (BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::CloseDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "CloseDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMilitaryBase_Door_01_C::ExecuteUbergraph_MilitaryBase_Door_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "ExecuteUbergraph_MilitaryBase_Door_01");

	Params::MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*>      ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UPrimitiveComponent*> AMilitaryBase_Door_01_C::GetComponentToLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "GetComponentToLock");

	Params::MilitaryBase_Door_01_C_GetComponentToLock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID
// (Public, BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::GetDoorMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "GetDoorMID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked
// (Event, Public, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "OnLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen
// (BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnRep_DoorOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "OnRep_DoorOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked
// (Event, Public, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnUnLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "OnUnLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      ControllerInstigator                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bRequestFastOpen                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMilitaryBase_Door_01_C::Open(class AController* ControllerInstigator, bool bRequestFastOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "Open");

	Params::MilitaryBase_Door_01_C_Open Parms{};

	Parms.ControllerInstigator = ControllerInstigator;
	Parms.bRequestFastOpen = bRequestFastOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor
// (BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::OpenDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "OpenDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AMilitaryBase_Door_01_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AMilitaryBase_Door_01_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AMilitaryBase_Door_01_C::IsOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryBase_Door_01_C", "IsOpen");

	Params::MilitaryBase_Door_01_C_IsOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


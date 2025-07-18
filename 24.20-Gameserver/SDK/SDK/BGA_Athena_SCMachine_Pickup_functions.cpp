﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_SCMachine_Pickup

#include "Basic.hpp"

#include "BGA_Athena_SCMachine_Pickup_classes.hpp"
#include "BGA_Athena_SCMachine_Pickup_parameters.hpp"


namespace SDK
{

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const EInteractionBeingAttempted        InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_Pickup_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BlueprintOnInteract");

	Params::BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_Pickup_C::BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature");

	Params::BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_SCMachine_Pickup_C::BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::CollectPickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "CollectPickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DelayDestroyPickup
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::DelayDestroyPickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "DelayDestroyPickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::DestroyPickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "DestroyPickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_SCMachine_Pickup_C::ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "ExecuteUbergraph_BGA_Athena_SCMachine_Pickup");

	Params::BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::HideAndKillPickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "HideAndKillPickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_SCMachine_Pickup_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "OnDeathServer");

	Params::BGA_Athena_SCMachine_Pickup_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::OnDestroyPickup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "OnDestroyPickup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::OnRep_HideAndKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "OnRep_HideAndKill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::OnRep_UnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "OnRep_UnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_SCMachine_Pickup_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "ShouldDie");

	Params::BGA_Athena_SCMachine_Pickup_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::SpawnSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "SpawnSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const EInteractionBeingAttempted        InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const ETInteractionType                 InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_SCMachine_Pickup_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BlueprintCanInteract");

	Params::BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const EInteractionBeingAttempted        InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABGA_Athena_SCMachine_Pickup_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BlueprintGetInteractionString");

	Params::BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float*                                  OutInteractionTime                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const EInteractionBeingAttempted        InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_SCMachine_Pickup_C::BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BlueprintGetInteractionTime");

	Params::BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = Parms.OutInteractionTime;

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BuildDataRegistryResolverScope
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class FName>*                    InOutResolverScopes                                    (Parm, OutParm)
// int32*                                  InOutPriority                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_SCMachine_Pickup_C::BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "BuildDataRegistryResolverScope");

	Params::BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InOutResolverScopes != nullptr)
		*InOutResolverScopes = std::move(Parms.InOutResolverScopes);

	if (InOutPriority != nullptr)
		*InOutPriority = Parms.InOutPriority;

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CanHandleCleanupEvents
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_SCMachine_Pickup_C::CanHandleCleanupEvents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "CanHandleCleanupEvents");

	Params::BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.GetCacheContextOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class UObject*                    ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

const class UObject* ABGA_Athena_SCMachine_Pickup_C::GetCacheContextOverride() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_SCMachine_Pickup_C", "GetCacheContextOverride");

	Params::BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


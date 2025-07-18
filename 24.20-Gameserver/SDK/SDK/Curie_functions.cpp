﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Curie

#include "Basic.hpp"

#include "Curie_classes.hpp"
#include "Curie_parameters.hpp"


namespace SDK
{

// Function Curie.CurieInterface.OnCurieContainerAcquired_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieContainerAcquired_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieContainerAcquired_BP");

	Params::CurieInterface_OnCurieContainerAcquired_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieContainerReleased_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieContainerReleased_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieContainerReleased_BP");

	Params::CurieInterface_OnCurieContainerReleased_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieContainerReparented_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieContainerReparented_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieContainerReparented_BP");

	Params::CurieInterface_OnCurieContainerReparented_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieElementAttached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              ElementTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieElementAttached_BP");

	Params::CurieInterface_OnCurieElementAttached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieElementDetached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              ElementTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieElementDetached_BP");

	Params::CurieInterface_OnCurieElementDetached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieElementInteract_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              ElementTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCurieInteractParamsHandle&InteractParamsHandle                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieElementInteract_BP");

	Params::CurieInterface_OnCurieElementInteract_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);
	Parms.InteractParamsHandle = std::move(InteractParamsHandle);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              ElementTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCurieInteractParamsHandle&InteractParamsHandle                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieElementInteractBegun_BP");

	Params::CurieInterface_OnCurieElementInteractBegun_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);
	Parms.InteractParamsHandle = std::move(InteractParamsHandle);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              ElementTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCurieInteractParamsHandle&InteractParamsHandle                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieElementInteractEnded_BP");

	Params::CurieInterface_OnCurieElementInteractEnded_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.ElementTag = std::move(ElementTag);
	Parms.InteractParamsHandle = std::move(InteractParamsHandle);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieStateAttached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              StateTag                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieStateAttached_BP");

	Params::CurieInterface_OnCurieStateAttached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.StateTag = std::move(StateTag);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieInterface.OnCurieStateDetached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FCurieContainerHandle&     CurieContainerHandle                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              StateTag                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("CurieInterface", "OnCurieStateDetached_BP");

	Params::CurieInterface_OnCurieStateDetached_BP Parms{};

	Parms.CurieContainerHandle = std::move(CurieContainerHandle);
	Parms.StateTag = std::move(StateTag);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Curie.CurieManager.BindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementAttached");

	Params::CurieManager_BindDelegateForCurieElementAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementBeginInteract");

	Params::CurieManager_BindDelegateForCurieElementBeginInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.BindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementDetached");

	Params::CurieManager_BindDelegateForCurieElementDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementEndInteract");

	Params::CurieManager_BindDelegateForCurieElementEndInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.BindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementInteract");

	Params::CurieManager_BindDelegateForCurieElementInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.BindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieStateAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateAttached");

	Params::CurieManager_BindDelegateForCurieStateAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.BindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieStateDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateDetached");

	Params::CurieManager_BindDelegateForCurieStateDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.HandleContainerOwnerDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                           OwnerActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::HandleContainerOwnerDestroyed(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "HandleContainerOwnerDestroyed");

	Params::CurieManager_HandleContainerOwnerDestroyed Parms{};

	Parms.OwnerActor = OwnerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementAttached");

	Params::CurieManager_UnbindDelegateForCurieElementAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementBeginInteract");

	Params::CurieManager_UnbindDelegateForCurieElementBeginInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementDetached");

	Params::CurieManager_UnbindDelegateForCurieElementDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementEndInteract");

	Params::CurieManager_UnbindDelegateForCurieElementEndInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementInteract");

	Params::CurieManager_UnbindDelegateForCurieElementInteract Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateAttached");

	Params::CurieManager_UnbindDelegateForCurieStateAttached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          CurieOwner                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>&Delegate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateDetached");

	Params::CurieManager_UnbindDelegateForCurieStateDetached Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


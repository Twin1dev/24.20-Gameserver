﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VotingFramework

#include "Basic.hpp"

#include "VotingFramework_classes.hpp"
#include "VotingFramework_parameters.hpp"


namespace SDK
{

// Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// const struct FUniqueNetIdRepl&          UserNetId                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteSelectionId                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::OnVoteCasted(const struct FUniqueNetIdRepl& UserNetId, const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "OnVoteCasted");

	Params::VoteBroadcasterComponent_OnVoteCasted Parms{};

	Parms.UserNetId = std::move(UserNetId);
	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteSelectionId = std::move(VoteSelectionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             VoteId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             VoteSelectionId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   VoteDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::ServerSubmitVotesAggregated(class FName VoteSessionId, class FName VoteId, class FName VoteSelectionId, int32 VoteDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "ServerSubmitVotesAggregated");

	Params::VoteBroadcasterComponent_ServerSubmitVotesAggregated Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteSelectionId = VoteSelectionId;
	Parms.VoteDelta = VoteDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             VoteId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             WinningVoteSelectionId                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteEnd(class FName VoteSessionId, class FName VoteId, class FName WinningVoteSelectionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteEnd");

	Params::VoteBroadcasterComponent_VoteEnd Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.WinningVoteSelectionId = WinningVoteSelectionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSessionComplete(class FName VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionComplete");

	Params::VoteBroadcasterComponent_VoteSessionComplete Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartingVoteId                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteSessionNetworkType                 NetworkType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSessionSetup(class FName VoteSessionId, class FName StartingVoteId, EVoteSessionNetworkType NetworkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionSetup");

	Params::VoteBroadcasterComponent_VoteSessionSetup Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.StartingVoteId = StartingVoteId;
	Parms.NetworkType = NetworkType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSessionShutdown(class FName VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionShutdown");

	Params::VoteBroadcasterComponent_VoteSessionShutdown Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSetup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             VoteId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteSetup(class FName VoteSessionId, class FName VoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSetup");

	Params::VoteBroadcasterComponent_VoteSetup Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             VoteSessionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             VoteId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteBroadcasterComponent::VoteStart(class FName VoteSessionId, class FName VoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteStart");

	Params::VoteBroadcasterComponent_VoteStart Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteChange
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteSelectionId                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ServerVoteTotal                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   AllServersVoteTotal                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteChange(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteChange");

	Params::VoteListenerComponent_OnVoteChange Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteSelectionId = std::move(VoteSelectionId);
	Parms.ServerVoteTotal = ServerVoteTotal;
	Parms.AllServersVoteTotal = AllServersVoteTotal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteEnd
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              WinningVoteSelectionId                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteState                              VoteState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteEnd(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& WinningVoteSelectionId, EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteEnd");

	Params::VoteListenerComponent_OnVoteEnd Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.WinningVoteSelectionId = std::move(WinningVoteSelectionId);
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionComplete(const struct FGameplayTag& VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionComplete");

	Params::VoteListenerComponent_OnVoteSessionComplete Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              StartingVoteId                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteSessionNetworkType                 NetworkType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteSessionState                       SessionState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionSetup");

	Params::VoteListenerComponent_OnVoteSessionSetup Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.StartingVoteId = std::move(StartingVoteId);
	Parms.NetworkType = NetworkType;
	Parms.SessionState = SessionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionShutdown(const struct FGameplayTag& VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionShutdown");

	Params::VoteListenerComponent_OnVoteSessionShutdown Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              StartingVoteId                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteSessionState                       SessionState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSessionVoting(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionState SessionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionVoting");

	Params::VoteListenerComponent_OnVoteSessionVoting Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.StartingVoteId = std::move(StartingVoteId);
	Parms.SessionState = SessionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSetup
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteState                              VoteState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSetup");

	Params::VoteListenerComponent_OnVoteSetup Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteListenerComponent.OnVoteStart
// (Native, Protected, HasOutParams)
// Parameters:
// const struct FGameplayTag&              VoteSessionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EVoteState                              VoteState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteListenerComponent::OnVoteStart(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteStart");

	Params::VoteListenerComponent_OnVoteStart Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class APlayerState*               InPlayerState                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteResponderComponent::CastDefaultVoteSelection(const class APlayerState* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "CastDefaultVoteSelection");

	Params::VoteResponderComponent_CastDefaultVoteSelection Parms{};

	Parms.InPlayerState = InPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteResponderComponent.CastManualVoteSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const class APlayerState*               InPlayerState                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              VoteSelection                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteResponderComponent::CastManualVoteSelection(const class APlayerState* InPlayerState, const struct FGameplayTag& VoteSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "CastManualVoteSelection");

	Params::VoteResponderComponent_CastManualVoteSelection Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.VoteSelection = std::move(VoteSelection);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class APlayerState*               InPlayerState                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const int32                             SelectionIndex                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoteResponderComponent::CastManualVoteSelectionAtIndex(const class APlayerState* InPlayerState, const int32 SelectionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "CastManualVoteSelectionAtIndex");

	Params::VoteResponderComponent_CastManualVoteSelectionAtIndex Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.SelectionIndex = SelectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// const struct FUniqueNetIdRepl&          InUserId                                               (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FCastedVote&               CastedVote                                             (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVoteResponderComponent::ServerCastVoteSelection(const struct FUniqueNetIdRepl& InUserId, const struct FCastedVote& CastedVote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "ServerCastVoteSelection");

	Params::VoteResponderComponent_ServerCastVoteSelection Parms{};

	Parms.InUserId = std::move(InUserId);
	Parms.CastedVote = std::move(CastedVote);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


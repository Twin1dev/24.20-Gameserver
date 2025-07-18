﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayMessages

#include "Basic.hpp"

#include "GameplayMessages_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver
// 0x0030 (0x0030 - 0x0000)
struct AsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventMessageTag                       Channel;                                           // 0x0008(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          PayloadType;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayMessageMatchType                     MatchType;                                         // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ActorContext;                                      // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncAction_RegisterGameplayMessageReceiver* ReturnValue;                                 // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload
// 0x0008 (0x0008 - 0x0000)
struct AsyncAction_RegisterGameplayMessageReceiver_GetPayload final
{
public:
	int32                                         OutPayload;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayMessages.GameplayMessageReplicator.Multicast_ServerMessageTriggered
// 0x0018 (0x0018 - 0x0000)
struct GameplayMessageReplicator_Multicast_ServerMessageTriggered final
{
public:
	struct FEventMessageTag                       Channel;                                           // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReplicatedMessage                     MessageData;                                       // 0x0008(0x0010)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayMessages.GameplayMessageRouter.ClearSavedMessage
// 0x0004 (0x0004 - 0x0000)
struct GameplayMessageRouter_ClearSavedMessage final
{
public:
	struct FEventMessageTag                       Channel;                                           // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage
// 0x0018 (0x0018 - 0x0000)
struct GameplayMessageRouter_K2_BroadcastMessage final
{
public:
	struct FEventMessageTag                       Channel;                                           // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         message;                                           // 0x0004(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSaveToChannel;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ActorContext;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayMessages.GameplayMessageRouter.HasValidSavedMessage
// 0x0008 (0x0008 - 0x0000)
struct GameplayMessageRouter_HasValidSavedMessage final
{
public:
	struct FEventMessageTag                       Channel;                                           // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayMessages.BlueprintEventMessageTagLibrary.GetEventMessageTagFromGameplayTag
// 0x0008 (0x0008 - 0x0000)
struct BlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag final
{
public:
	struct FGameplayTag                           InTag;                                             // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventMessageTag                       ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


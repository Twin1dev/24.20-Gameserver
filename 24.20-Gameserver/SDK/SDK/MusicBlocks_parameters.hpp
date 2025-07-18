﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MusicBlocks

#include "Basic.hpp"

#include "MusicBlocks_structs.hpp"


namespace SDK::Params
{

// Function MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor
// 0x0020 (0x0020 - 0x0000)
struct MusicSequencerHitComponent_RegisterMusicSequencerActor final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IFortMusicSequencerInterface> Actor;                                      // 0x0008(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit
// 0x0028 (0x0028 - 0x0000)
struct MusicSequencerHitComponent_ReplicateMusicSequencerHit final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IFortMusicSequencerInterface> HitInterface;                               // 0x0008(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class AController*                      Instigator;                                        // 0x0018(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor
// 0x0018 (0x0018 - 0x0000)
struct MusicSequencerHitComponent_AddMusicSequencerActor final
{
public:
	TScriptInterface<class IFortMusicSequencerInterface> HitInterface;                               // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent
// 0x0020 (0x0020 - 0x0000)
struct MusicSequencerHitComponent_AddSequenceHitEvent final
{
public:
	TScriptInterface<class IFortMusicSequencerInterface> HitInterface;                               // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class AController*                      Instigator;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired
// 0x0008 (0x0008 - 0x0000)
struct MusicSequencerHitComponent_OnSequenceHitEventExpired final
{
public:
	struct FMusicSequencerHitHandle               ExpiredHandle;                                     // 0x0000(0x0008)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent
// 0x0068 (0x0068 - 0x0000)
struct MusicSequencerHitComponent_ProcessSequenceHitEvent final
{
public:
	struct FMusicSequencerHitEntry                Event;                                             // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent
// 0x0008 (0x0008 - 0x0000)
struct MusicSequencerHitActor_GetMusicSequencerHitComponent final
{
public:
	class UMusicSequencerHitComponent*            ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor
// 0x0008 (0x0008 - 0x0000)
struct MusicSequencerHitAdderComponent_GetMusicSequencerHitActor final
{
public:
	class AMusicSequencerHitActor*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


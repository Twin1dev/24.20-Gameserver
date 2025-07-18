﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AscenderCodeRuntime

#include "Basic.hpp"


namespace SDK::Params
{

// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_BP_HandlePlayerStartedUsingHandle final
{
public:
	class AFortPlayerPawn*                        Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle final
{
public:
	class AFortPlayerPawn*                        Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_HandleFloorActorDestroyed final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_HandlePawnUsingHandleDied final
{
public:
	class AFortPawn*                              DeadPawn;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.SetupAscender
// 0x0002 (0x0002 - 0x0000)
struct FortAscenderZipline_SetupAscender final
{
public:
	bool                                          bFromConstruction;                                 // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromReplication;                                  // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
// 0x0010 (0x0010 - 0x0000)
struct FortAscenderZipline_ApplyStructureDamage final
{
public:
	class ABuildingSMActor*                       BuildingActor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageSource;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_GetHandleComponent final
{
public:
	class UPrimitiveComponent*                    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
// 0x0018 (0x0018 - 0x0000)
struct FortAscenderZipline_GetInteractComponentOverride final
{
public:
	class AFortPlayerPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    InteractComponent;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_GetPawnUsingHandle final
{
public:
	class AFortPlayerPawn*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
// 0x0008 (0x0008 - 0x0000)
struct FortAscenderZipline_GetTopComponent final
{
public:
	class UPrimitiveComponent*                    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


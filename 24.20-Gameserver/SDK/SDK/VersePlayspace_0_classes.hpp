﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VersePlayspace_0

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "VerseNative_0_classes.hpp"
#include "VersePlayspace_0_structs.hpp"
#include "EntityCore_classes.hpp"


namespace SDK
{

// VerseClass VersePlayspace.$SolarisSignatureFunctionOuter
// 0x0000 (0x0028 - 0x0028)
class VersePlayspace_0::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VersePlayspace.$SolarisSignatureFunctionOuter", true>();
	}
	static class VersePlayspace_0::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VersePlayspace_0::U_SolarisSignatureFunctionOuter>();
	}
};

// VerseClass VersePlayspace.Playspace_playspace_component
// 0x00D8 (0x0138 - 0x0060)
class UPlayspace_playspace_component : public UEntityComponent
{
public:
	FVerseFunctionProperty_                       __verse_0xC8D21C45__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R; // 0x0060(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x68A1B3A5__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R; // 0x0070(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x112880C6___WaitForSetupComplete;         // 0x0080(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x579A67A4___WaitForMatchBegin;            // 0x0090(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0xB30FF5AF___WaitForMatchEnd;              // 0x00A0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0xF324C2B5___WaitForPlayerAdded;           // 0x00B0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x74B0F4F3___WaitForPlayerRemoved;         // 0x00C0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0x4908ACA9__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R; // 0x00D0(0x0010)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                       __verse_0xAAFD1B07__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R; // 0x00E0(0x0010)(InstancedReference, HasGetValueTypeHash)
	uint8                                         Pad_F0[0x48];                                      // 0x00F0(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UConcurrency_task* __WaitForMatchBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VersePlayspace_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForMatchEnd(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VersePlayspace_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForPlayerAdded(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VersePlayspace_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForPlayerRemoved(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VersePlayspace_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForSetupComplete(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VersePlayspace_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R(EPlayspace_PlayerType __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player_component*> _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R(EPlayspace_PlayerType __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Playspace_playspace_component">();
	}
	static class UPlayspace_playspace_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspace_playspace_component>();
	}
};

// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete
// 0x0010 (0x0158 - 0x0148)
class Utask_Playspace_playspace_component___WaitForSetupComplete final : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*         _Self;                                             // 0x0148(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct VersePlayspace_0::Ftuple_L_R           __verse_0xB2CDDD72_Argument;                       // 0x0150(0x0001)(Parm, HasGetValueTypeHash)

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Playspace_playspace_component$__WaitForSetupComplete">();
	}
	static class Utask_Playspace_playspace_component___WaitForSetupComplete* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Playspace_playspace_component___WaitForSetupComplete>();
	}
};

// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin
// 0x0010 (0x0158 - 0x0148)
class Utask_Playspace_playspace_component___WaitForMatchBegin final : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*         _Self;                                             // 0x0148(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct VersePlayspace_0::Ftuple_L_R           __verse_0xB2CDDD72_Argument;                       // 0x0150(0x0001)(Parm, HasGetValueTypeHash)

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Playspace_playspace_component$__WaitForMatchBegin">();
	}
	static class Utask_Playspace_playspace_component___WaitForMatchBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Playspace_playspace_component___WaitForMatchBegin>();
	}
};

// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd
// 0x0010 (0x0158 - 0x0148)
class Utask_Playspace_playspace_component___WaitForMatchEnd final : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*         _Self;                                             // 0x0148(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct VersePlayspace_0::Ftuple_L_R           __verse_0xB2CDDD72_Argument;                       // 0x0150(0x0001)(Parm, HasGetValueTypeHash)

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Playspace_playspace_component$__WaitForMatchEnd">();
	}
	static class Utask_Playspace_playspace_component___WaitForMatchEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Playspace_playspace_component___WaitForMatchEnd>();
	}
};

// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded
// 0x0018 (0x0160 - 0x0148)
class Utask_Playspace_playspace_component___WaitForPlayerAdded final : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*         _Self;                                             // 0x0148(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct VersePlayspace_0::Ftuple_L_R           __verse_0xB2CDDD72_Argument;                       // 0x0150(0x0001)(Parm, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USimulation_player_component*           _RetVal;                                           // 0x0158(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Playspace_playspace_component$__WaitForPlayerAdded">();
	}
	static class Utask_Playspace_playspace_component___WaitForPlayerAdded* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Playspace_playspace_component___WaitForPlayerAdded>();
	}
};

// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved
// 0x0018 (0x0160 - 0x0148)
class Utask_Playspace_playspace_component___WaitForPlayerRemoved final : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*         _Self;                                             // 0x0148(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct VersePlayspace_0::Ftuple_L_R           __verse_0xB2CDDD72_Argument;                       // 0x0150(0x0001)(Parm, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USimulation_player_component*           _RetVal;                                           // 0x0158(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Playspace_playspace_component$__WaitForPlayerRemoved">();
	}
	static class Utask_Playspace_playspace_component___WaitForPlayerRemoved* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Playspace_playspace_component___WaitForPlayerRemoved>();
	}
};

}


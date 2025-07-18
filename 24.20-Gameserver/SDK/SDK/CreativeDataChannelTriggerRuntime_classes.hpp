﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeDataChannelTriggerRuntime

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CreativeDataChannelTriggerRuntime_structs.hpp"
#include "ElectraDataChannelRuntime_classes.hpp"


namespace SDK
{

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
// 0x0000 (0x0028 - 0x0028)
class UCreativeDataChannelAnalytics final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelAnalytics">();
	}
	static class UCreativeDataChannelAnalytics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeDataChannelAnalytics>();
	}
};

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
// 0x0050 (0x0350 - 0x0300)
class ACreativeDataChannelTarget final : public AElectraDataChannelTarget
{
public:
	uint8                                         Pad_300[0x8];                                      // 0x0300(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int8                                          VersionByte;                                       // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCreativeDataChannelEvents             Events;                                            // 0x0310(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCreativeDataChannelEvents& Events)> OnEventsRep;     // 0x0320(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FCreativeDataChannelEvents             EventsCache;                                       // 0x0330(0x0010)(NativeAccessSpecifierPublic)
	uint8                                         Pad_340[0x10];                                     // 0x0340(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void FireEvent(class FName EventName);
	void OnRep_Events();
	void TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelTarget">();
	}
	static class ACreativeDataChannelTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeDataChannelTarget>();
	}
};

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
// 0x02B8 (0x05B8 - 0x0300)
class ACreativeDataChannelTargetFN final : public AElectraDataChannelTarget
{
public:
	uint8                                         Pad_300[0x8];                                      // 0x0300(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VersionByte;                                       // 0x0308(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                VersionByteTracker;                                // 0x030C(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> VersionByteEvent;              // 0x0310(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 LeaderBoard;                                       // 0x0320(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         StormCircleSize;                                   // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCLargeInt                           StormCircleSizeTracker;                            // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCLargeInt& EventNumber)> StormCircleSizeEvent;     // 0x0340(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<float>                                 StormCircleLocation;                               // 0x0350(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCDCFloatArray                         StormCircleLocationTracker;                        // 0x0360(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCFloatArray& EventMap)> StormCircleLocationEvent;  // 0x0370(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 PlayerLocation;                                    // 0x0380(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatArrayMap                PlayerLocationTracker;                             // 0x0390(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringFloatArrayMap& EventMap)> PlayerLocationEvent; // 0x03E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 ArenaPointLeaderBoard;                             // 0x03F0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                    ArenaPointLeaderBoardTracker;                      // 0x0400(0x00A0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringStringMap& EventMap)> ArenaPointLeaderBoardEvent; // 0x04A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 CashCupDataAllTimeEarners;                         // 0x04B0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatMap                     CashCupDataAllTimeEanersTracker;                   // 0x04C0(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringFloatMap& EventMap)> CashCupDataAllTimeEarnersEvent; // 0x0510(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 MythicBossEliminatedPlayer;                        // 0x0520(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCString                             MythicBossEliminatedPlayerTracker;                 // 0x0530(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCString& EventString)> MythicBossEliminatedPlayerEvent; // 0x0540(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 MythicWeaponPlayer;                                // 0x0550(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCString                             MythicWeaponPlayerTracker;                         // 0x0560(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCString& EventString)> MythicWeaponPlayerEvent;    // 0x0570(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 PlayerInfo;                                        // 0x0580(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                        PlayerInfoTracker;                                 // 0x0590(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringArray& EventStringArray)> PlayerInfoEvent;  // 0x05A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelTargetFN">();
	}
	static class ACreativeDataChannelTargetFN* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeDataChannelTargetFN>();
	}
};

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
// 0x04C0 (0x07C0 - 0x0300)
class ACreativeDataChannelTargetRL final : public AElectraDataChannelTarget
{
public:
	uint8                                         Pad_300[0x8];                                      // 0x0300(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VersionByte;                                       // 0x0308(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                VersionByteTracker;                                // 0x030C(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> VersionByteEvent;              // 0x0310(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         ScoreTeam;                                         // 0x0320(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCDCString                             ScoreTeamTracker;                                  // 0x0328(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCString& EventString)> ScoreTeamEvent;             // 0x0338(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 ScoreTotal;                                        // 0x0348(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                       ScoreTotalTracker;                                 // 0x0358(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringIntMap& EventMap)> ScoreTotalEvent;         // 0x03A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int64                                         ScoreboardTimeLeft;                                // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCLargeInt                           ScoreboardTimeLeftTracker;                         // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCLargeInt& EventNumber)> ScoreboardTimeLeftEvent;  // 0x03C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 ScoreboardBestOf;                                  // 0x03D8(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                       ScoreboardBestOfTracker;                           // 0x03E8(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringIntMap& EventMap)> ScoreboardBestOfEvent;   // 0x0438(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         OverTime;                                          // 0x0448(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                OvertimeTracker;                                   // 0x044C(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> OvertimeEvent;                 // 0x0450(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 TeamNames;                                         // 0x0460(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                        TeamNamesTracker;                                  // 0x0470(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringArray& EventStringArray)> TeamNamesEvent;   // 0x0488(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 PlayerNames;                                       // 0x0498(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                        PlayerNamesTracker;                                // 0x04A8(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringArray& EventStringArray)> PlayerNamesEvent; // 0x04C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 PlayerBoost;                                       // 0x04D0(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                       PlayerBoostTracker;                                // 0x04E0(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringIntMap& EventMap)> PlayerBoostEvent;        // 0x0530(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 PlayerBoostCollected;                              // 0x0540(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                    PlayerBoostCollectedTracker;                       // 0x0550(0x00A0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringStringMap& EventMap)> PlayerBoostCollectedEvent; // 0x05F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 PlayerCoords;                                      // 0x0600(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatArrayMap                PlayerCoordsTracker;                               // 0x0610(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringFloatArrayMap& EventMap)> PlayerCoordsEvent; // 0x0660(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 BallCoords;                                        // 0x0670(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCFloatArray                         BallCoordsTracker;                                 // 0x0680(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCFloatArray& EventMap)> BallCoordsEvent;           // 0x0690(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 MediaStart;                                        // 0x06A0(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                    MediaStartTracker;                                 // 0x06B0(0x00A0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCStringStringMap& EventMap)> MediaStartEvent;      // 0x0750(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         MediaStop;                                         // 0x0760(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                MediaStopTracker;                                  // 0x0764(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> MediaStopEvent;                // 0x0768(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         SeriesState;                                       // 0x0778(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                SeriesStateTracker;                                // 0x077C(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> SeriesStateEvent;              // 0x0780(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         MatchState;                                        // 0x0790(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                MatchStateTracker;                                 // 0x0794(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> MatchStateEvent;               // 0x0798(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         FinaleState;                                       // 0x07A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                                FinaleStateTracker;                                // 0x07AC(0x0004)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> FinaleStateEvent;              // 0x07B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void OnRep_BallCoords();
	void OnRep_FinaleState();
	void OnRep_MatchState();
	void OnRep_MediaStart();
	void OnRep_MediaStop();
	void OnRep_Overtime();
	void OnRep_PlayerBoost();
	void OnRep_PlayerBoostCollected();
	void OnRep_PlayerCoords();
	void OnRep_PlayerNames();
	void OnRep_ScoreboardBestOf();
	void OnRep_ScoreboardTimeLeft();
	void OnRep_ScoreTeam();
	void OnRep_ScoreTotal();
	void OnRep_SeriesState();
	void OnRep_TeamNames();
	void OnRep_VersionByte();
	void ReportServerStateStreamError(const class FString& Error, const class FString& UID, const class FString& URL);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelTargetRL">();
	}
	static class ACreativeDataChannelTargetRL* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeDataChannelTargetRL>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemMcp

#include "Basic.hpp"

#include "LinkId_structs.hpp"


namespace SDK
{

// Enum OnlineSubsystemMcp.ESocialCommsPermission
// NumValues: 0x0005
enum class ESocialCommsPermission : uint8
{
	Nobody                                   = 0,
	FriendsOnly                              = 1,
	FriendsAndTeammates                      = 2,
	Everybody                                = 3,
	ESocialCommsPermission_MAX               = 4,
};

// Enum OnlineSubsystemMcp.EOnlineLinkModerationStatus
// NumValues: 0x0004
enum class EOnlineLinkModerationStatus : uint8
{
	Unmoderated                              = 0,
	Approved                                 = 1,
	Denied                                   = 2,
	EOnlineLinkModerationStatus_MAX          = 3,
};

// Enum OnlineSubsystemMcp.ESocialProfilePrivacySettingLevel
// NumValues: 0x0004
enum class ESocialProfilePrivacySettingLevel : uint8
{
	Public                                   = 0,
	FriendsOnly                              = 1,
	Private                                  = 2,
	ESocialProfilePrivacySettingLevel_MAX    = 3,
};

// Enum OnlineSubsystemMcp.ESocialProfilePrivacySettingBadges
// NumValues: 0x0003
enum class ESocialProfilePrivacySettingBadges : uint8
{
	FriendsOnly                              = 0,
	Private                                  = 1,
	ESocialProfilePrivacySettingBadges_MAX   = 2,
};

// Enum OnlineSubsystemMcp.EMutualFriendsPrivacyPolicy
// NumValues: 0x0005
enum class EMutualFriendsPrivacyPolicy : uint8
{
	All                                      = 0,
	Friends                                  = 1,
	None                                     = 2,
	InvalidOrMax                             = 3,
	EMutualFriendsPrivacyPolicy_MAX          = 4,
};

// Enum OnlineSubsystemMcp.ESupervisedSettingsRestrictiveOrder
// NumValues: 0x0008
enum class ESupervisedSettingsRestrictiveOrder : uint8
{
	FirstRestrictive                         = 0,
	FirstPermissive                          = 1,
	LowRestrictive                           = 2,
	LowPermissive                            = 3,
	FalseRestrictive                         = 4,
	FalsePermissive                          = 5,
	None                                     = 6,
	ESupervisedSettingsRestrictiveOrder_MAX  = 7,
};

// Enum OnlineSubsystemMcp.ESupervisedSettingsValueType
// NumValues: 0x0005
enum class ESupervisedSettingsValueType : uint8
{
	Boolean                                  = 0,
	Numeric                                  = 1,
	Option                                   = 2,
	None                                     = 3,
	ESupervisedSettingsValueType_MAX         = 4,
};

// ScriptStruct OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
// 0x0038 (0x0038 - 0x0000)
struct FOnlineDiscoveryModeSetDef final
{
public:
	struct FOnlineLinkId                          ModeSetId;                                         // 0x0000(0x0018)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SubModeLinkType;                                   // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOnlineLinkId>                  SubModeLinkIds;                                    // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
// 0x0018 (0x0018 - 0x0000)
struct FOnlineDiscoverySurfaceDevelopmentLinkCodes final
{
public:
	class FName                                   SurfaceName;                                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         DevelopmentLinkCodes;                              // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.OnlineISOLanguageInfo
// 0x0038 (0x0038 - 0x0000)
struct FOnlineISOLanguageInfo final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(Config, NativeAccessSpecifierPublic)
	class FString                                 LanguageId;                                        // 0x0018(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BackendId;                                         // 0x0028(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.OnlineISORegionInfo
// 0x0038 (0x0038 - 0x0000)
struct FOnlineISORegionInfo final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(Config, NativeAccessSpecifierPublic)
	class FString                                 RegionId;                                          // 0x0018(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BackendId;                                         // 0x0028(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
// 0x0010 (0x0010 - 0x0000)
struct FJsonToxicityEvaluationRequestLegacy final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
// 0x0010 (0x0010 - 0x0000)
struct FJsonToxicityBulkEvaluationRequestLegacy final
{
public:
	TArray<class FString>                         texts;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
// 0x0010 (0x0010 - 0x0000)
struct FJsonToxicityEvaluationRequest final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
// 0x0010 (0x0010 - 0x0000)
struct FJsonToxicityBulkEvaluationRequest final
{
public:
	TArray<class FString>                         Names;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
// 0x0001 (0x0001 - 0x0000)
struct FJsonToxicityEvaluationResponse final
{
public:
	bool                                          toxic;                                             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
// 0x0010 (0x0010 - 0x0000)
struct FJsonToxicityBulkEvaluationResponse final
{
public:
	TArray<bool>                                  isToxic;                                           // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


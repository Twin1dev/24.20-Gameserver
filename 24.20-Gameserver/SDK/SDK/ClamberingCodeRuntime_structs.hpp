﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClamberingCodeRuntime

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum ClamberingCodeRuntime.EClamberingType
// NumValues: 0x0004
enum class EClamberingType : uint8
{
	Invalid                                  = 0,
	Ledge                                    = 1,
	Window                                   = 2,
	EClamberingType_MAX                      = 3,
};

// Enum ClamberingCodeRuntime.EClamberingState
// NumValues: 0x0007
enum class EClamberingState : uint8
{
	Inactive                                 = 0,
	Targeting                                = 1,
	Ledge_Moving                             = 2,
	Ledge_Failed                             = 3,
	Window_Moving                            = 4,
	Window_Failed                            = 5,
	EClamberingState_MAX                     = 6,
};

// Enum ClamberingCodeRuntime.EClamberingFailedReason
// NumValues: 0x000E
enum class EClamberingFailedReason : uint8
{
	None                                     = 0,
	Unknown                                  = 1,
	DebugForced                              = 2,
	OwnerDied                                = 3,
	OwnerDBNO                                = 4,
	OwnerLaunched                            = 5,
	SynchedActionNotStarted                  = 6,
	OwnerTeleported                          = 7,
	Ledge_PlayerTooFar                       = 8,
	Ledge_TargetLocationInvalid              = 9,
	Ledge_TargetActorInvalid                 = 10,
	Ledge_TargetActorDestroyed               = 11,
	Ledge_BlockerEncountered                 = 12,
	EClamberingFailedReason_MAX              = 13,
};

// Enum ClamberingCodeRuntime.EClamberingActivationMode
// NumValues: 0x0004
enum class EClamberingActivationMode : uint8
{
	ClientPreference                         = 0,
	ForceAutoClambering                      = 1,
	ForceManualClambering                    = 2,
	EClamberingActivationMode_MAX            = 3,
};

// Enum ClamberingCodeRuntime.EClamberingDebugTextAlign
// NumValues: 0x0004
enum class EClamberingDebugTextAlign : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	Center                                   = 2,
	EClamberingDebugTextAlign_MAX            = 3,
};

// ScriptStruct ClamberingCodeRuntime.ClamberingInputConfig
// 0x0210 (0x0210 - 0x0000)
struct FClamberingInputConfig final
{
public:
	struct FScalableFloat                         ClamberActivationHorizontalRange;                  // 0x0000(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         ClamberActivationVerticalRange;                    // 0x0028(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         EnableInputDelay;                                  // 0x0050(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         QueuedInputWindow;                                 // 0x0078(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         HeldInputDuration;                                 // 0x00A0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	EClamberingActivationMode                     ActivationMode;                                    // 0x00C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         AutoStartMovementThreshold;                        // 0x00D0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         AutoStartLookAtThreshold;                          // 0x00F8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         AutoStartWallCheckCastRadius;                      // 0x0120(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         AutoStartWallCheckHorizontalRange;                 // 0x0148(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         AutoStartWallCheckLookAtThresholdMultiplier;       // 0x0170(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetInvalidateDistance;                          // 0x0198(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetAimInvalidateAngle;                          // 0x01C0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetActorMovementInvalidateDistance;             // 0x01E8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
// 0x0320 (0x0320 - 0x0000)
struct FClamberingTargetingConfig_Ledge final
{
public:
	struct FScalableFloat                         ForwardCastDistance;                               // 0x0000(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         ForwardCastRadius;                                 // 0x0028(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         FowardCast2D;                                      // 0x0050(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         VerticalSurfaceThreshold;                          // 0x0078(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         HorizontalSurfaceThreshold;                        // 0x00A0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         UpwardDistanceCapsuleHeightMultiplier;             // 0x00C8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         UpwardStartDistanceCapsuleHeightMultiplier;        // 0x00F0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         DownwardDistanceCapsuleHeightMultiplier;           // 0x0118(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinimumLedgeHeight;                                // 0x0140(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinimumLedgeHeightWater;                           // 0x0168(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         FallingSpeedThreshold;                             // 0x0190(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinimumLedgeFallingHeight;                         // 0x01B8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinimumLedgeFallingWaterHeight;                    // 0x01E0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         ForwardSphereCastRadius;                           // 0x0208(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         DownwardSphereCastRadius;                          // 0x0230(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         AllowNonWalkableSurfaces;                          // 0x0258(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetValidationEnabled;                           // 0x0280(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetValidationCapsuleRadiusModifier;             // 0x02A8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetValidationCapsuleHalfHeightModifier;         // 0x02D0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TargetValidationCapsuleBottomVerticalOffset;       // 0x02F8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
// 0x0014 (0x0014 - 0x0000)
struct alignas(0x04) FClamberingTargetingConfig_Ledge_CachedContextualValues final
{
public:
	uint8                                         Pad_0[0x14];                                       // 0x0000(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
// 0x0028 (0x0050 - 0x0028)
struct alignas(0x10) FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
// 0x0018 (0x0040 - 0x0028)
struct FClamberingTargetingDebugDrawData_Line final : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
// 0x0008 (0x0030 - 0x0028)
struct FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
// 0x0020 (0x0048 - 0x0028)
struct FClamberingTargetingDebugDrawData_DirectionalArrow final : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
// 0x0020 (0x0070 - 0x0050)
struct FClamberingTargetingDebugDrawData_CapsuleCast final : public FClamberingTargetingDebugDrawData_Capsule
{
public:
	uint8                                         Pad_50[0x20];                                      // 0x0050(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
// 0x0018 (0x0048 - 0x0030)
struct FClamberingTargetingDebugDrawData_SphereCast final : public FClamberingTargetingDebugDrawData_Sphere
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugData
// 0x0001 (0x0001 - 0x0000)
struct FClamberingTargetingDebugData
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
// 0x0000 (0x0001 - 0x0001)
struct FClamberingTargetingDebugData_Ledge final : public FClamberingTargetingDebugData
{
};

// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingData
// 0x00D0 (0x00D0 - 0x0000)
struct FClamberingTargetingData final
{
public:
	EClamberingType                               Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bValid : 1;                                        // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 SourceActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SourceLocation;                                    // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SourceAim;                                         // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WallLocation;                                      // 0x0040(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WallNormal;                                        // 0x0058(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetLocation;                                    // 0x0070(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetNormal;                                      // 0x0088(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 TargetActor;                                       // 0x00A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                        TargetActorComponent;                              // 0x00A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetActorComponentLocation;                      // 0x00B0(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetActorBoneName;                               // 0x00C8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ReplicatedClamberingTargetingData
// 0x0078 (0x0078 - 0x0000)
struct FReplicatedClamberingTargetingData final
{
public:
	EClamberingType                               Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantize10                  SourceLocation;                                    // 0x0008(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                 WallLocation;                                      // 0x0020(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        WallNormalYawQuantized;                            // 0x0038(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        WallNormalPitchQuantized;                          // 0x003A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantize100                 TargetLocation;                                    // 0x0040(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        TargetNormalYawQuantized;                          // 0x0058(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        TargetNormalPitchQuantized;                        // 0x005A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetActor;                                       // 0x0060(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                        TargetActorComponent;                              // 0x0068(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetActorBoneName;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
// 0x0038 (0x0038 - 0x0000)
struct FReplicatedClamberingTargetingData_SimClient final
{
public:
	EClamberingType                               Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x1];                                        // 0x0001(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        WallNormalYawQuantized;                            // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantize100                 TargetLocation;                                    // 0x0008(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 TargetActor;                                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                        TargetActorComponent;                              // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetActorBoneName;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
// 0x0050 (0x0050 - 0x0000)
struct FClamberingMovementConfig_Ledge final
{
public:
	struct FScalableFloat                         Duration;                                          // 0x0000(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         BlockCheckTickRate;                                // 0x0028(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
// 0x0028 (0x0028 - 0x0000)
struct FClamberingAnalytics_ClamberEvent final
{
public:
	int32                                         MatchTime;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClamberingType                               ClamberType;                                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ClamberLocation;                                   // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClamberingFailedReason                       FailureReason;                                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


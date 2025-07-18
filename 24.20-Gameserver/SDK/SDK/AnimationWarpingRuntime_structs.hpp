﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationWarpingRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AnimationWarpingRuntime.EFootPlacementLockType
// NumValues: 0x0005
enum class EFootPlacementLockType : uint8
{
	Unlocked                                 = 0,
	PivotAroundBall                          = 1,
	PivotAroundAnkle                         = 2,
	LockRotation                             = 3,
	EFootPlacementLockType_MAX               = 4,
};

// Enum AnimationWarpingRuntime.EPelvisHeightMode
// NumValues: 0x0004
enum class EPelvisHeightMode : uint8
{
	AllLegs                                  = 0,
	AllPlantedFeet                           = 1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	EPelvisHeightMode_MAX                    = 3,
};

// Enum AnimationWarpingRuntime.EActorMovementCompensationMode
// NumValues: 0x0004
enum class EActorMovementCompensationMode : uint8
{
	ComponentSpace                           = 0,
	WorldSpace                               = 1,
	SuddenMotionOnly                         = 2,
	EActorMovementCompensationMode_MAX       = 3,
};

// Enum AnimationWarpingRuntime.EOffsetRootBoneMode
// NumValues: 0x0005
enum class EOffsetRootBoneMode : uint8
{
	Accumulate                               = 0,
	Interpolate                              = 1,
	Hold                                     = 2,
	Release                                  = 3,
	EOffsetRootBoneMode_MAX                  = 4,
};

// ScriptStruct AnimationWarpingRuntime.FootPlacementInterpolationSettings
// 0x0024 (0x0024 - 0x0000)
struct FFootPlacementInterpolationSettings final
{
public:
	float                                         UnplantLinearStiffness;                            // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnplantLinearDamping;                              // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnplantAngularStiffness;                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnplantAngularDamping;                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloorLinearStiffness;                              // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloorLinearDamping;                                // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloorAngularStiffness;                             // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloorAngularDamping;                               // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFloorInterpolation;                         // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.FootPlacementTraceSettings
// 0x001C (0x001C - 0x0000)
struct FFootPlacementTraceSettings final
{
public:
	float                                         StartOffset;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndOffset;                                         // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SweepRadius;                                       // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETraceTypeQuery                               ComplexTraceChannel;                               // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxGroundPenetration;                              // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SimpleCollisionInfluence;                          // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETraceTypeQuery                               SimpleTraceChannel;                                // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.FootPlacementRootDefinition
// 0x0018 (0x0018 - 0x0000)
struct FFootPlacementRootDefinition final
{
public:
	struct FBoneReference                         PelvisBone;                                        // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         IKRootBone;                                        // 0x000C(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationWarpingRuntime.FootPlacementPelvisSettings
// 0x001C (0x001C - 0x0000)
struct FFootPlacementPelvisSettings final
{
public:
	float                                         MaxOffset;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearStiffness;                                   // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearDamping;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HorizontalRebalancingWeight;                       // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxOffsetHorizontal;                               // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HeelLiftRatio;                                     // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPelvisHeightMode                             PelvisHeightMode;                                  // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EActorMovementCompensationMode                ActorMovementCompensationMode;                     // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableInterpolation;                              // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.FootPlacemenLegDefinition
// 0x0030 (0x0030 - 0x0000)
struct FFootPlacemenLegDefinition final
{
public:
	struct FBoneReference                         FKFootBone;                                        // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         IKFootBone;                                        // 0x000C(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         BallBone;                                          // 0x0018(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         NumBonesInLimb;                                    // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SpeedCurveName;                                    // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DisableLockCurveName;                              // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationWarpingRuntime.FootPlacementPlantSettings
// 0x0034 (0x0034 - 0x0000)
struct FFootPlacementPlantSettings final
{
public:
	float                                         SpeedThreshold;                                    // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceToGround;                                  // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFootPlacementLockType                        LockType;                                          // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UnplantRadius;                                     // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReplantRadiusRatio;                                // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnplantAngle;                                      // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReplantAngleRatio;                                 // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxExtensionRatio;                                 // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinExtensionRatio;                                 // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SeparatingDistance;                                // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnalignmentSpeedThreshold;                         // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnkleTwistReduction;                               // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdjustHeelBeforePlanting;                         // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_FootPlacement
// 0x0338 (0x0400 - 0x00C8)
struct alignas(0x10) FAnimNode_FootPlacement final : public FAnimNode_SkeletalControlBase
{
public:
	EWarpingEvaluationMode                        PlantSpeedMode;                                    // 0x00C8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneReference                         IKFootRootBone;                                    // 0x00CC(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         PelvisBone;                                        // 0x00D8(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFootPlacementPelvisSettings           PelvisSettings;                                    // 0x00E4(0x001C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFootPlacemenLegDefinition>     LegDefinitions;                                    // 0x0100(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFootPlacementPlantSettings            PlantSettings;                                     // 0x0110(0x0034)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFootPlacementInterpolationSettings    InterpolationSettings;                             // 0x0144(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFootPlacementTraceSettings            TraceSettings;                                     // 0x0168(0x001C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_184[0x27C];                                    // 0x0184(0x027C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_OffsetRootBone
// 0x00C8 (0x0190 - 0x00C8)
struct alignas(0x10) FAnimNode_OffsetRootBone final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0xC8];                                      // 0x00C8(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
// 0x00D0 (0x0198 - 0x00C8)
struct FAnimNode_OrientationWarping final : public FAnimNode_SkeletalControlBase
{
public:
	EWarpingEvaluationMode                        Mode;                                              // 0x00C8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OrientationAngle;                                  // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocomotionAngle;                                   // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinRootMotionSpeedThreshold;                       // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocomotionAngleDeltaThreshold;                     // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBoneReference>                 SpineBones;                                        // 0x00E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         IKFootRootBone;                                    // 0x00F0(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBoneReference>                 IKFootBones;                                       // 0x0100(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EAxis                                         RotationAxis;                                      // 0x0110(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DistributedBoneOrientationAlpha;                   // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationInterpSpeed;                               // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WarpingAlpha;                                      // 0x011C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OffsetAlpha;                                       // 0x0120(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxOffsetAngle;                                    // 0x0124(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_128[0x70];                                     // 0x0128(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
// 0x0020 (0x0020 - 0x0000)
struct FSlopeWarpingFootDefinition final
{
public:
	struct FBoneReference                         IKFootBone;                                        // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         FKFootBone;                                        // 0x000C(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         NumBonesInLimb;                                    // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FootSize;                                          // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
// 0x00B0 (0x00B0 - 0x0000)
struct alignas(0x10) FSlopeWarpingFootData final
{
public:
	uint8                                         Pad_0[0xB0];                                       // 0x0000(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
// 0x0210 (0x02D8 - 0x00C8)
struct FAnimNode_SlopeWarping final : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                         Pad_C8[0x18];                                      // 0x00C8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneReference                         IKFootRootBone;                                    // 0x00E0(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         PelvisBone;                                        // 0x00EC(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSlopeWarpingFootDefinition>    FeetDefinitions;                                   // 0x00F8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlopeWarpingFootData>          FeetData;                                          // 0x0108(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator           PelvisOffsetInterpolator;                          // 0x0118(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_120[0x58];                                     // 0x0120(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GravityDir;                                        // 0x0178(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CustomFloorOffset;                                 // 0x0190(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CachedDeltaTime;                                   // 0x01A8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetFloorNormalWorldSpace;                       // 0x01B0(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator           FloorNormalInterpolator;                           // 0x01C8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D0[0x58];                                     // 0x01D0(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetFloorOffsetLocalSpace;                       // 0x0228(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator           FloorOffsetInterpolator;                           // 0x0240(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_248[0x58];                                     // 0x0248(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxStepHeight;                                     // 0x02A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bKeepMeshInsideOfCapsule : 1;                      // 0x02A4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPullPelvisDown : 1;                               // 0x02A4(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseCustomFloorOffset : 1;                         // 0x02A4(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bWasOnGround : 1;                                  // 0x02A4(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShowDebug : 1;                                    // 0x02A4(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFloorSmoothingInitialized : 1;                    // 0x02A4(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ActorLocation;                                     // 0x02A8(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GravityDirCompSpace;                               // 0x02C0(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
// 0x0024 (0x0024 - 0x0000)
struct FStrideWarpingFootDefinition final
{
public:
	struct FBoneReference                         IKFootBone;                                        // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         FKFootBone;                                        // 0x000C(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         ThighBone;                                         // 0x0018(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
// 0x0168 (0x0230 - 0x00C8)
struct FAnimNode_StrideWarping final : public FAnimNode_SkeletalControlBase
{
public:
	EWarpingEvaluationMode                        Mode;                                              // 0x00C8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StrideDirection;                                   // 0x00D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StrideScale;                                       // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocomotionSpeed;                                   // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinRootMotionSpeedThreshold;                       // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                         PelvisBone;                                        // 0x00F4(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         IKFootRootBone;                                    // 0x0100(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStrideWarpingFootDefinition>   FootDefinitions;                                   // 0x0110(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FInputClampConstants                   StrideScaleModifier;                               // 0x0120(0x0014)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWarpingVectorValue                    FloorNormalDirection;                              // 0x0138(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWarpingVectorValue                    GravityDirection;                                  // 0x0158(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FIKFootPelvisPullDownSolver            PelvisIKFootSolver;                                // 0x0178(0x0070)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bOrientStrideDirectionUsingFloorNormal;            // 0x01E8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCompensateIKUsingFKThighRotation;                 // 0x01E9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bClampIKUsingFKLimits;                             // 0x01EA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EB[0x45];                                     // 0x01EB(0x0045)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


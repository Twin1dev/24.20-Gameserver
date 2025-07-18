﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum GameplayCameras.EOscillatorWaveform
// NumValues: 0x0003
enum class EOscillatorWaveform : uint8
{
	SineWave                                 = 0,
	PerlinNoise                              = 1,
	EOscillatorWaveform_MAX                  = 2,
};

// Enum GameplayCameras.EInitialOscillatorOffset
// NumValues: 0x0003
enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom                         = 0,
	EOO_OffsetZero                           = 1,
	EOO_MAX                                  = 2,
};

// Enum GameplayCameras.ECameraAnimationPlaySpace
// NumValues: 0x0004
enum class ECameraAnimationPlaySpace : uint8
{
	CameraLocal                              = 0,
	World                                    = 1,
	UserDefined                              = 2,
	ECameraAnimationPlaySpace_MAX            = 3,
};

// Enum GameplayCameras.ECameraAnimationEasingType
// NumValues: 0x0009
enum class ECameraAnimationEasingType : uint8
{
	Linear                                   = 0,
	Sinusoidal                               = 1,
	Quadratic                                = 2,
	Cubic                                    = 3,
	Quartic                                  = 4,
	Quintic                                  = 5,
	Exponential                              = 6,
	Circular                                 = 7,
	ECameraAnimationEasingType_MAX           = 8,
};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
// NumValues: 0x0003
enum class EInitialWaveOscillatorOffsetType : uint8
{
	Random                                   = 0,
	Zero                                     = 1,
	EInitialWaveOscillatorOffsetType_MAX     = 2,
};

// ScriptStruct GameplayCameras.FOscillator
// 0x000C (0x000C - 0x0000)
struct FFOscillator final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialOscillatorOffset                      InitialOffset;                                     // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOscillatorWaveform                           Waveform;                                          // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameplayCameras.ROscillator
// 0x0024 (0x0024 - 0x0000)
struct FROscillator final
{
public:
	struct FFOscillator                           Pitch;                                             // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Yaw;                                               // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Roll;                                              // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GameplayCameras.VOscillator
// 0x0024 (0x0024 - 0x0000)
struct FVOscillator final
{
public:
	struct FFOscillator                           X;                                                 // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Y;                                                 // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Z;                                                 // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GameplayCameras.CameraAnimationParams
// 0x0040 (0x0040 - 0x0000)
struct FCameraAnimationParams final
{
public:
	float                                         PlayRate;                                          // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationEasingType                    EaseInType;                                        // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EaseInDuration;                                    // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationEasingType                    EaseOutType;                                       // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EaseOutDuration;                                   // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRandomStartTime;                                  // 0x0019(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DurationOverride;                                  // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationPlaySpace                     Playspace;                                         // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               UserPlaySpaceRot;                                  // 0x0028(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GameplayCameras.CameraAnimationHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x02) FCameraAnimationHandle final
{
public:
	uint8                                         Pad_0[0x4];                                        // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
// 0x0070 (0x0070 - 0x0000)
struct FActiveCameraAnimationInfo final
{
public:
	class UCameraAnimationSequence*               Sequence;                                          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationParams                 Params;                                            // 0x0008(0x0040)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                 Handle;                                            // 0x0048(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationSequencePlayer*         Player;                                            // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequenceCameraStandIn*  CameraStandIn;                                     // 0x0058(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EaseInCurrentTime;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EaseOutCurrentTime;                                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEasingIn;                                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEasingOut;                                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// 0x0008 (0x0008 - 0x0000)
struct FPerlinNoiseShaker final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameplayCameras.WaveOscillator
// 0x000C (0x000C - 0x0000)
struct FWaveOscillator final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialWaveOscillatorOffsetType              InitialOffsetType;                                 // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


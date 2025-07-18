﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "Niagara_structs.hpp"
#include "Niagara_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "GeometryCache_structs.hpp"


namespace SDK
{

// Class GeometryCache.GeometryCache
// 0x0048 (0x0070 - 0x0028)
class UGeometryCache final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>            Tracks;                                            // 0x0040(0x0010)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StartFrame;                                        // 0x0060(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         EndFrame;                                          // 0x0064(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                        Hash;                                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCache">();
	}
	static class UGeometryCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCache>();
	}
};

// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x0290 - 0x0288)
class AGeometryCacheActor final : public AActor
{
public:
	class UGeometryCacheComponent*                GeometryCacheComponent;                            // 0x0288(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UGeometryCacheComponent* GetGeometryCacheComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheActor">();
	}
	static class AGeometryCacheActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCacheActor>();
	}
};

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (0x0038 - 0x0028)
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                 TopologyRanges;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecBase">();
	}
	static class UGeometryCacheCodecBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecBase>();
	}
};

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0008 (0x0040 - 0x0038)
class UGeometryCacheCodecRaw final : public UGeometryCacheCodecBase
{
public:
	int32                                         DummyProperty;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecRaw">();
	}
	static class UGeometryCacheCodecRaw* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecRaw>();
	}
};

// Class GeometryCache.GeometryCacheCodecV1
// 0x0008 (0x0040 - 0x0038)
class UGeometryCacheCodecV1 final : public UGeometryCacheCodecBase
{
public:
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecV1">();
	}
	static class UGeometryCacheCodecV1* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecV1>();
	}
};

// Class GeometryCache.GeometryCacheComponent
// 0x0090 (0x0630 - 0x05A0)
class UGeometryCacheComponent final : public UMeshComponent
{
public:
	class UGeometryCache*                         GeometryCache;                                     // 0x05A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRunning;                                          // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bLooping;                                          // 0x05A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bExtrapolateFrames;                                // 0x05AA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5AB[0x1];                                      // 0x05AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTimeOffset;                                   // 0x05AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlaybackSpeed;                                     // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MotionVectorScale;                                 // 0x05B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         numTracks;                                         // 0x05B8(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ElapsedTime;                                       // 0x05BC(0x0004)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5C0[0x4C];                                     // 0x05C0(0x004C)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x060C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bManualTick;                                       // 0x0610(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bOverrideWireframeColor;                           // 0x0611(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_612[0x2];                                      // 0x0612(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           WireframeOverrideColor;                            // 0x0614(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_624[0xC];                                      // 0x0624(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Pause();
	void Play();
	void PlayFromStart();
	void PlayReversed();
	void PlayReversedFromEnd();
	void SetExtrapolateFrames(const bool bNewExtrapolating);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void SetLooping(const bool bNewLooping);
	void SetMotionVectorScale(const float NewMotionVectorScale);
	void SetOverrideWireframeColor(bool bOverride);
	void SetPlaybackSpeed(const float NewPlaybackSpeed);
	void SetStartTimeOffset(const float NewStartTimeOffset);
	void SetWireframeOverrideColor(const struct FLinearColor& Color);
	void Stop();
	void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);

	float GetAnimationTime() const;
	float GetDuration() const;
	float GetMotionVectorScale() const;
	int32 GetNumberOfFrames() const;
	bool GetOverrideWireframeColor() const;
	float GetPlaybackDirection() const;
	float GetPlaybackSpeed() const;
	float GetStartTimeOffset() const;
	struct FLinearColor GetWireframeOverrideColor() const;
	bool IsExtrapolatingFrames() const;
	bool IsLooping() const;
	bool IsPlaying() const;
	bool IsPlayingReversed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheComponent">();
	}
	static class UGeometryCacheComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheComponent>();
	}
};

// Class GeometryCache.GeometryCacheTrack
// 0x0030 (0x0058 - 0x0028)
class UGeometryCacheTrack : public UObject
{
public:
	float                                         Duration;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2C[0x2C];                                      // 0x002C(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack">();
	}
	static class UGeometryCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack>();
	}
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0080 - 0x0058)
class UGeometryCacheTrack_FlipbookAnimation final : public UGeometryCacheTrack
{
public:
	uint32                                        NumMeshSamples;                                    // 0x0058(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5C[0x24];                                      // 0x005C(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, const float SampleTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_FlipbookAnimation">();
	}
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_FlipbookAnimation>();
	}
};

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0080 (0x00D8 - 0x0058)
class UGeometryCacheTrackStreamable final : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*                Codec;                                             // 0x0058(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x68];                                      // 0x0060(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartSampleTime;                                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CC[0xC];                                       // 0x00CC(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrackStreamable">();
	}
	static class UGeometryCacheTrackStreamable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrackStreamable>();
	}
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x00C8 (0x0120 - 0x0058)
class UGeometryCacheTrack_TransformAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_58[0xC8];                                      // 0x0058(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformAnimation">();
	}
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformAnimation>();
	}
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x00C8 (0x0120 - 0x0058)
class UGeometryCacheTrack_TransformGroupAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_58[0xC8];                                      // 0x0058(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformGroupAnimation">();
	}
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformGroupAnimation>();
	}
};

// Class GeometryCache.NiagaraGeometryCacheRendererProperties
// 0x01E0 (0x02A8 - 0x00C8)
class UNiagaraGeometryCacheRendererProperties final : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0x00C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIsLooping;                                        // 0x00D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ComponentCountLimit;                               // 0x00DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       PositionBinding;                                   // 0x00E0(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       RotationBinding;                                   // 0x0120(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       ScaleBinding;                                      // 0x0160(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       ElapsedTimeBinding;                                // 0x01A0(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       EnabledBinding;                                    // 0x01E0(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       ArrayIndexBinding;                                 // 0x0220(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding       RendererVisibilityTagBinding;                      // 0x0260(0x0040)(Edit, NativeAccessSpecifierPublic)
	int32                                         RendererVisibility;                                // 0x02A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAssignComponentsOnParticleID;                     // 0x02A4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraGeometryCacheRendererProperties">();
	}
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraGeometryCacheRendererProperties>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnstableLiquidGunRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "UnstableLiquidGunRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
// 0x0150 (0x0B70 - 0x0A20)
class AFortLiquidGunProjectile final : public AFortProjectileBase
{
public:
	class USceneComponent*                        AttachComponent;                                   // 0x0A20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AttachOffset;                                      // 0x0A28(0x0018)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ProjectileIndex;                                   // 0x0A40(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A44[0x4];                                      // 0x0A44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StopNormal;                                        // 0x0A48(0x0018)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALiquidRibbonManager*                   RibbonManager;                                     // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinDistBetweenProjectilesForSplineCollisionTest;   // 0x0A68(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0x0A90(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MinProjectileVelocityAngleToBeInLine;              // 0x0AB8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	ECollisionChannel                             BroadSphereOverlapTraceChannel;                    // 0x0AE0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AE1[0x3];                                      // 0x0AE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CapsuleTraceProfileName;                           // 0x0AE4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCapsuleTraceComplex;                              // 0x0AE8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AE9[0x7];                                      // 0x0AE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantize                    RandomDetachmentAngleFirstHalf;                    // 0x0AF0(0x0018)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                    RandomDetachmentAngleSecondHalf;                   // 0x0B08(0x0018)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDrawDebugCollision;                               // 0x0B20(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDrawDebugCollisionOnlyCapsuleTraceHits;           // 0x0B21(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ELiquidRibbonDetachmentReason                 DetachmentReason;                                  // 0x0B22(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B23[0x4D];                                     // 0x0B23(0x004D)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleSplineHit(const struct FHitResult& Hit);
	void SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason);

	ELiquidRibbonDetachmentReason GetDetachmentReason() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLiquidGunProjectile">();
	}
	static class AFortLiquidGunProjectile* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortLiquidGunProjectile>();
	}
};

// Class UnstableLiquidGunRuntime.LiquidRibbonManager
// 0x01B8 (0x0440 - 0x0288)
class ALiquidRibbonManager final : public AActor
{
public:
	int32                                         PointsPerSegment;                                  // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         MaxSegmentLengthBeforeBreak;                       // 0x0290(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         SplineCurveTension;                                // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinPointSize;                                      // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPointSize;                                      // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumPointsAtMinPointSize;                           // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumPointsAtMaxPointSize;                           // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SplineLengthForSizeCalculation;                    // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumPointsToTaperDownSplineEndSize;                 // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinSplineEndTaperSize;                             // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TaperSizeAtDetachment_RemapClosenessToBreakageOldMin; // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TaperSizeAtDetachment_RemapClosenessToBreakageOldMax; // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinPointSizePercentForFlashIntensity;              // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPointSizePercentForFlashIntensity;              // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PositionsNiagaraParamName;                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   RibbonIDsNiagaraParamName;                         // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   RibbonVisibilitiesNiagaraParamName;                // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FlashIntensitiesNiagaraParamName;                  // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   RibbonSizesNiagaraParamName;                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         CalculateBaseCurlOffset_MaxSegmentLength;          // 0x0300(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                         CalculateBaseCurlOffset_MaxTimeSinceDetachment;    // 0x0328(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                         CalculateBaseCurlOffset_TowardPerpendicularMult;   // 0x0350(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                         CalculateBaseCurlOffset_TowardEndMult;             // 0x0378(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                         CalculateBaseCurlOffset_TowardRandomMult;          // 0x03A0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCurveFloat*                            TimeSinceDetachmentCurlCurve;                      // 0x03C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                         TimeSinceDetachmentCurlCurve_MaxTime;              // 0x03D0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         CurlingMaxClosenessToBreakage;                     // 0x03F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 SegmentLengths;                                    // 0x0400(0x0010)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLiquidRibbonSplineDetachment>  Detachments;                                       // 0x0410(0x0010)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLiquidRibbonSplineSegment>     SplineSegments;                                    // 0x0420(0x0010)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AFortLiquidGunProjectile*>       Projectiles_Native;                                // 0x0430(0x0010)(BlueprintVisible, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	TArray<struct FLiquidRibbonSplineSegment> CalculateSegments(const TArray<struct FVector>& Points, const float Tension);
	void CalculateSplinePointsAndSetNiagaraData(const TArray<class AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>* OutAllPositions, TArray<int32>* OutRibbonIDs, TArray<bool>* OutRibbonVisibilities, TArray<float>* OutFlashIntensities, TArray<int32>* OutRibbonSizes);
	const struct FLiquidRibbonSplineDetachment GetOrAddDetachment(const int32 RibbonID, const struct FLiquidRibbonSplineSegment& Segment);
	void RunSplineCollisionTestOnProjectiles();

	float CalculatePointFlashIntensity(const int32 PointSize) const;
	float CalculatePointSize(int32 SegmentIndex, int32 PointIndex) const;
	int32 GetFirstVisiblePointIndex() const;
	struct FVector GetPointOnSegment(float T, const struct FLiquidRibbonSplineSegment& Segment) const;
	void SetNiagaraData(class UNiagaraComponent* NiagaraComponent, const TArray<struct FVector>& Positions, const TArray<int32>& RibbonIDs, const TArray<bool>& RibbonVisibilities, const TArray<float>& FlashIntensities, const TArray<int32>& RibbonSizes) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiquidRibbonManager">();
	}
	static class ALiquidRibbonManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALiquidRibbonManager>();
	}
};

}


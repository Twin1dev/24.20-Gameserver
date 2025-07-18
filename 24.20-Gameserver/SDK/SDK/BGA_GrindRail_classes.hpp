﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_GrindRail

#include "Basic.hpp"

#include "ColorSelect_structs.hpp"
#include "GrindRail_Connection_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GrindRail_TipOptions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GrindRail_ResourceSpawns_structs.hpp"
#include "GrindRail_Booster_Directional_structs.hpp"
#include "GrindRailRuntime_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "GleefulRake_BoosterMode_structs.hpp"
#include "GrindRail_ResourceSpawns_Type_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_GrindRail.BGA_GrindRail_C
// 0x0360 (0x0E40 - 0x0AE0)
class ABGA_GrindRail_C final : public AFortGrindRail
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*          booster_InstancedStaticMesh;                       // 0x0AE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0AF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        DistancePerBoosterArrow;                           // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGrindRail_Booster_Directional> Boosters;                                          // 0x0B08(0x0010)(Edit, BlueprintVisible)
	bool                                          Full_Circle;                                       // 0x0B18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B19[0x7];                                      // 0x0B19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGrindRail_Connection>          Connections;                                       // 0x0B20(0x0010)(Edit, BlueprintVisible, Net, RepNotify, ExposeOnSpawn)
	class UStaticMeshComponent*                   StartTip;                                          // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   EndTip;                                            // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGrindRail_TipOptions                  Tip_Caps;                                          // 0x0B40(0x0002)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B42[0x6];                                      // 0x0B42(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGrindRail_ResourceSpawns>      ResourceSpawns;                                    // 0x0B48(0x0010)(Edit, BlueprintVisible)
	bool                                          StartIsConnected;                                  // 0x0B58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndIsConnected;                                    // 0x0B59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B5A[0x2];                                      // 0x0B5A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ColorSelect;                                       // 0x0B5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               EmissiveColor;                                     // 0x0B60(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RedColor;                                          // 0x0B80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GreenColor;                                        // 0x0B90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BlueColor;                                         // 0x0BA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           YellowColor;                                       // 0x0BB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Player_Mesh;                                       // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_GrindingComponent_C*                Grinding_compoent;                                 // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyBlue;                                           // 0x0BD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Purple;                                            // 0x0BE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Glow_start_Radius;                                 // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Glow_End_Radius;                                   // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Glow_start__Intensity;                             // 0x0BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Glow__end_Intensity;                               // 0x0BFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Constructed_From_Rail_Connector_Movement;          // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C01[0x7];                                      // 0x0C01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_RailConnector_GrindRail_C*         The_Connector;                                     // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineStaticMesh;                                  // 0x0C10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInterface*                     MaterialOfEmisssive;                               // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          _Glow_start_and_End;                               // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C29[0x3];                                      // 0x0C29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Last_index;                                        // 0x0C2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorSelect                                  Color_Select_Enum;                                 // 0x0C30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C31[0x3];                                      // 0x0C31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Orange;                                            // 0x0C34(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C44[0x4];                                      // 0x0C44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           BoosterMeshes;                                     // 0x0C48(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IgnoreEmissiveDistanceFade;                        // 0x0C58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C59[0x7];                                      // 0x0C59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInstancedStaticMeshComponent*          Target;                                            // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Booster_Arrow_style_Select_;                       // 0x0C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C69[0x7];                                      // 0x0C69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInstancedStaticMeshComponent*          Instance_mesh;                                     // 0x0C70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Instance_Index;                                    // 0x0C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Animation_period;                                  // 0x0C7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SideA_Reverse_animation_direction;                 // 0x0C80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SideB_Reverse_animation_direction;                 // 0x0C81(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C82[0x6];                                      // 0x0C82(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             ResourceToSpawnMesh;                               // 0x0C88(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              SplineMeshBillboard;                               // 0x0CB0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             TipMesh;                                           // 0x0CD8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UFortWorldItemDefinition> ResourceToSpawn;                                  // 0x0D00(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      ResourceLowTierMaterial;                           // 0x0D28(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      ResourceHighTierMaterial;                          // 0x0D50(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      ResourceSingleItemMaterial;                        // 0x0D78(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Animation_trailing_length;                         // 0x0DA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA4[0x4];                                      // 0x0DA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHierarchicalInstancedStaticMeshComponent* instance_array;                                 // 0x0DA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         instance_meshIndex;                                // 0x0DB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB4[0x4];                                      // 0x0DB4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHierarchicalInstancedStaticMeshComponent* instance_staic_mesh;                            // 0x0DB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Array_Index;                                       // 0x0DC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC4[0x4];                                      // 0x0DC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ColorEmissiveScale;                                // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Rail;                                         // 0x0DD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Interaction;                                  // 0x0DD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SplineMeshLength;                                  // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChronoGrindRail;                                 // 0x0DE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE9[0x7];                                      // 0x0DE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BoosterLocalPostionZ;                              // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BoosterLocalPostionX;                              // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BoosterLocalPostionY_Offset;                       // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Sprinting;                                      // 0x0E08(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_SlowBoosting;                                   // 0x0E0C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_FastBoosting;                                   // 0x0E10(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_LandOnRail;                                     // 0x0E14(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_ImpactPlayer;                                   // 0x0E18(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1C[0x4];                                      // 0x0E1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameplayEffect>            GE_GrindingIncludingInAir;                         // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USoundLibrary*                          GrindRailSoundLibrary;                             // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UActorComponent>            GrindRail_TipComponent_Class;                      // 0x0E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USoundMix*                              GrindingSoundMixMusic;                             // 0x0E38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddBoosterModel(const struct FGrindRail_Booster_Directional& Booster, int32 Array_Index_0);
	void AddInteractionRailMeshComponent(class USplineMeshComponent** SplineMeshComponent);
	void AddRailConnection(const struct FGrindRail_Connection& NewConnection);
	void AddSolidRailMeshComponent(class USplineMeshComponent** SplineMeshComponent);
	void AddTip(bool EndTip_0, bool OnlyUpdateSpline, class UStaticMesh* TipMesh_0);
	bool AllowJumpOffEnd();
	bool AllowJumpOffStart();
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BoosterLengthToSplineLength(const struct FGrindRail_Booster_Directional& Booster, double Length_Along_Booster__cm_, double* Length_Along_Spline__cm_);
	void CollisionCheck(class APlayerPawn_Athena_C* Player, bool* Return);
	void CreateSplineMesh(int32 FirstPoint, int32 SecondPoint, class UTexture2D* MeshEditorSprite);
	void DestroyEndTip();
	void DestroyStartTip();
	void DestroyTip(class UActorComponent* Target_0);
	void ExecuteUbergraph_BGA_GrindRail(int32 EntryPoint);
	void FillInBoosterInfo();
	void ForceClearBoosters();
	void GenerateRailComponents(bool FromRailConnectorMovement, class ABGA_RailConnector_GrindRail_C* TheConnector);
	void GetConnectionForGrinding(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float NextDistanceOnRail, const float RightLeanValue, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection);
	void GetCurvatureAtDistance(double Distance, double* Curvature);
	struct FVector GetDirectionAtDistance(float Distance);
	float GetLength();
	void GetRotationForTip(bool bEndTip, struct FRotator* Rotator);
	void GetSnapPosition(const struct FVector& CurrentPosition, struct FVector* OutPos, float* OutDistance);
	void GrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail);
	void HandlePlayerGrindStart(class APlayerPawn_Athena_C* AttachedPlayer);
	bool IsATip(int32 Index_0);
	bool IsTipCapped(const bool bStartTip);
	bool IsTipConnected(const bool bStartTip);
	void JumpOffMaterial();
	void OnRep_Connections();
	void PopGrindingSoundMix();
	void PushGrindingSoundMix(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation);
	void PutPlayerOnRail(class APlayerPawn_Athena_C* Player);
	void PutPlayerOnRail_ClientAndServer(class APlayerPawn_Athena_C* InputPin);
	void PutPlayerOnRail_Server(class APlayerPawn_Athena_C* InputPin);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void RedoSplineMesh();
	void SnapNearbyPointsToConnector(class AActor* Connector);
	void SnapPointToConnector(class AActor* Connector, int32 PointIndex);
	void sprinting_state(bool bNewIsSprinting);
	void Sprinting_StateMaterial(bool Sprinting);
	void StartedGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation);
	void StartedGrindingMaterial();
	void Tips();
	void Unified_Material_and_UV(int32 FirstPoint, int32 SecondPoint, class USplineMeshComponent* Add_Spline_mesh);
	void UpdateAllBoosterMeshesInLevel();
	void UpdateBoosterMeshes();
	void UserConstructionScript();

	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_GrindRail_C">();
	}
	static class ABGA_GrindRail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_GrindRail_C>();
	}
};

}


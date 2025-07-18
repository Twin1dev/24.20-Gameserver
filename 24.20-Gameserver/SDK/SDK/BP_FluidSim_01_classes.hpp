﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidSim_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FluidBoundary_structs.hpp"
#include "FluidForceDynamicPerInstanceData_structs.hpp"
#include "FluidForceImpulsePerInstanceData_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluidSim_01.BP_FluidSim_01_C
// 0x02E0 (0x0568 - 0x0288)
class ABP_FluidSim_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DebugPlane;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RippleSimMID;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RenderNormalsMID;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DisplayMID;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DisplayBottomMID;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CrossSectionMID;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextureRenderTarget2D*>         RippleRTs;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible)
	class UMaterialInterface*                     Display_Material;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Virtual_FPS;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Passes;                                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimeAccumulator;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FixedStep;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enabled;                                           // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Fluid_Size;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Resolution;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFluidBoundary                                Boundary_Condition;                                // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Travel_Speed;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Damping;                                           // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 NormalRT;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CutPos;                                            // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLoc;                                           // 0x0348(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrecLoc2;                                          // 0x0360(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevOffset;                                        // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevOffset2;                                       // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GridCenter;                                        // 0x03A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 TempRT;                                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 ForcesRT;                                          // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ApplyForces;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALandscapeWaterInfo_C*                  LandscapeWaterInfo;                                // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Renders_Per_Frame;                                 // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Cross_Section;                                // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Perf_Test_Mode;                                    // 0x03E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6[0x2];                                      // 0x03E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 PerfRT;                                            // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFluidForceImpulsePerInstanceData> ImpulseForces;                                  // 0x03F0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> DynamicForces;            // 0x0400(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	TMap<class UMaterialInterface*, class UMaterialInstanceDynamic*> ForceParentAndMIDMap;           // 0x0450(0x0050)(Edit, BlueprintVisible)
	bool                                          Show_Simulation_Mesh;                              // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1[0x7];                                      // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Fluid_Display_Mesh;                                // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cross_Section_Mesh;                                // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        FluidSizeSquared;                                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalPawnRef;                                      // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_Text;                                        // 0x04C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C2[0x2];                                      // 0x04C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Pawn_Check_Every_N_Frames;                         // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> ProjectileForces;         // 0x04C8(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Follow_Player_;                                    // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x3];                                      // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Frames_Since_Last_Active_Force;                    // 0x051C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Terrain_Water_System;                          // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521[0x7];                                      // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               PhysicsForceMID;                                   // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Physics_Forces;                                // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531[0x7];                                      // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               WaterVelocityTexture;                              // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateForcesInFixedTimeStep;                       // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateSimInFixedTimeStep;                          // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateNormalInFixedTimeStep;                       // 0x0542(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDebugWaterPlane;                               // 0x0543(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DebugWaterPlaneMID;                                // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 DebugRippleRT1;                                    // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 DebugRippleRT2;                                    // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 DebugRippleRTCurrent;                              // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Allocate_RTs();
	void Apply_Fluid_Force_Impulse(const struct FFluidForceImpulse& Impulse_Settings);
	void Clear_RTs();
	void Clear_Sim_from_Waterbody_MIDs();
	void Convert_Force_Position(const struct FVector& Force_Location, double Sine_Bob, struct FVector* UV_Location);
	void Cycle_Render_Targets(class UTextureRenderTarget2D** Current_Target);
	void CycleDebugRenderTargets();
	void Draw_Dynamic_Force(class UCanvas*& Canvas, struct FVector2D& Canvas_Size, struct FFluidForceDynamicPerInstanceData& Dynamic_Force_Settings);
	void Draw_Impulse_Force(class UCanvas* Canvas, const struct FVector2D& Canvas_Size, const struct FFluidForceImpulsePerInstanceData& Impulse_Settings);
	void ExecuteUbergraph_BP_FluidSim_01(int32 EntryPoint);
	void FluidGridDebug();
	void Get_Force_MID(class UMaterialInterface*& Parent, class UMaterialInstanceDynamic** Mid);
	void Get_Frames_Since_Last_Active_Forces();
	void Get_LandscapeWaterInfo();
	void GetLocalPawn(class APawn** Pawn);
	void GetPlayerPawnForces();
	void GridMovement();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReCheckScalability();
	void Register_Dynamic_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component, double WaterLevel);
	void Register_Projectile_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component);
	void Release_RTs();
	void Remove_Dynamic_Force(class UActorComponent* Component);
	void Remove_Projectile_Force(class UActorComponent* Component);
	void Set_Waterbody_MID_Params();
	void SetAllSimParamsInFixedTimeStep(bool Bool);
	void SetDebugForcesRT();
	void SetDebugNormalRT();
	void SetDebugRippleRT1();
	void SetDebugRippleRT2();
	void SetDebugRippleRTCurrent();
	void SetNormalInFixedTimeStep(bool Bool);
	void SetShowDebugWaterPlane(bool IsVisible);
	void SetSimInFixedTimeStep(bool Bool);
	void SetUpdateForcesInFixedTimeStep(bool Bool);
	void SetupDisplayMIDs();
	void SetupSimMIDs();
	void Update_Dynamic_Forces();
	void Update_Impulse_Lifetimes();
	void UserConstructionScript();
	void Validate_RTs(bool* RTs_All_Valid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidSim_01_C">();
	}
	static class ABP_FluidSim_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FluidSim_01_C>();
	}
};

}


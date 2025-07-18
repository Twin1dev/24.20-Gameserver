﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AttachableWheelsRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AttachableWheelsRuntime_structs.hpp"


namespace SDK
{

// Class AttachableWheelsRuntime.AttachableWheel
// 0x0088 (0x0310 - 0x0288)
class AAttachableWheel final : public AActor
{
public:
	class UStaticMeshComponent*                   WheelMeshComponent;                                // 0x0288(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                               WheelOrientation;                                  // 0x0290(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         WheelDistance;                                     // 0x02A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicsConstraintComponent*            AxleConstraint;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttachableWheelAttachData             AttachData;                                        // 0x02B8(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	bool AttachInPlace(class UPrimitiveComponent* InComponent);
	bool AttachTo(class UPrimitiveComponent* InComponent, const struct FVector& WorldLocation, const struct FVector& AxleDirection);
	void Detach();
	bool DetachFrom(class UPrimitiveComponent* InComponent);
	void OnAttached(class UPrimitiveComponent* AttachedComponent);
	void OnDetached(class UPrimitiveComponent* DetachedComponent);
	void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);
	void OnRep_AttachData(const struct FAttachableWheelAttachData& AttachDataPrev);

	void DrawDebug() const;
	class UPrimitiveComponent* GetAttachedComponent() const;
	bool GetWorldSpaceAttachData(struct FAttachableWheelAttachData* OutAttachData, class UPrimitiveComponent* PrimitiveComponent, const class FName BodyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AttachableWheel">();
	}
	static class AAttachableWheel* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAttachableWheel>();
	}
};

// Class AttachableWheelsRuntime.AttachableWheelsComponent
// 0x0050 (0x00F0 - 0x00A0)
class UAttachableWheelsComponent final : public UActorComponent
{
public:
	TSet<class AAttachableWheel*>                 AttachedWheels;                                    // 0x00A0(0x0050)(NativeAccessSpecifierPrivate)

public:
	int32 DetachAllWheels();
	bool HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel);
	bool HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel);
	void OnWheelAttached(class AAttachableWheel* AttachedWheel);
	void OnWheelDetached(class AAttachableWheel* AttachedWheel);

	void DrawDebug() const;
	class AAttachableWheel* GetAttachedWheelClosestOnAxis(const struct FVector& Point, float* OutClosetDistanceToAxis, struct FVector* OutClosestPointOnAxis, struct FVector* OutClosestAxis) const;
	TArray<class AAttachableWheel*> GetAttachedWheels() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AttachableWheelsComponent">();
	}
	static class UAttachableWheelsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttachableWheelsComponent>();
	}
};

}


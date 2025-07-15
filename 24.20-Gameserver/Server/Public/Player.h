#pragma once

#include "framework.h"

namespace Player
{
	inline __int64 (*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*);
	inline void (*GetPlayerViewPoint)(const AFortPlayerControllerAthena*, FVector&, FRotator&);
	inline void (*OnDamageServer)(ABuildingSMActor*, float, FGameplayTagContainer&, FVector&, FHitResult&, AController*, AActor*, FGameplayEffectContextHandle&);

	void ServerAcknowledgePossessionHook(AFortPlayerControllerAthena* PlayerController, APawn* P);
	void ServerAttemptAircraftJumpHook(const UFortControllerComponent_Aircraft* ControllerComponent, const FRotator& ClientRotation);
	void ServerExecuteInventoryItemHook(const AFortPlayerControllerAthena* PlayerController, const FGuid& ItemGuid);
	void GetPlayerViewPointHook(const AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation);
	void ServerCreateBuildingActorHook(AFortPlayerControllerAthena* PlayerController, const FCreateBuildingActorData& CreateBuildingData);

	void OnDamageServerHook(ABuildingSMActor* BuildingActor, float Damage, FGameplayTagContainer& DamageTags, FVector& Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle& EffectContext);

	void Hook();
}
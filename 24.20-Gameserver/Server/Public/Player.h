#pragma once

#include "framework.h"

namespace Player
{
	inline void (*GetPlayerViewPoint)(const AFortPlayerControllerAthena*, FVector&, FRotator&);

	void ServerAcknowledgePossessionHook(AFortPlayerControllerAthena* PlayerController, APawn* P);
	void ServerAttemptAircraftJumpHook(const UFortControllerComponent_Aircraft* ControllerComponent, const FRotator& ClientRotation);
	void ServerExecuteInventoryItemHook(const AFortPlayerControllerAthena* PlayerController, const FGuid& ItemGuid);
	void GetPlayerViewPointHook(const AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation);

	void Hook();
}
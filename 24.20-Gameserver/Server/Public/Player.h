#pragma once

#include "framework.h"

namespace Player
{
	void ServerAcknowledgePossessionHook(APlayerController* PlayerController, APawn* P);
	void ServerAttemptAircraftJumpHook(const UFortControllerComponent_Aircraft* ControllerComponent, const FRotator& ClientRotation);

	void Hook();
}
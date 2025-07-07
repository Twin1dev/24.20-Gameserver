#pragma once

#include "framework.h"

namespace Gamemode
{
	bool ReadyToStartMatchHook(AFortGameModeBR* GameMode);
	APawn* SpawnDefaultPawnFor(AGameMode* GameMode, AController* NewPlayer, AActor* StartSpot);
	void HandleNewSafeZonePhaseHook(AFortGameModeAthena* GameMode, int32 ZoneIndex);

	void Hook();
}
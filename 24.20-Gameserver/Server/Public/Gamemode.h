#pragma once

#include "framework.h"

namespace Gamemode
{
	inline void (*HandleStartingNewPlayer)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer);

	bool ReadyToStartMatchHook(AFortGameModeBR* GameMode);
	APawn* SpawnDefaultPawnFor(AGameMode* GameMode, AController* NewPlayer, AActor* StartSpot);
	void HandleNewSafeZonePhaseHook(AFortGameModeAthena* GameMode, int32 ZoneIndex);
	void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer);

	void Hook();
}
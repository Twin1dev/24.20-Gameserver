#pragma once

#include "framework.h"

namespace FortInventory
{
	FFortItemEntry* FindItemEntry(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition);
	FFortItemEntry* FindItemEntry(AFortPlayerController* PlayerController, FGuid Guid);
	UFortWorldItem* FindItemInstance(AFortPlayerController* PlayerController, FGuid ItemGuid);
	UFortWorldItem* FindItemInstance(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition);

	//UFortWorldItem* GiveItem(AFortPlayerControllerAthena* PlayerController, FFortItemEntry ItemEntry);
	UFortWorldItem* GiveItem(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, bool bStack = false, bool bShowToast = true);
	void RemoveItem(AFortPlayerControllerAthena* PlayerController, FGuid Guid, int Count);
	void RemoveAllItems(AFortPlayerController* PlayerController, bool bOnlyDroppable, bool bSpawnPickups);

	bool IsPrimaryQuickBar(UFortItemDefinition* ItemDefinition);

	void GiveStartingItems(AFortPlayerControllerAthena* PlayerController);

	void Update(AFortPlayerControllerAthena* PlayerController);
	void UpdateEntry(AFortPlayerControllerAthena* PlayerController, FFortItemEntry& ItemEntry);

	bool CanStackConsumable(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* ItemDefinition);
}
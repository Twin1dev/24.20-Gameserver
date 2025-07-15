#include "Server/Public/Gamemode.h"

#include "Server/Public/Util.h"
#include "Server/Public/Net.h"
#include "Server/Public/Abilities.h"

bool Gamemode::ReadyToStartMatchHook(AFortGameModeBR* GameMode)
{
	TArray<AActor*> PlayerStarts;
	UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &PlayerStarts);

	int Spots = PlayerStarts.Num();

	PlayerStarts.Clear();

	if (Spots == 0)
		return false;

	auto GameState = Cast<AFortGameStateBR>(GameMode->GameState);

	if (!GameState->MapInfo)
		return false;

	static bool bSetup = false;

	if (!bSetup)
	{
		bSetup = true;

		LOG("Hit RTSM!")

			auto Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");

		LOG("Playlist: {}", Playlist->GetName());

		GameMode->WarmupRequiredPlayerCount = 1;

		GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GameState->CurrentPlaylistInfo.MarkArrayDirty();

		GameMode->CurrentPlaylistId = Playlist->PlaylistId;
		GameMode->CurrentPlaylistName = Playlist->PlaylistName;

		GameMode->GameSession->MaxPlayers = 100;

		GameMode->PlaylistHotfixOriginalGCFrequency = Playlist->GarbageCollectionFrequency;

		GameState->AirCraftBehavior = Playlist->AirCraftBehavior;
		GameState->CachedSafeZoneStartUp = Playlist->SafeZoneStartUp;

		LOG("Warmup time: {}", GameMode->WarmupCountdownDuration);

		GameState->OnRep_CurrentPlaylistId();
		GameState->OnRep_CurrentPlaylistInfo();

		for (auto& AdditionLevel : Playlist->AdditionalLevels)
		{
			FAdditionalLevelStreamed NewLevel{};
			NewLevel.bIsServerOnly = false;
			NewLevel.LevelName = AdditionLevel.ObjectID.AssetPath.AssetName;

			bool bOutSuccess = false;
			ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), AdditionLevel, {}, {}, &bOutSuccess, FString(), nullptr, false);
			GameState->AdditionalPlaylistLevelsStreamed.Add(NewLevel);
		}

		for (auto& AdditionLevel : Playlist->AdditionalLevelsServerOnly)
		{
			FAdditionalLevelStreamed NewLevel{};
			NewLevel.bIsServerOnly = true;
			NewLevel.LevelName = AdditionLevel.ObjectID.AssetPath.AssetName;

			bool bOutSuccess = false;
			ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), AdditionLevel, {}, {}, &bOutSuccess, FString(), nullptr, false);
			GameState->AdditionalPlaylistLevelsStreamed.Add(NewLevel);
		}

		GameState->OnRep_AdditionalPlaylistLevelsStreamed();

		auto URL = FURL();
		URL.Port = 7777;

		if (Net::Listen(UWorld::GetWorld(), URL))
			LOG("Listening on Port 7777");

		GameMode->DefaultPawnClass = Util::StaticFindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

		GameMode->bWorldIsReady = true;

		//*(uint8*)(Addresses::Base + 0x10670B08) = (uint8)GameState->GamePhase;

		SetConsoleTitleA("24.20 Gameserver | Listening");
	}

	if (!UWorld::GetWorld()->NetDriver)
		return false;

	return GameMode->AlivePlayers.Num() > 0;
}

APawn* Gamemode::SpawnDefaultPawnFor(AGameMode* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	return GameMode->SpawnDefaultPawnAtTransform(NewPlayer, StartSpot->GetTransform());
}

void Gamemode::HandleNewSafeZonePhaseHook(AFortGameModeAthena* GameMode, int32 ZoneIndex)
{
	
}

void Gamemode::HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
{
	auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	if (!PlayerState)
		return HandleStartingNewPlayer(GameMode, NewPlayer);

	Abilities::GiveDefaultAbilitySet(PlayerState->AbilitySystemComponent);



	return HandleStartingNewPlayer(GameMode, NewPlayer);
}

void Gamemode::Hook()
{
	auto Gamemode__VTable = AFortGameModeBR::GetDefaultObj()->VTable;

	THook(SpawnDefaultPawnFor, nullptr).VFT(Gamemode__VTable, 0xE2);
	THook(ReadyToStartMatchHook, nullptr).VFT(Gamemode__VTable, 0x120);
	//THook(HandleNewSafeZonePhaseHook, nullptr).MinHook(0x9919130);
	THook(HandleStartingNewPlayerHook, &HandleStartingNewPlayer).VFT(Gamemode__VTable, 0xe8);
}
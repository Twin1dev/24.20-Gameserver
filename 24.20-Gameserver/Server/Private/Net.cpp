#include "Server/Public/Net.h"

#include "Server/Public/Util.h"
#include "Server/Public/Addresses.h"
#include <algorithm>
#include <random>

float FRand()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);
	float random_number = dis(gen);

	return random_number;
}

#define INV_PI			(0.31830988618f)
#define HALF_PI			(1.57079632679f)
#define PI 					(3.1415926535897932f)

inline void SinCos(float* ScalarSin, float* ScalarCos, float  Value)
{
	// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
	float quotient = (INV_PI * 0.5f) * Value;
	if (Value >= 0.0f)
	{
		quotient = (float)((int)(quotient + 0.5f));
	}
	else
	{
		quotient = (float)((int)(quotient - 0.5f));
	}
	float y = Value - (2.0f * PI) * quotient;

	// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
	float sign;
	if (y > HALF_PI)
	{
		y = PI - y;
		sign = -1.0f;
	}
	else if (y < -HALF_PI)
	{
		y = -PI - y;
		sign = -1.0f;
	}
	else
	{
		sign = +1.0f;
	}

	float y2 = y * y;

	// 11-degree minimax approximation
	*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

	// 10-degree minimax approximation
	float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
	*ScalarCos = sign * p;
}

inline FVector RotatorToVector(FRotator Rotator)
{
	float CP, SP, CY, SY;

	SinCos(&SP, &CP, Rotator.Pitch * (PI / 180.0f));
	SinCos(&SY, &CY, Rotator.Yaw * (PI / 180.0f));

	FVector NewV = FVector(CP * CY, CP * SY, SP);

	return NewV;
}

void SendClientAdjustment(APlayerController* PlayerController)
{
	static auto SendClientAdjustment = (void(*)(APlayerController*))(InSDKUtils::GetImageBase()  + 0x80B4948);
	SendClientAdjustment(PlayerController);
}


// my best attempt at replicating the unreal engine impl
int32 Net::Replication::ServerReplicateActors(UNetDriver* NetDriver, float DeltaSeconds)
{
	static bool bFirstCall = false;

	if (!bFirstCall)
	{
		bFirstCall = true;
		LOG("ServerReplicateActors Called!");
	}

	++(*(int*)(__int64(NetDriver) + ReplicationOffsets::ReplicationFrame));

	int32 Updated = 0;

	const int32 NumClientsToTick = ServerReplicateActors_PrepConnections(NetDriver, DeltaSeconds);

	if (NumClientsToTick == 0)
	{
		//Framework::Log("Returning 0 cuz ServerReplicateActors_PrepConnections");
		// No connections are ready this frame
		return 0;
	}

	float ServerTickTime = 30.f;

	auto NetworkObjectList = *(*(TSharedPtr<FNetworkObjectList>*)(__int64(NetDriver) + ReplicationOffsets::NetworkObjectList));

	ServerTickTime = 1.f / ServerTickTime; // 0.3

	std::vector<FNetworkObjectInfo*> ConsiderList;
	ConsiderList.reserve(NetworkObjectList.ActiveNetworkObjects.Num());

	float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());

	ServerReplicateActors_BuildConsiderList(NetDriver, ConsiderList, ServerTickTime);


	for (int32 i = 0; i < NetDriver->ClientConnections.Num(); i++)
	{
		UNetConnection* Connection = NetDriver->ClientConnections[i];

		if (!Connection)
			continue;

		// todo
		if (i >= NumClientsToTick)
			continue;

		if (!Connection->ViewTarget)
			continue;

		if (Connection->PlayerController)
		{
			SendClientAdjustment(Connection->PlayerController);
		}

		for (auto& ActorInfo : ConsiderList)
		{
			if (!ActorInfo || !ActorInfo->Actor)
				continue;

			AActor* Actor = ActorInfo->Actor;

			UActorChannel* ActorChannel = nullptr;

			for (int i = 0; i < Connection->OpenChannels.Num(); i++)
			{
				auto Channel = Connection->OpenChannels[i];

				if (!Channel)
					continue;

				if (!Channel->IsA(UActorChannel::StaticClass()))
					continue;

				if (((UActorChannel*)Channel)->Actor != Actor)
					continue;

				ActorChannel = (UActorChannel*)Channel;
			}

			std::vector<FNetViewer> ConnectionViewers;

			FNetViewer NewViewer{};
			NewViewer.Connection = Connection;
			NewViewer.InViewer = Connection->PlayerController ? Connection->PlayerController : Connection->OwningActor;
			NewViewer.ViewTarget = Connection->ViewTarget;
			NewViewer.ViewLocation = NewViewer.ViewTarget->K2_GetActorLocation();

			if (!Connection->OwningActor || !(!Connection->PlayerController || (Connection->PlayerController == Connection->OwningActor)))
			{
				// do smth
			}
			else
			{
				FRotator ViewRotation = Connection->PlayerController->ControlRotation;
				Connection->PlayerController->GetActorEyesViewPoint(&NewViewer.ViewLocation, &ViewRotation);

				NewViewer.ViewDir = RotatorToVector(ViewRotation);

				//Framework::Log("PlayerController");
			}

			ConnectionViewers.push_back(NewViewer);

			bool bLevelInitializedForActor = true;

			if (!ActorChannel && !bLevelInitializedForActor)
			{
				continue;
			}

			if (!Actor->bAlwaysRelevant && !Actor->bNetUseOwnerRelevancy && !Actor->bOnlyRelevantToOwner)
			{
				if (Connection && Connection->ViewTarget)
				{
					if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
					{
						if (ActorChannel)
							ActorChannelClose(ActorChannel, EChannelCloseReason::Relevancy);

						continue;
					}
				}
			}

			if (!ActorChannel)
			{
				if (Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController)
					continue;

				if (bLevelInitializedForActor)
				{
					static auto ActorFName = (FName*)(InSDKUtils::GetImageBase() + 0x108145d8);

					ActorChannel = (UActorChannel*)CreateChannelByName(Connection, ActorFName, EChannelCreateFlags::OpenedLocally, -1);

					if (ActorChannel)
					{
						SetChannelActor(ActorChannel, Actor);
					}
				}
				else if (Actor->NetUpdateFrequency < 1.0f)
				{
					ActorInfo->NextUpdateTime = TimeSeconds + 0.2f * FRand();
				}
			}

			if (ActorChannel)
			{
				if (ReplicateActor(ActorChannel))
				{
					auto TimeSeconds = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld());
					const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
					const float MaxOptimalDelta = max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
					const float DeltaBetweenReplications = (TimeSeconds - ActorInfo->LastNetReplicateTime);

					ActorInfo->OptimalNetUpdateDelta = std::clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
					ActorInfo->LastNetUpdateTime = TimeSeconds;
				}
			}
		}
	}

	return Updated;
}

int32 Net::Replication::ServerReplicateActors_PrepConnections(UNetDriver* NetDriver, float DeltaSeconds)
{
	int32 NumClientsToTick = NetDriver->ClientConnections.Num();

	// Skip all the random FParam parsing bs cuz that never happens in any context for fortnite!

	bool bFoundReadyConnection = false;

	for (int32 ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
	{
		UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];

		AActor* OwningActor = Connection->OwningActor;

		if (OwningActor)
		{
			bFoundReadyConnection = true;

			AActor* DesiredViewTarget = OwningActor;

			if (Connection->PlayerController)
			{
				if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
				{
					DesiredViewTarget = ViewTarget;
				}
			}

			Connection->ViewTarget = DesiredViewTarget;
		}
		else
		{
			Connection->ViewTarget = nullptr;
		}
	}

	return bFoundReadyConnection ? NumClientsToTick : 0;
}

void Net::Replication::ServerReplicateActors_BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList, float ServerTickTime)
{
	auto World = UWorld::GetWorld();

	std::vector<AActor*> ActorsToRemove;

	auto Beans = *(*(TSharedPtr<FNetworkObjectList>*)(__int64(NetDriver) + ReplicationOffsets::NetworkObjectList));

	auto& ActiveObjects = Beans.ActiveNetworkObjects;

	float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(World);

	for (const TSharedPtr<FNetworkObjectInfo>& ActorInfo : ActiveObjects)
	{
		if (!ActorInfo->bPendingNetUpdate && TimeSeconds <= ActorInfo->NextUpdateTime)
		{
			continue;
		}

		AActor* Actor = ActorInfo->Actor;

		if (Actor->RemoteRole == ENetRole::ROLE_None)
		{
			ActorsToRemove.push_back(Actor);
			continue;
		}

		if ((Actor->NetDormancy == ENetDormancy::DORM_Initial))
		{
			continue;
		}

		if (ActorInfo->LastNetReplicateTime == 0)
		{
			ActorInfo->LastNetReplicateTime = TimeSeconds;
			ActorInfo->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
		}

		const float ScaleDownStartTime = 2.0f;
		const float ScaleDownTimeRange = 5.0f;

		const float LastReplicateDelta = TimeSeconds - ActorInfo->LastNetReplicateTime;

		if (LastReplicateDelta > ScaleDownStartTime)
		{
			if (Actor->MinNetUpdateFrequency == 0.0f)
			{
				Actor->MinNetUpdateFrequency = 2.0f;
			}

			const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
			const float MaxOptimalDelta = max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);

			const float Alpha = std::clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f);
			ActorInfo->OptimalNetUpdateDelta = std::lerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
		}

		if (!ActorInfo->bPendingNetUpdate)
		{
			const bool bUseAdapativeNetFrequency = false;

			const float NextUpdateDelta = bUseAdapativeNetFrequency ? ActorInfo->OptimalNetUpdateDelta : 1.0f / Actor->NetUpdateFrequency;

			ActorInfo->NextUpdateTime = TimeSeconds + FRand() * ServerTickTime + NextUpdateDelta;

			ActorInfo->LastNetUpdateTime = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld());
		}

		ActorInfo->bPendingNetUpdate = false;

		OutConsiderList.push_back(ActorInfo.Get());

		CallPreReplication(Actor, NetDriver);
	}

	for (auto Actor : ActorsToRemove)
	{
		// todo
	}
}

int32 Net::Replication::ServerReplicateActors_PrioritizeActors(UNetDriver* NetDriver, UNetConnection* Connection, std::vector<FNetViewer>& ConnectionViewers, std::vector<FNetworkObjectInfo*> ConsiderList)
{
	return 0;
}

bool Net::Replication::IsActorRelevantToConnection(AActor* Actor, std::vector<FNetViewer>& ConnectionViewers)
{
	for (int32 ViewerIdx = 0; ViewerIdx < ConnectionViewers.size(); ViewerIdx++)
	{
		if (!ConnectionViewers[ViewerIdx].ViewTarget)
			continue;

		bool (*IsNetRelevantFor)(AActor*, AActor*, AActor*, FVector&) = decltype(IsNetRelevantFor)(Actor->VTable[ReplicationOffsets::IsNetRelevantForVft]);

		if (IsNetRelevantFor(Actor, ConnectionViewers[ViewerIdx].InViewer, ConnectionViewers[ViewerIdx].ViewTarget, ConnectionViewers[ViewerIdx].ViewLocation))
			return true;
	}

	return false;
}


void Net::TickFlushHook(UNetDriver* NetDriver, float DeltaTime)
{
	if (NetDriver->ClientConnections.Num() > 0)
		Replication::ServerReplicateActors(NetDriver, DeltaTime);

	return TickFlush(NetDriver, DeltaTime);
}

bool Net::Listen(UWorld* World, FURL& InURL)
{
	// TODO: LevelCollections

	if (World->NetDriver)
		return false;

	static FName GameNetDriver = UKismetStringLibrary::Conv_StringToName(L"GameNetDriver");

	auto context = sub_DAE464(int64(UEngine::GetEngine()), int64(World));
	if (!context) { LOG("Failed to get context for NetDriver") context = (int64)World; }

	UNetDriver* NetDriver = CreateNetDriver(UFortEngine::GetEngine(), context, GameNetDriver);
	if (!NetDriver) { LOG("Failed to create NetDriver") return false; }

	NetDriver->NetDriverName = GameNetDriver;
	NetDriver->World = World;

	FString Error;

	if (!InitListen(NetDriver, World, InURL, false, Error))
		return false;

	SetWorld(NetDriver, World);

	World->NetDriver = NetDriver;

	for (FLevelCollection& LevelCollection : World->LevelCollections)
	{
		LevelCollection.NetDriver = NetDriver;
	}

	bIsListening = true;

	return true;
}



void Net::Hook()
{
	Replication::CallPreReplication = decltype(Replication::CallPreReplication)(ReplicationOffsets::CallPreReplication);
	Replication::ActorChannelClose = decltype(Replication::ActorChannelClose)(ReplicationOffsets::CloseActorChannel);
	Replication::CreateChannelByName = decltype(Replication::CreateChannelByName)(ReplicationOffsets::CreateChannelByName);
	Replication::SetChannelActor = decltype(Replication::SetChannelActor)(ReplicationOffsets::SetChannelActor);
	Replication::ReplicateActor = decltype(Replication::ReplicateActor)(ReplicationOffsets::ReplicateActor);

	CreateNetDriver = decltype(CreateNetDriver)(Addresses::BaseAddress + Addresses::CreateNetDriver);
	SetWorld = decltype(SetWorld)(Addresses::BaseAddress + Addresses::SetWorld);
	InitListen = decltype(InitListen)(Addresses::BaseAddress + Addresses::InitListen);
	sub_DAE464 = decltype(sub_DAE464)(Addresses::BaseAddress + 0xda992c);

	THook(TickFlushHook, &TickFlush).MinHook(Addresses::TickFlush);
	THook(GetNetMode, nullptr).MinHook(Addresses::WorldNetMode);
}

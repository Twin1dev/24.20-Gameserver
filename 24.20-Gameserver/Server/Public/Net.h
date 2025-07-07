#pragma once

#include "framework.h"

namespace Net
{
	namespace Replication
	{
		template< class ObjectType>
		class TSharedPtr
		{
		public:
			ObjectType* Object;

			int32 SharedReferenceCount;
			int32 WeakReferenceCount;

			FORCEINLINE ObjectType* Get()
			{
				return Object;
			}
			FORCEINLINE ObjectType* Get() const
			{
				return Object;
			}
			FORCEINLINE ObjectType& operator*()
			{
				return *Object;
			}
			FORCEINLINE const ObjectType& operator*() const
			{
				return *Object;
			}
			FORCEINLINE ObjectType* operator->()
			{
				return Object;
			}
			FORCEINLINE ObjectType* operator->() const
			{
				return Object;
			}
		};

		enum class EChannelCreateFlags : uint32_t
		{
			None = (1 << 0),
			OpenedLocally = (1 << 1)
		};

		enum class EChannelCloseReason : uint8
		{
			Destroyed,
			Dormancy,
			LevelUnloaded,
			Relevancy,
			TearOff,
			/* reserved */
			MAX = 15		// this value is used for serialization, modifying it may require a network version change
		};

		inline void (*CallPreReplication)(AActor*, UNetDriver*);
		inline bool (*ClientHasInitializedLevelFor)(const UNetConnection* Connection, const AActor* TestActor);
		inline void (*ActorChannelClose)(UActorChannel*, EChannelCloseReason);
		inline UObject* (*CreateChannelByName)(UNetConnection* Connection, FName* ChName, EChannelCreateFlags CreateFlags, int32_t ChannelIndex);
		inline __int64 (*SetChannelActor)(UActorChannel*, AActor*);
		inline __int64 (*ReplicateActor)(UActorChannel*);

		struct FNetworkObjectInfo
		{
			/** Pointer to the replicated actor. */
			AActor* Actor;

			/** WeakPtr to actor. This is cached here to prevent constantly constructing one when needed for (things like) keys in TMaps/TSets */
			TWeakObjectPtr<AActor> WeakActor;

			/** Next time to consider replicating the actor. Based on FPlatformTime::Seconds(). */
			double NextUpdateTime;

			/** Last absolute time in seconds since actor actually sent something during replication */
			double LastNetReplicateTime;

			/** Optimal delta between replication updates based on how frequently actor properties are actually changing */
			float OptimalNetUpdateDelta;

			/** Last time this actor was updated for replication via NextUpdateTime
			* @warning: internal net driver time, not related to WorldSettings.TimeSeconds */
			float LastNetUpdateTime;

			/** Is this object still pending a full net update due to clients that weren't able to replicate the actor at the time of LastNetUpdateTime */
			uint32 bPendingNetUpdate : 1;

			/** Force this object to be considered relevant for at least one update */
			uint32 bForceRelevantNextUpdate : 1;

			/** List of connections that this actor is dormant on */
			TSet<TWeakObjectPtr<UNetConnection>> DormantConnections;
			TSet<TWeakObjectPtr<UNetConnection>> RecentlyDormantConnections;
		};

		class FNetworkObjectList
		{
		public:
			typedef TSet<TSharedPtr<FNetworkObjectInfo>> FNetworkObjectSet;

			FNetworkObjectSet AllNetworkObjects;
			FNetworkObjectSet ActiveNetworkObjects;
			FNetworkObjectSet ObjectsDormantOnAllConnections;

			TMap<TWeakObjectPtr<UNetConnection>, int32> NumDormantObjectsPerConnection;

			void Remove(AActor* const Actor);
		};




		int32 ServerReplicateActors(UNetDriver* NetDriver, float DeltaSeconds);
		int32 ServerReplicateActors_PrepConnections(UNetDriver* NetDriver, float DeltaSeconds);
		void ServerReplicateActors_BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList, float ServerTickTime);
		int32 ServerReplicateActors_PrioritizeActors(UNetDriver* NetDriver, UNetConnection* Connection, std::vector<FNetViewer>& ConnectionViewers, std::vector<FNetworkObjectInfo*> ConsiderList);

		bool IsActorRelevantToConnection(AActor* Actor, std::vector<FNetViewer>& ConnectionViewers);
	}

    inline void (*SetWorld)(UNetDriver*, UWorld*);
    inline bool (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&);
    inline __int64 (*sub_DAE464)(__int64 a1, __int64 a2);
    inline UNetDriver* (*CreateNetDriver)(UEngine*, int64, FName);

    enum ENetMode
    {
        NM_Standalone,
        NM_DedicatedServer,
        NM_ListenServer,
        NM_Client,
        NM_MAX,
    };

    inline ENetMode GetNetMode() { return ENetMode::NM_DedicatedServer; }

    inline void (*TickFlush)(UNetDriver*, float DeltaTime);

    void TickFlushHook(UNetDriver* NetDriver, float DeltaTime);
    bool Listen(UWorld* World, FURL& InUrl);

    void Hook();
}
#pragma once

#include "framework.h"

namespace Addresses
{
    inline uintptr_t BaseAddress = 0x0;

    constexpr uint64_t SetWorld = 0x17fbc64;
    constexpr uint64_t InitListen = 0x87de160;
    constexpr uint64_t CreateNetDriver = 0x23c7b34;
    constexpr uint64_t ChangeGameSessionId = 0x1638670;
    constexpr uint64_t TickFlush = 0x1090880;
    constexpr uint64_t GIsClient = 0x105128b3;
    constexpr uint64_t GIsServer = 0x105128B4;
    constexpr uint64_t GetMaxTickRate = 0xfdee80;
    constexpr uint64_t WorldNetMode = 0x1172c6c;
    constexpr uint64_t DispatchRequest = 0x1cba3c0;
    constexpr uint64_t ApplyCharacterCustomization = 0x1fbb290;
    constexpr uint64_t InternalTryActivateAbility = 0x858b5f8;
    constexpr uint64_t StaticLoadObject = 0x137c998;
    constexpr uint64_t StaticFindObject = 0xee6bc0;
    constexpr uint64_t InternalGiveAbility = 0x858A458;
    constexpr uint64_t SpecConstructor = 0x8577A3C;
    constexpr uint64_t HandleNewSafeZonePhase = 0x4799688;
    constexpr uint64_t SpawnActor = 0xE2A6FC;
    constexpr uint64_t OnDamageServer = 0x9C2879C;
    constexpr uint64_t GetPlayerViewPoint = 0xd4e130;
    constexpr uint64_t SpawnLoot = 0x498C198;
    constexpr uint64_t CompletePickupAnimation = 0x1ba62b4;
    constexpr uint64_t ClientOnPawnDied = 0x53b4a78;
    constexpr uint64_t ServerRemoveItem = 0x4EFA514;
    constexpr uint64_t PostUpdate = 0x49A8B44;
    constexpr uint64_t GiveAbilityAndActivateOnce = 0x389156C;
    constexpr uint64_t OnAircraftEnteredDropZone = 0x4780D4C;
    constexpr uint64_t MovingEmoteStopped = 0x20969E8;
    constexpr uint64_t ConnectionClose = 0x176F728;
    constexpr uint64_t EnterAircraft = 0x4A3DF8F;
    constexpr uint64_t CharacterMovementServerMove = 0x60E2614;
    constexpr uint64_t DontKnow = 0x60E3210;
    constexpr uint64_t PickTeam = 0x4785400;
    constexpr uint64_t SetGameMode = 0x126721C;
    constexpr uint64_t GetGameSessionClass = 0x178D570;
    constexpr uint64_t GetServicePermissions = 0x15A49B8;
    constexpr uint64_t OnPlayImpactFX = 0xFC819C;
    constexpr uint64_t CantBuild = 0xA0D0A24;
    constexpr uint64_t ReplaceBuildingActor = 0x9CB8FD8;
    constexpr uint64_t RemoveFromAlivePlayers = 0x478b2e0;
    constexpr uint64_t OnRep_ZiplineState = 0x4EB6DD0;
    constexpr uint64_t SendCustomStatEvent = 0x4F66430;
    constexpr uint64_t SpawnPlayerCameraManager = 0x1996A30;
}

class ReplicationOffsets {
public:
    static inline uint32 TimeSeconds = 0x6a8;
    static inline uint32 ReplicationFrame = 0x438;
    static inline uint32 NetworkObjectList = 0x730;
    static inline uint32 ElapsedTime = 0x230;
    static inline uint32 RelevantTime = 0x78;
    static inline uint32 NetTag = 0x2f4;
    static inline uint32 DestroyedStartupOrDormantActorGUIDs = 0x14b0;
    static inline uint32 DestroyedStartupOrDormantActors = 0x2f8;
    static inline uint32 LastProcessedFrame = 0x208;
    static inline uint32 ClientVisibleLevelNames = 0x1690;
    static inline uint32 ClientWorldPackageName = 0x16b8;
    static inline uint32 RepContextActor = 0x1d58;
    static inline uint32 RepContextLevel = 0x1d60;
    static inline uint32 GuidCache = 0x160;
    static inline uint32 PendingCloseDueToReplicationFailure = 0x1cbe;
    static inline uint32 ServerFrameInfo = 0x7fc;
    static inline uint32 State = 0x134;

    static inline uint32 IsNetRelevantForVft = 0x9e;
    static inline uint32 IsRelevancyOwnerForVft = 0xa0;
    static inline uint32 GetNetOwnerVft = 0xa4;

    static inline uint64 GetViewTarget;
    static inline uint64 CallPreReplication;
    static inline uint64 SendClientAdjustment;
    static inline uint64 CreateChannelByName;
    static inline uint64 SetChannelActor;
    static inline uint64 ReplicateActor;
    static inline uint64 RemoveNetworkActor;
    static inline uint64 ClientHasInitializedLevelFor;
    static inline uint64 FindActorChannelRef;
    static inline uint64 CloseActorChannel;
    static inline uint64 StartBecomingDormant;
    static inline uint64 SupportsObject;
    static inline uint64 GetArchetype;
    static inline uint64 IsNetReady;
    static inline uint64 CloseConnection;
    static inline uint64 SendDestructionInfo;

    static void Init()
    {
        GetViewTarget = Addresses::BaseAddress + 0xf094dc;
        CallPreReplication = Addresses::BaseAddress + 0x7cf1a90;
        SendClientAdjustment = Addresses::BaseAddress + 0x7dd856c;
        CreateChannelByName = Addresses::BaseAddress + 0x1095e20;
        SetChannelActor = Addresses::BaseAddress + 0x55d8688;
        ReplicateActor = Addresses::BaseAddress + 0x7e3e934;
        RemoveNetworkActor = Addresses::BaseAddress + 0x117906c;
        ClientHasInitializedLevelFor = Addresses::BaseAddress + 0x7fbb170;
        FindActorChannelRef = Addresses::BaseAddress + 0x6dd3838;
        CloseActorChannel = Addresses::BaseAddress + 0x7e3190c;
        StartBecomingDormant = Addresses::BaseAddress + 0x7e41fb8;
        SupportsObject = Addresses::BaseAddress + 0xfc76a0;
        GetArchetype = Addresses::BaseAddress + 0xdacc40;
        IsNetReady = Addresses::BaseAddress + 0x7fc3f04;
        CloseConnection = Addresses::BaseAddress + 0x17fb490;
        SendDestructionInfo = Addresses::BaseAddress + 0x7fcb518;
    }
};
#include "framework.h"

#include "Server/Public/Addresses.h"
#include "Server/Public/Util.h"
#include "Server/Public/Net.h"
#include "Server/Public/Gamemode.h"
#include "Server/Public/Player.h"

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();

    FILE* f;
    freopen_s(&f, "CONOUT$", "w+", stdout);

    Sleep(5000);

    SetConsoleTitleA("24.20 Gameserver");

    Addresses::BaseAddress = InSDKUtils::GetImageBase();

    THook::Init();

    Util::Null(Addresses::BaseAddress + 0x1F02160);
    Util::Null(Addresses::BaseAddress + 0x31C19D4);
    Util::Null(Addresses::BaseAddress + 0x1A967CC);
    Util::Null(Addresses::BaseAddress + 0x1A774A4);
    Util::Null(Addresses::BaseAddress + 0x1BBE214);
    Util::Null(Addresses::BaseAddress + 0x1D29A20);
    Util::Null(Addresses::BaseAddress + 0x22FC2EC);
    Util::Null(Addresses::BaseAddress + 0x2A6EBB8);
    Util::Null(Addresses::BaseAddress + 0x1B36978);
    Util::Null(Addresses::BaseAddress + 0x1689848);
    Util::Null(Addresses::BaseAddress + 0x20CD178);
    Util::Null(Addresses::BaseAddress + 0x1D841B4);
    Util::Null(Addresses::BaseAddress + 0x2E32CC8);
    Util::Null(Addresses::BaseAddress + 0x2C56DCC);
    Util::Null(Addresses::BaseAddress + 0x1B33C7C);
    Util::Null(Addresses::BaseAddress + 0x205C1C0);
    Util::Null(Addresses::BaseAddress + 0x2AB6CD0);
    Util::Null(Addresses::BaseAddress + 0x2B562E8);
    Util::Null(Addresses::BaseAddress + 0x298FFB0);
    Util::Null(Addresses::BaseAddress + 0x1D27130);
    Util::Null(Addresses::BaseAddress + 0x14B7CE8);

    THook(THook::RetFalse, nullptr).MinHook(0x1903AD4);
    THook(THook::RetTrue, nullptr).MinHook(0x99ACF70);
    THook(THook::RetTrue, nullptr).MinHook(0xABEB8A4);
    THook(THook::RetTrue, nullptr).MinHook(0x853F4F8);

    ReplicationOffsets::Init();

    Net::Hook();
    Gamemode::Hook();
    Player::Hook();

    THook(Util::DispatchRequestHook, &Util::DispatchRequest).MinHook(Addresses::DispatchRequest);

    MH_EnableHook(MH_ALL_HOOKS);

    *(bool*)(Addresses::BaseAddress + Addresses::GIsClient) = false;
    *(bool*)(Addresses::BaseAddress + Addresses::GIsServer) = true;

    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), TEXT("log LogFortUIDirector off"), nullptr);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), TEXT("log LogNet off"), nullptr);

    UFortEngine::GetEngine()->GameInstance->LocalPlayers.Remove(0);

    UGameplayStatics::OpenLevel(UWorld::GetWorld(), UKismetStringLibrary::Conv_StringToName(L"Asteria_Terrain"), true, FString());

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        CreateThread(0, 0, Main, 0, 0, 0);
    }

    return TRUE;
}


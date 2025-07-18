﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UACCommon

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class UACCommon.UACNetworkComponent
// 0x0180 (0x0220 - 0x00A0)
class UUACNetworkComponent final : public UActorComponent
{
public:
	int32                                         PlayerId;                                          // 0x00A0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x17C];                                     // 0x00A4(0x017C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SendClientHello(uint32 SessionKey);
	void SendPacketToClient(uint8 EnhPacketType, const TArray<uint8>& Data);
	void SendPacketToServer(uint8 EnhPacketType, const TArray<uint8>& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UACNetworkComponent">();
	}
	static class UUACNetworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUACNetworkComponent>();
	}
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AndroidFileServer

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AndroidFileServer_structs.hpp"


namespace SDK
{

// Class AndroidFileServer.AndroidFileServerBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidFileServerBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static EAFSActiveType IsFileServerRunning();
	static bool StartFileServer(bool bUSB, bool bNetwork, int32 Port);
	static bool StopFileServer(bool bUSB, bool bNetwork);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndroidFileServerBPLibrary">();
	}
	static class UAndroidFileServerBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndroidFileServerBPLibrary>();
	}
};

}


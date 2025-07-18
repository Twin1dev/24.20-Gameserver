﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NaniteDisplacedMesh

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NaniteDisplacedMesh.NaniteDisplacedMeshDisplacementMap
// 0x0010 (0x0010 - 0x0000)
struct FNaniteDisplacedMeshDisplacementMap final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Magnitude;                                         // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Center;                                            // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NaniteDisplacedMesh.NaniteDisplacedMeshParams
// 0x0001 (0x0001 - 0x0000)
struct FNaniteDisplacedMeshParams final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


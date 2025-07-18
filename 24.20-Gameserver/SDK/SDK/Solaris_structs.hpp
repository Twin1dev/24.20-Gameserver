﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Solaris

#include "Basic.hpp"


namespace SDK
{

// Enum Solaris.EVerseDigestVariant
// NumValues: 0x0003
enum class EVerseDigestVariant : uint8
{
	PublicOnly                               = 0,
	PublicAndEpicInternal                    = 1,
	EVerseDigestVariant_MAX                  = 2,
};

// Enum Solaris.EVerseEnumFlags
// NumValues: 0x0003
enum class EVerseEnumFlags : uint32
{
	None                                     = 0,
	NativeBound                              = 1,
	EVerseEnumFlags_MAX                      = 2,
};

// Enum Solaris.EVersePackageScope
// NumValues: 0x0004
enum class EVersePackageScope : uint8
{
	InternalAPI                              = 0,
	PublicAPI                                = 1,
	User                                     = 2,
	EVersePackageScope_MAX                   = 3,
};

// Enum Solaris.EVersePackageType
// NumValues: 0x0004
enum class EVersePackageType : uint8
{
	VNI                                      = 0,
	Content                                  = 1,
	Assets                                   = 2,
	EVersePackageType_MAX                    = 3,
};

// ScriptStruct Solaris.VersePackageContainerSettings
// 0x0038 (0x0038 - 0x0000)
struct FVersePackageContainerSettings final
{
public:
	class FString                                 VersePath;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVersePackageScope                            VerseScope;                                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         DependencyPackages;                                // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 VniDestDir;                                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Solaris.VerseSourceFile
// 0x0020 (0x0020 - 0x0000)
struct FVerseSourceFile final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 Code;                                              // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Solaris.VersePackageContainer
// 0x0090 (0x0090 - 0x0000)
struct FVersePackageContainer final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DirPath;                                           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVersePackageType                             PackageType;                                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableVerseAssetReflection;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVersePackageContainerSettings         Settings;                                          // 0x0028(0x0038)(NativeAccessSpecifierPublic)
	TArray<struct FVerseSourceFile>               SourceFiles;                                       // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 AssetDigest;                                       // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         AssetDependencies;                                 // 0x0080(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Solaris.VerseProjectContainer
// 0x0010 (0x0010 - 0x0000)
struct FVerseProjectContainer final
{
public:
	TArray<struct FVersePackageContainer>         Packages;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Solaris.GenericElementType
// 0x0001 (0x0001 - 0x0000)
struct FGenericElementType final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Solaris.GenericKeyType
// 0x0001 (0x0001 - 0x0000)
struct FGenericKeyType final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Solaris.GenericValueType
// 0x0001 (0x0001 - 0x0000)
struct FGenericValueType final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelViewViewModel

#include "Basic.hpp"


namespace SDK
{

// Enum ModelViewViewModel.EMVVMExecutionMode
// NumValues: 0x0004
enum class EMVVMExecutionMode : uint8
{
	Immediate                                = 0,
	Delayed                                  = 1,
	Tick                                     = 2,
	EMVVMExecutionMode_MAX                   = 3,
};

// Enum ModelViewViewModel.EMVVMBindingMode
// NumValues: 0x0006
enum class EMVVMBindingMode : uint8
{
	OneTimeToDestination                     = 0,
	OneWayToDestination                      = 1,
	TwoWay                                   = 2,
	OneTimeToSource                          = 3,
	OneWayToSource                           = 4,
	EMVVMBindingMode_MAX                     = 5,
};

// ScriptStruct ModelViewViewModel.MVVMBindingName
// 0x0004 (0x0004 - 0x0000)
struct FMVVMBindingName final
{
public:
	class FName                                   BindingName;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMAvailableBinding
// 0x0008 (0x0008 - 0x0000)
struct FMVVMAvailableBinding final
{
public:
	struct FMVVMBindingName                       BindingName;                                       // 0x0000(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsReadable;                                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsWritable;                                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bHasNotify;                                        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMEventField
// 0x0001 (0x0001 - 0x0000)
struct FMVVMEventField final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMViewModelContext
// 0x0010 (0x0010 - 0x0000)
struct FMVVMViewModelContext final
{
public:
	TSubclassOf<class UMVVMViewModelBase>         ContextClass;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ContextName;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMViewModelContextInstance
// 0x0018 (0x0018 - 0x0000)
struct FMVVMViewModelContextInstance final
{
public:
	struct FMVVMViewModelContext                  Context;                                           // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	class UMVVMViewModelBase*                     Instance;                                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMViewSource
// 0x0018 (0x0018 - 0x0000)
struct FMVVMViewSource final
{
public:
	class UObject*                                Source;                                            // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SourceName;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RegisteredCout;                                    // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCreatedSource;                                    // 0x0010(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSetManually;                                      // 0x0011(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAssignedToUserWidgetProperty;                     // 0x0012(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledFields
// 0x0010 (0x0010 - 0x0000)
struct FMVVMVCompiledFields final
{
public:
	class UStruct*                                ClassOrScriptStruct;                               // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                         LibraryStartIndex;                                 // 0x0008(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                         NumberOfProperties;                                // 0x000A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                         NumberOfFunctions;                                 // 0x000C(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                         NumberOfFieldIds;                                  // 0x000E(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldPath
// 0x0004 (0x0004 - 0x0000)
struct FMVVMVCompiledFieldPath final
{
public:
	int16                                         StartIndex;                                        // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                         Num;                                               // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldId
// 0x0002 (0x0002 - 0x0000)
struct FMVVMVCompiledFieldId final
{
public:
	int16                                         FieldIdIndex;                                      // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
// 0x0004 (0x0004 - 0x0000)
struct FMVVMCompiledLoadedPropertyOrFunctionIndex final
{
public:
	int16                                         Index;                                             // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsObjectProperty : 1;                             // 0x0002(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bIsScriptStructProperty : 1;                       // 0x0002(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bIsProperty : 1;                                   // 0x0002(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledBinding
// 0x000C (0x000C - 0x0000)
struct FMVVMVCompiledBinding final
{
public:
	struct FMVVMVCompiledFieldPath                SourceFieldPath;                                   // 0x0000(0x0004)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath                DestinationFieldPath;                              // 0x0004(0x0004)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath                ConversionFunctionFieldPath;                       // 0x0008(0x0004)(NoDestructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMCompiledBindingLibrary
// 0x0060 (0x0060 - 0x0000)
struct FMVVMCompiledBindingLibrary final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFunction*>                      LoadedFunctions;                                   // 0x0010(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_20[0x10];                                      // 0x0020(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                            // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMVCompiledFields>           CompiledFields;                                    // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FName>                           CompiledFieldNames;                                // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct ModelViewViewModel.MVVMViewModelCollection
// 0x0028 (0x0028 - 0x0000)
struct FMVVMViewModelCollection final
{
public:
	TArray<struct FMVVMViewModelContextInstance>  ViewModelInstances;                                // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10[0x18];                                      // 0x0010(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMViewClass_SourceCreator
// 0x0030 (0x0030 - 0x0000)
struct FMVVMViewClass_SourceCreator final
{
public:
	TSubclassOf<class UObject>                    ExpectedSourceType;                                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMVVMViewModelContextResolver*          Resolver;                                          // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMVVMViewModelContext                  GlobalViewModelInstance;                           // 0x0010(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath                FieldPath;                                         // 0x0020(0x0004)(NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                   PropertyName;                                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bCreateInstance;                                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsUserWidgetProperty;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bOptional;                                         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ModelViewViewModel.MVVMViewClass_CompiledBinding
// 0x0018 (0x0018 - 0x0000)
struct FMVVMViewClass_CompiledBinding final
{
public:
	struct FMVVMVCompiledFieldId                  FieldId;                                           // 0x0000(0x0002)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourcePropertyName;                                // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledBinding                  Binding;                                           // 0x0008(0x000C)(NoDestructor, NativeAccessSpecifierPrivate)
	EMVVMExecutionMode                            ExecutionMode;                                     // 0x0014(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Flags;                                             // 0x0015(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


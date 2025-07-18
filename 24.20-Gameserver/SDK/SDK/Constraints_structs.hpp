﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Constraints

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum Constraints.EHandleEvent
// NumValues: 0x0004
enum class EHandleEvent : uint8
{
	LocalTransformUpdated                    = 0,
	GlobalTransformUpdated                   = 1,
	ComponentUpdated                         = 2,
	Max                                      = 3,
};

// ScriptStruct Constraints.MovieSceneConstraintChannel
// 0x0000 (0x0100 - 0x0100)
struct FMovieSceneConstraintChannel final : public FMovieSceneBoolChannel
{
};

// ScriptStruct Constraints.ConstraintAndActiveChannel
// 0x0130 (0x0130 - 0x0000)
struct FConstraintAndActiveChannel final
{
public:
	TSoftObjectPtr<class UTickableConstraint>     Constraint;                                        // 0x0000(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneConstraintChannel           ActiveChannel;                                     // 0x0028(0x0100)(NativeAccessSpecifierPublic)
	class UTickableConstraint*                    ConstraintCopyToSpawn;                             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Constraints.ConstraintTickFunction
// 0x0018 (0x0040 - 0x0028)
struct FConstraintTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


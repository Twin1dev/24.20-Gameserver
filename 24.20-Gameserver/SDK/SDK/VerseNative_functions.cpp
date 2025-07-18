﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseNative

#include "Basic.hpp"

#include "VerseNative_classes.hpp"
#include "VerseNative_parameters.hpp"


namespace SDK
{

// Function VerseNative.VerseStmLibrary.StmBegin
// (Final, Native, Static, Public)

void UVerseStmLibrary::StmBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseStmLibrary", "StmBegin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseNative.VerseStmLibrary.StmCommit
// (Final, Native, Static, Public)

void UVerseStmLibrary::StmCommit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseStmLibrary", "StmCommit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseNative.VerseStmLibrary.StmEnterFrame
// (Final, Native, Static, Public)

void UVerseStmLibrary::StmEnterFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseStmLibrary", "StmEnterFrame");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseNative.VerseStmLibrary.StmLeaveFrame
// (Final, Native, Static, Public)

void UVerseStmLibrary::StmLeaveFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseStmLibrary", "StmLeaveFrame");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseNative.VerseStmLibrary.StmRollback
// (Final, Native, Static, Public)

void UVerseStmLibrary::StmRollback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseStmLibrary", "StmRollback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VerseNative.VerseStmLibrary.StmSave
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// const struct FakeType&                  Property                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVerseStmLibrary::StmSave(const struct FakeType& Property)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseStmLibrary", "StmSave");

	Params::VerseStmLibrary_StmSave Parms{};

	Parms.Property = std::move(Property);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


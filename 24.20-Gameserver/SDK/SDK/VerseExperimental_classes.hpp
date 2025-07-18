﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseExperimental

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "VerseExperimental_structs.hpp"


namespace SDK
{

// VerseClass VerseExperimental.$SolarisSignatureFunctionOuter
// 0x0000 (0x0028 - 0x0028)
class VerseExperimental::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseExperimental.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseExperimental::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseExperimental::U_SolarisSignatureFunctionOuter>();
	}
};

// VerseClass VerseExperimental.VerseExperimental
// 0x0000 (0x0028 - 0x0028)
class UVerseExperimental final : public UObject
{
public:
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct Ftuple_Lint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax(const struct VerseExperimental::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin(const struct VerseExperimental::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R(const struct VerseExperimental::Ftuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_parts _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static EVerseExperimental_day_of_week _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static EVerseExperimental_month_of_year _L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_of_day_parts _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static int64 _L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R(const struct Ftuple_Lfloat_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R(const struct Ftuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R(const struct Ftuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R(const struct Ftuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_time_span _L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R(const struct Ftuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument);
	static FVerseStringProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static FVerseStringProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_time _L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow(const struct VerseExperimental::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument);
	static uint8 _L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	static struct FVerseExperimental_date_parts VerseExperimental_date_parts_Factory();
	static struct FVerseExperimental_date_time VerseExperimental_date_time_Factory();
	static struct FVerseExperimental_time_of_day_parts VerseExperimental_time_of_day_parts_Factory();
	static struct FVerseExperimental_time_span VerseExperimental_time_span_Factory();

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseExperimental">();
	}
	static class UVerseExperimental* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseExperimental>();
	}
};

// VerseClass VerseExperimental.VerseExperimental_date_time_ticks
// 0x0048 (0x0070 - 0x0028)
class UVerseExperimental_date_time_ticks final : public UObject
{
public:
	int64                                         __verse_0x8DE5F121_NanosecondsPerTick;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0x358147B9_TicksPerDay;                    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0x5C0949D3_TicksPerHour;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0x59DFB831_TicksPerMicrosecond;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0xD20E16AF_TicksPerMillisecond;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0x4420B794_TicksPerMinute;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0x3E0178E0_TicksPerSecond;                 // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0xA7911900_TicksPerWeek;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         __verse_0xE371C089_TicksPerYear;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseExperimental_date_time_ticks">();
	}
	static class UVerseExperimental_date_time_ticks* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseExperimental_date_time_ticks>();
	}
};

}


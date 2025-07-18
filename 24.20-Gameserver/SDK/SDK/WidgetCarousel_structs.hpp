﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WidgetCarousel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK
{

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x0538 (0x0540 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           InnerButtonStyle;                                  // 0x0010(0x03B0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                            NavigationButtonLeftImage;                         // 0x03C0(0x00C0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                            NavigationButtonRightImage;                        // 0x0480(0x00C0)(NativeAccessSpecifierPublic)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x0BD8 (0x0BE0 - 0x0008)
struct FWidgetCarouselNavigationBarStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            HighlightBrush;                                    // 0x0010(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           LeftButtonStyle;                                   // 0x00D0(0x03B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           CenterButtonStyle;                                 // 0x0480(0x03B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           RightButtonStyle;                                  // 0x0830(0x03B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


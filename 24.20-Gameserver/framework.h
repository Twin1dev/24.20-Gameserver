#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <iostream>
#include <cstdint>

#include "SDK/SDK.hpp"
using namespace SDK;

#include "Vendor/MinHook/MinHook.h"
#pragma comment(lib, "Vendor/MinHook/MinHook.lib")

inline bool bIsListening = false;
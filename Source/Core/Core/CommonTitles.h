// Copyright 2017 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "Common/CommonTypes.h"

namespace Titles
{
constexpr u64 BOOT2 = 0x0000000100000001;

constexpr u64 SYSTEM_MENU = 0x0000000100000002;

constexpr u64 SHOP = 0x0001000248414241;

constexpr u64 KOREAN_SHOP = 0x000100024841424b;

constexpr u64 FORECAST_CHANNEL_NTSC_U = 0x0001000248414645;

constexpr u64 FORECAST_CHANNEL_NTSC_J = 0x000100024841464a;

constexpr u64 FORECAST_CHANNEL_PAL = 0x0001000248414650;

constexpr u64 NINTENDO_CHANNEL_NTSC_U = 0x0001000148415445;

constexpr u64 NINTENDO_CHANNEL_NTSC_J = 0x000100014841544a;

constexpr u64 NINTENDO_CHANNEL_PAL = 0x0001000148415450;

constexpr u64 NEWS_CHANNEL_NTSC_U = 0x0001000248414745;

constexpr u64 NEWS_CHANNEL_NTSC_J = 0x000100024841474a;

constexpr u64 NEWS_CHANNEL_PAL = 0x0001000248414750;

constexpr u64 EVERYBODY_VOTES_CHANNEL_NTSC_U = 0x0001000148414a45;

constexpr u64 EVERYBODY_VOTES_CHANNEL_NTSC_J = 0x0001000148414a4a;

constexpr u64 EVERYBODY_VOTES_CHANNEL_PAL = 0x0001000148414a50;

constexpr u64 IOS(u32 major_version)
{
  return 0x0000000100000000 | major_version;
}

// IOS used by the latest System Menu (4.3). Corresponds to IOS80.
constexpr u64 SYSTEM_MENU_IOS = IOS(80);

constexpr u64 BC = IOS(0x100);
constexpr u64 MIOS = IOS(0x101);
}  // namespace Titles

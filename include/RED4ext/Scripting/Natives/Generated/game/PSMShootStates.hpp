#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMShootStates : int32_t
{
    Idle = 0,
    RightWeapon = 1,
    LeftWeapon = 2,
    BothWeapons = 3,
    ValentinosFrenzyInit = 4,
    ValentinosFrenzyRightOnly = 5,
    ValentinosFrenzy = 6,
};
} // namespace game
using gamePSMShootStates = game::PSMShootStates;
} // namespace RED4ext

// clang-format on

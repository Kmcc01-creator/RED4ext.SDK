#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct ModToUpdateInfo
{
    static constexpr const char* NAME = "inkModToUpdateInfo";
    static constexpr const char* ALIAS = NAME;

    CString modTitle; // 0
    CString authorName; // 20
    CString modLogoPath; // 40
    int64_t id; // 60
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ModToUpdateInfo, 0x70);
} // namespace ink
using inkModToUpdateInfo = ink::ModToUpdateInfo;
} // namespace RED4ext

// clang-format on

#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureCompression.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureRawFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/eTextureGroup.hpp>

namespace RED4ext
{
struct STextureGroupSetup
{
    static constexpr const char* NAME = "STextureGroupSetup";
    static constexpr const char* ALIAS = NAME;

    ETextureCompression compression; // 0
    ETextureRawFormat rawFormat; // 4
    uint8_t unk8[0x9 - 0x8]; // 8
    GpuWrapApi::eTextureGroup group; // 9
    uint8_t platformMipBiasPC; // A
    uint8_t platformMipBiasConsole; // B
    bool isStreamable; // C
    bool hasMipchain; // D
    bool isGamma; // E
    bool allowTextureDowngrade; // F
};
RED4EXT_ASSERT_SIZE(STextureGroupSetup, 0x10);
} // namespace RED4ext

// clang-format on

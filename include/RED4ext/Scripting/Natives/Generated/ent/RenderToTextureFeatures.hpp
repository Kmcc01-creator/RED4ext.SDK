#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureFeaturesPlatform.hpp>

namespace RED4ext
{
namespace ent
{
struct RenderToTextureFeatures
{
    static constexpr const char* NAME = "entRenderToTextureFeatures";
    static constexpr const char* ALIAS = NAME;

    bool renderDecals; // 0
    bool renderParticles; // 1
    bool renderForwardNoTXAA; // 2
    ent::RenderToTextureFeaturesPlatform antiAliasing; // 3
    bool contactShadows; // 4
    bool localShadows; // 5
    ent::RenderToTextureFeaturesPlatform SSAO; // 6
    ent::RenderToTextureFeaturesPlatform reflections; // 7
    uint8_t unk8[0xA - 0x8]; // 8
    bool stereo; // A
};
RED4EXT_ASSERT_SIZE(RenderToTextureFeatures, 0xB);
} // namespace ent
using entRenderToTextureFeatures = ent::RenderToTextureFeatures;
} // namespace RED4ext

// clang-format on

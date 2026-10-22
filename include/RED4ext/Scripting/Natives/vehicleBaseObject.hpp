#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <cstdint>

namespace RED4ext
{
namespace AI
{
struct Archetype;
}

namespace vehicle
{
struct BaseObject : game::Object
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";

    uint8_t unk240[0x25C - 0x240]; // 240
    bool isOnGround;               // 25C
    uint8_t unk25D[0x264 - 0x25D]; // 25D
    float acceleration;            // 264
    float deceleration;            // 268
    uint8_t unk26C[0x2A3 - 0x26C]; // 26C
    bool isReversing;              // 2A3
    uint8_t unk2A4[0x2BC - 0x2A4]; // 2A4
    float burnout;                 // 2BC
    // Game 2.5 moved the reflected archetype by 0x10 and isVehicleOnStateLocked by 0x20, and grew the
    // object by 0x20. The new bytes are placed just before each, so the members above, which are not
    // reflected, keep their 2.31 offsets unchecked.
    uint8_t unk2C0[0x3B0 - 0x2C0]; // 2C0
    Ref<AI::Archetype> archetype;  // 3B0
    uint8_t unk3C8[0x6F2 - 0x3C8]; // 3C8
    bool isVehicleOnStateLocked;   // 6F2
    uint8_t unk6F3[0xBC0 - 0x6F3]; // 6F3
};
RED4EXT_ASSERT_SIZE(BaseObject, 0xBC0);
RED4EXT_ASSERT_OFFSET(BaseObject, isOnGround, 0x25C);
RED4EXT_ASSERT_OFFSET(BaseObject, acceleration, 0x264);
RED4EXT_ASSERT_OFFSET(BaseObject, deceleration, 0x268);
RED4EXT_ASSERT_OFFSET(BaseObject, isReversing, 0x2A3);
RED4EXT_ASSERT_OFFSET(BaseObject, burnout, 0x2BC);
RED4EXT_ASSERT_OFFSET(BaseObject, archetype, 0x3B0);
RED4EXT_ASSERT_OFFSET(BaseObject, isVehicleOnStateLocked, 0x6F2);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext

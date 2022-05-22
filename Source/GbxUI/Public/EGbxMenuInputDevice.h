#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuInputDevice.generated.h"

UENUM(BlueprintType)
enum class EGbxMenuInputDevice : uint8 {
    Unknown,
    Gamepad,
    KeyboardMouse,
};


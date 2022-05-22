#pragma once
#include "CoreMinimal.h"
#include "EAutomationUIAction.generated.h"

UENUM(BlueprintType)
enum class EAutomationUIAction : uint8 {
    PressDigitalUp,
    PressDigitalDown,
    PressDigitalLeft,
    PressDigitalRight,
    PressFaceTop,
    PressFaceBottom,
    PressFaceLeft,
    PressFaceRight,
    PressLeftStick,
    PressLeftShoulder,
    PressLeftTrigger,
    PressRightStick,
    PressRightShoulder,
    PressRightTrigger,
};


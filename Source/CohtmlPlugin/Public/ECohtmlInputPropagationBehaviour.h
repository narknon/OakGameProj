#pragma once
#include "CoreMinimal.h"
#include "ECohtmlInputPropagationBehaviour.generated.h"

UENUM(BlueprintType)
namespace ECohtmlInputPropagationBehaviour {
    enum Type {
        None,
        Keyboard,
        Joystick,
        KeyboardAndJoystick,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EGbxActionToTextType.generated.h"

UENUM(BlueprintType)
enum class EGbxActionToTextType : uint8 {
    PlayerController,
    KeyboardMouse,
    Gamepad,
};


#pragma once
#include "CoreMinimal.h"
#include "EHoldToPressGlyphType.generated.h"

UENUM(BlueprintType)
enum class EHoldToPressGlyphType : uint8 {
    None,
    Gamepad,
    Keyboard,
    KeyboardWide,
    KeyboardXWide,
};


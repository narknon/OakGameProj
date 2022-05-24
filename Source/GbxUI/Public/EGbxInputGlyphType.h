#pragma once
#include "CoreMinimal.h"
#include "EGbxInputGlyphType.generated.h"

UENUM(BlueprintType)
enum class EGbxInputGlyphType : uint8 {
    KeyboardMouse,
    PS4,
    XboxOne,
    GenericGamepad,
    SwitchPro,
    Stadia,
    DPX,
    MPX,
};


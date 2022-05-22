#pragma once
#include "CoreMinimal.h"
#include "EGbxInputGlyphType.generated.h"

UENUM(BlueprintType)
enum class EGbxInputGlyphType :  {
    KeyboardMouse,
    PS4,
    XboxOne,
    GenericGamepad,
    SwitchPro,
    Stadia,
    DPX,
    MPX,
};


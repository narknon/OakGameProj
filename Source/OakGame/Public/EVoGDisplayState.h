#pragma once
#include "CoreMinimal.h"
#include "EVoGDisplayState.generated.h"

UENUM(BlueprintType)
enum class EVoGDisplayState : uint8 {
    None,
    Inactive,
    FadingIn,
    Displayed,
    FadingOut,
};


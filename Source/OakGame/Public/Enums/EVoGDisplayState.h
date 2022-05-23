#pragma once
#include "CoreMinimal.h"
#include "EVoGDisplayState.generated.h"

UENUM(BlueprintType)
enum class EVoGDisplayState :  {
    None,
    Inactive,
    FadingIn,
    Displayed,
    FadingOut,
};


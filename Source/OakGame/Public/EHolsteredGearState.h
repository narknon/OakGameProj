#pragma once
#include "CoreMinimal.h"
#include "EHolsteredGearState.generated.h"

UENUM(BlueprintType)
enum class EHolsteredGearState : uint8 {
    None,
    FadingIn,
    FadingOut,
};


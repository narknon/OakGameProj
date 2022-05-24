#pragma once
#include "CoreMinimal.h"
#include "EGFxGrenadeIndicatorMode.generated.h"

UENUM()
enum class EGFxGrenadeIndicatorMode : int32 {
    Hidden,
    Safe,
    Danger,
};


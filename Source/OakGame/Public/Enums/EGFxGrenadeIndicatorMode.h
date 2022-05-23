#pragma once
#include "CoreMinimal.h"
#include "EGFxGrenadeIndicatorMode.generated.h"

UENUM(BlueprintType)
enum class EGFxGrenadeIndicatorMode : int32 {
    Hidden,
    Safe,
    Danger,
};


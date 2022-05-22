#pragma once
#include "CoreMinimal.h"
#include "ECoordinatedEffectParamScaleMode.generated.h"

UENUM(BlueprintType)
enum class ECoordinatedEffectParamScaleMode : uint8 {
    None,
    XBounds,
    YBounds,
    ZBounds,
};


#pragma once
#include "CoreMinimal.h"
#include "EStandInAutoScaleMode.generated.h"

UENUM(BlueprintType)
enum class EStandInAutoScaleMode : uint8 {
    None,
    ScaleDown,
    ScaleUpOrDown,
};


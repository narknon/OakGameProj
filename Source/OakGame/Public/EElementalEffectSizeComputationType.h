#pragma once
#include "CoreMinimal.h"
#include "EElementalEffectSizeComputationType.generated.h"

UENUM(BlueprintType)
enum class EElementalEffectSizeComputationType : uint8 {
    BoundsSphereRadius,
    BoundsBoxExtentMaxAxis,
};


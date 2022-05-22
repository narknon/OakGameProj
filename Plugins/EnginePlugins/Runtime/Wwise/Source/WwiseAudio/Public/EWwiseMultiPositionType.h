#pragma once
#include "CoreMinimal.h"
#include "EWwiseMultiPositionType.generated.h"

UENUM(BlueprintType)
enum class EWwiseMultiPositionType : uint8 {
    MultiSources = 0x1,
    MultiDirections,
};


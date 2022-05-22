#pragma once
#include "CoreMinimal.h"
#include "EIsInRangeAspectDistanceTest.generated.h"

UENUM(BlueprintType)
enum class EIsInRangeAspectDistanceTest : uint8 {
    Direct,
    Horizontal,
    Vertical,
    VerticalOffset,
    Count,
};


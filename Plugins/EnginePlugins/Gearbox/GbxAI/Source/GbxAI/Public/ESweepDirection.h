#pragma once
#include "CoreMinimal.h"
#include "ESweepDirection.generated.h"

UENUM(BlueprintType)
enum class ESweepDirection : uint8 {
    Left,
    Right,
    Random,
};


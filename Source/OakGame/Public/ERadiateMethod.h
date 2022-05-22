#pragma once
#include "CoreMinimal.h"
#include "ERadiateMethod.generated.h"

UENUM(BlueprintType)
enum class ERadiateMethod : uint8 {
    Velocity,
    MinMaxDistance,
};


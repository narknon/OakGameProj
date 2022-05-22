#pragma once
#include "CoreMinimal.h"
#include "EOrbitDirection.generated.h"

UENUM(BlueprintType)
enum class EOrbitDirection : uint8 {
    Left,
    Right,
    Random,
};


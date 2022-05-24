#pragma once
#include "CoreMinimal.h"
#include "ENavAnimType.generated.h"

UENUM(BlueprintType)
enum class ENavAnimType : uint8 {
    None,
    Direction,
    Destination,
    Rotation,
};


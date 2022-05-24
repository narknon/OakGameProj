#pragma once
#include "CoreMinimal.h"
#include "ECMInheritVelocityType.generated.h"

UENUM(BlueprintType)
enum class ECMInheritVelocityType : uint8 {
    Forward,
    Backward,
    Right,
    Left,
    Up,
    Down,
};


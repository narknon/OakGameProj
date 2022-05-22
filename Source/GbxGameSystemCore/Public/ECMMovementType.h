#pragma once
#include "CoreMinimal.h"
#include "ECMMovementType.generated.h"

UENUM(BlueprintType)
enum class ECMMovementType : uint8 {
    Ground,
    Flying,
    Falling,
    MoveNoneRootMotion,
};


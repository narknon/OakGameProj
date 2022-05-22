#pragma once
#include "CoreMinimal.h"
#include "ECMGravityModificationType.generated.h"

UENUM(BlueprintType)
enum class ECMGravityModificationType : uint8 {
    ScaleGravity,
    ScaleDefaultGravity,
    OverrideGravity,
};


#pragma once
#include "CoreMinimal.h"
#include "ECMTerminalVelocityModificationType.generated.h"

UENUM(BlueprintType)
enum class ECMTerminalVelocityModificationType : uint8 {
    OverrideTerminalVelocity,
    ScaleTerminalVelocity,
};


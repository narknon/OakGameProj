#pragma once
#include "CoreMinimal.h"
#include "ESpinDirection.generated.h"

UENUM(BlueprintType)
enum class ESpinDirection : uint8 {
    SD_NoSpin,
    SD_Clockwise,
    SD_Counterclockwise,
    SD_MAX UMETA(Hidden),
};


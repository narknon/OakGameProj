#pragma once
#include "CoreMinimal.h"
#include "ECrosshairColorsEnum.generated.h"

UENUM(BlueprintType)
enum class ECrosshairColorsEnum : uint8 {
    NONE,
    WHITE,
    GREEN,
    RED,
    TEAL,
    ORANGE,
    PURPLE,
    MAX,
};


#pragma once
#include "CoreMinimal.h"
#include "EPlayerDroppability.generated.h"

UENUM(BlueprintType)
enum class EPlayerDroppability : uint8 {
    EPD_CanDropAndSell,
    EPD_NoDrop,
    EPD_NoDropOrSell,
    EPD_MAX UMETA(Hidden),
};


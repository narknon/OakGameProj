#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineInteractionMode.generated.h"

UENUM(BlueprintType)
enum class EVendingMachineInteractionMode : uint8 {
    Purchase,
    BuyBack,
    Sell,
};


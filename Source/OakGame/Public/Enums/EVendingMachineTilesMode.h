#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineTilesMode.generated.h"

UENUM(BlueprintType)
enum class EVendingMachineTilesMode : uint8 {
    Purchase,
    BuyBack,
    Sell,
    MAX,
};


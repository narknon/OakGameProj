#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuSortMode.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryMenuSortMode : uint8 {
    NewestFirst,
    Type,
    Level,
    Manufacturer,
    Rarity,
};


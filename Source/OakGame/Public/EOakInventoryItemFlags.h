#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryItemFlags.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryItemFlags : uint8 {
    HasBeenSeenInInventoryMenu,
    MarkedAsFavorite,
    MarkedAsJunk,
};


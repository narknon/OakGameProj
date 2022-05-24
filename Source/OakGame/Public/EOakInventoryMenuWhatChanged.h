#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuWhatChanged.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryMenuWhatChanged : uint8 {
    Initial,
    RefreshAll,
    SortChanged,
    AddedItem,
    RemovedItem,
    UnequippedItem,
    EquippedItem,
};


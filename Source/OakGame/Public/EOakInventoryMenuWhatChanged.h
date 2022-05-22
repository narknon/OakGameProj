#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuWhatChanged.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryMenuWhatChanged :  {
    Initial,
    RefreshAll,
    SortChanged,
    AddedItem,
    RemovedItem,
    UnequippedItem,
    EquippedItem,
};


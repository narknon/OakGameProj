#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryItemWidgetDisabledReason.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryItemWidgetDisabledReason : uint8 {
    NotDisabled,
    SlotLocked,
    BrowsingAnotherPanel,
    CantEquipInSlot,
};


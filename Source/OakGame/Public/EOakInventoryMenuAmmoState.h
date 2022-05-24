#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuAmmoState.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryMenuAmmoState : uint8 {
    Default,
    Highlighted,
    HighlightedEmpty,
    Low,
    Empty,
    Full,
};


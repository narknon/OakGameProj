#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuAmmoState.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryMenuAmmoState :  {
    Default,
    Highlighted,
    HighlightedEmpty,
    Low,
    Empty,
    Full,
};


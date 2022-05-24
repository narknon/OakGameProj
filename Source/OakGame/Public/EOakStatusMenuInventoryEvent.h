#pragma once
#include "CoreMinimal.h"
#include "EOakStatusMenuInventoryEvent.generated.h"

UENUM(BlueprintType)
enum class EOakStatusMenuInventoryEvent : uint8 {
    PaperDollItemHighlighted,
    BackpackItemHighlighted,
    BackpackHighlighted,
    PaperDollHighlighted,
};


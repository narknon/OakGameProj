#pragma once
#include "CoreMinimal.h"
#include "EOakStatusMenuInventoryEvent.generated.h"

UENUM(BlueprintType)
enum class EOakStatusMenuInventoryEvent :  {
    PaperDollItemHighlighted,
    BackpackItemHighlighted,
    BackpackHighlighted,
    PaperDollHighlighted,
};


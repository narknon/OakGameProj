#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryItemWidgetSelectType.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryItemWidgetSelectType :  {
    Normal,
    HideWhenSelected,
    PopoutSelection,
};


#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryItemWidgetSelectType.generated.h"

UENUM(BlueprintType)
enum class EOakInventoryItemWidgetSelectType : uint8 {
    Normal,
    HideWhenSelected,
    PopoutSelection,
};


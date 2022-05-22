#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxScrollListAddedItemPriority.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxScrollListAddedItemPriority : uint8 {
    NewestOnTop,
    OldestOnTop,
};


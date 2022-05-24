#pragma once
#include "CoreMinimal.h"
#include "EQuickChangeMenuSortMode.generated.h"

UENUM(BlueprintType)
enum class EQuickChangeMenuSortMode : uint8 {
    Rarity,
    Alphabetic,
    NewToOld,
};


#pragma once
#include "CoreMinimal.h"
#include "EOakUIInventoryItemUseType.generated.h"

UENUM()
enum class EOakUIInventoryItemUseType : int32 {
    Unknown,
    EquippableInternal,
    UsableInternal,
};


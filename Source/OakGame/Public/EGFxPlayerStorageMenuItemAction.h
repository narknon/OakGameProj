#pragma once
#include "CoreMinimal.h"
#include "EGFxPlayerStorageMenuItemAction.generated.h"

UENUM(BlueprintType)
enum class EGFxPlayerStorageMenuItemAction : uint8 {
    None,
    MoveToBank,
    MoveToInventory,
    Inspect,
};


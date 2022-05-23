#pragma once
#include "CoreMinimal.h"
#include "EGFxPlayerStorageMenuItemAction.generated.h"

UENUM(BlueprintType)
enum class EGFxPlayerStorageMenuItemAction :  {
    None,
    MoveToBank,
    MoveToInventory,
    Inspect,
};


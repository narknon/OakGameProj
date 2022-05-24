#pragma once
#include "CoreMinimal.h"
#include "EUIDialogCallout.generated.h"

UENUM()
enum class EUIDialogCallout : int32 {
    OutOfGrenades,
    EquipAskillFailed,
    EquipItemFailed,
    RemoveItemFailed,
    InsufficientFunds,
};


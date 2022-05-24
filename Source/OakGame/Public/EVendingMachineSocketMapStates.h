#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineSocketMapStates.generated.h"

UENUM(BlueprintType)
enum EVendingMachineSocketMapStates {
    SOCKETMAP_BUY,
    SOCKETMAP_SELL,
    SOCKETMAP_COMPARE,
    SOCKETMAP_VENDINGCOMPARE,
    SOCKETMAP_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "VendingMachineDisplayMode.generated.h"

UENUM(BlueprintType)
enum VendingMachineDisplayMode {
    EVMDM_Buy,
    EVMDM_Sell,
    EVMDM_Buyback,
    EVMDM_MAX UMETA(Hidden),
};


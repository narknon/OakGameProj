#pragma once
#include "CoreMinimal.h"
#include "GFxVendingMachineDisplayMode.generated.h"

UENUM(BlueprintType)
enum class GFxVendingMachineDisplayMode : uint8 {
    GFXVENDOR_Buy,
    GFXVENDOR_Sell,
    GFXVENDOR_Buyback,
    GFXVENDOR_END,
    GFXVENDOR_MAX UMETA(Hidden),
};


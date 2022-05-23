#pragma once
#include "CoreMinimal.h"
#include "EGFxVendingMachineMenuBackpackState.generated.h"

UENUM(BlueprintType)
enum class EGFxVendingMachineMenuBackpackState : int32 {
    Unknown,
    Buy,
    Sell,
    Compare,
    CompareToMachine,
};


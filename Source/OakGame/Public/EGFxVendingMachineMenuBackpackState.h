#pragma once
#include "CoreMinimal.h"
#include "EGFxVendingMachineMenuBackpackState.generated.h"

UENUM()
enum class EGFxVendingMachineMenuBackpackState : int32 {
    Unknown,
    Buy,
    Sell,
    Compare,
    CompareToMachine,
};


#pragma once
#include "CoreMinimal.h"
#include "EOperativeBarrierState.generated.h"

UENUM(BlueprintType)
enum class EOperativeBarrierState : uint8 {
    Activating,
    Carried,
    Deployed,
    ShuttingDown,
};


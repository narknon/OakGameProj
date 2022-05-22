#pragma once
#include "CoreMinimal.h"
#include "EGameResourcePoolState.generated.h"

UENUM(BlueprintType)
enum class EGameResourcePoolState : uint8 {
    RPS_Depleted,
    RPS_Depleting,
    RPS_Filled,
    RPS_Regenerating,
    RPS_MAX UMETA(Hidden),
};


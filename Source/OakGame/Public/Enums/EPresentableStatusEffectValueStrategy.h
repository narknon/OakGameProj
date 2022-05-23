#pragma once
#include "CoreMinimal.h"
#include "EPresentableStatusEffectValueStrategy.generated.h"

UENUM(BlueprintType)
enum class EPresentableStatusEffectValueStrategy : int32 {
    PercentOfMaxHealth,
    InstanceCount,
};


#pragma once
#include "CoreMinimal.h"
#include "EExplosionTinnitusDuration.generated.h"

UENUM(BlueprintType)
enum class EExplosionTinnitusDuration : uint8 {
    None,
    Short,
    Medium,
    Long,
};


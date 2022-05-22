#pragma once
#include "CoreMinimal.h"
#include "EDamageCausedModificationStrategy.generated.h"

UENUM(BlueprintType)
enum class EDamageCausedModificationStrategy : int32 {
    UseSelfModifier,
    UseInstigatorModifier,
};


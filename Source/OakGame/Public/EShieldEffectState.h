#pragma once
#include "CoreMinimal.h"
#include "EShieldEffectState.generated.h"

UENUM(BlueprintType)
enum class EShieldEffectState : uint8 {
    Full,
    Damaged,
    Depleted,
};


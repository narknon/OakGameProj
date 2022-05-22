#pragma once
#include "CoreMinimal.h"
#include "EConditionalDamageModifierType.generated.h"

UENUM(BlueprintType)
enum class EConditionalDamageModifierType : uint8 {
    Scale,
    Add,
    ScaleSimple,
};


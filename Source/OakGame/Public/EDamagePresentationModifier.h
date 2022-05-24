#pragma once
#include "CoreMinimal.h"
#include "EDamagePresentationModifier.generated.h"

UENUM(BlueprintType)
enum class EDamagePresentationModifier : uint8 {
    Default,
    Increase,
    Decrease,
};


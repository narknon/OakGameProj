#pragma once
#include "CoreMinimal.h"
#include "EDamagePresentationLevel.generated.h"

UENUM(BlueprintType)
enum class EDamagePresentationLevel : uint8 {
    Negligible,
    Low,
    Medium,
    High,
    MAX,
};


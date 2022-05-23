#pragma once
#include "CoreMinimal.h"
#include "EDamagePresentationLevel.generated.h"

UENUM(BlueprintType)
enum class EDamagePresentationLevel :  {
    Negligible,
    Low,
    Medium,
    High,
    MAX,
};


#pragma once
#include "CoreMinimal.h"
#include "EDrivingOverridePriority.generated.h"

UENUM(BlueprintType)
enum class EDrivingOverridePriority : uint8 {
    AINode,
    Aspect,
    Scripted,
    Count,
    Invalid,
};


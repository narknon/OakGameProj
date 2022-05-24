#pragma once
#include "CoreMinimal.h"
#include "EGbxGoalResult.generated.h"

UENUM(BlueprintType)
enum class EGbxGoalResult : uint8 {
    Failed,
    Reached,
    Success,
};


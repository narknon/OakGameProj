#pragma once
#include "CoreMinimal.h"
#include "EGbxNavGoalReach.generated.h"

UENUM(BlueprintType)
enum class EGbxNavGoalReach : uint8 {
    Exact,
    Pass,
};


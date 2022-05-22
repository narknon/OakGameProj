#pragma once
#include "CoreMinimal.h"
#include "EGbxTestPlan.generated.h"

UENUM(BlueprintType)
enum class EGbxTestPlan : uint8 {
    None,
    ABT,
    Nightly,
};


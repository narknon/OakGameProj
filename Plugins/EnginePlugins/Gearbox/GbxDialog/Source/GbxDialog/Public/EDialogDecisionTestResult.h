#pragma once
#include "CoreMinimal.h"
#include "EDialogDecisionTestResult.generated.h"

UENUM(BlueprintType)
enum class EDialogDecisionTestResult : uint8 {
    ConditionIsTrue,
    ConditionIsFalse,
    TestIsInvalid,
};


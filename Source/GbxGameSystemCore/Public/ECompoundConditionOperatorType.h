#pragma once
#include "CoreMinimal.h"
#include "ECompoundConditionOperatorType.generated.h"

UENUM(BlueprintType)
enum class ECompoundConditionOperatorType : uint8 {
    And,
    Or,
    Xor,
    Not,
};


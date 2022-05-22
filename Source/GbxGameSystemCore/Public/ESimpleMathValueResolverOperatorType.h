#pragma once
#include "CoreMinimal.h"
#include "ESimpleMathValueResolverOperatorType.generated.h"

UENUM(BlueprintType)
enum class ESimpleMathValueResolverOperatorType : uint8 {
    Add,
    Subtract,
    Multiply,
    Divide,
};


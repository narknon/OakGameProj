#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectUseResult.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectUseResult : uint8 {
    Failure,
    Running,
    Blocking,
    Success,
};


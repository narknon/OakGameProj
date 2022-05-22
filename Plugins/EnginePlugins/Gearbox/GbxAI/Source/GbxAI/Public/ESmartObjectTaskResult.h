#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectTaskResult.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectTaskResult : uint8 {
    Aborted,
    Failed,
    Succeeded,
};


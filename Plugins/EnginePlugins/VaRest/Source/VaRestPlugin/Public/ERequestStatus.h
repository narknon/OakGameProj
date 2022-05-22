#pragma once
#include "CoreMinimal.h"
#include "ERequestStatus.generated.h"

UENUM(BlueprintType)
enum class ERequestStatus : uint8 {
    NotStarted,
    Processing,
    Failed,
    Failed_ConnectionError,
    Succeeded,
};


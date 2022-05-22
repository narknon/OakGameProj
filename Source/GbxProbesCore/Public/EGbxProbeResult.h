#pragma once
#include "CoreMinimal.h"
#include "EGbxProbeResult.generated.h"

UENUM(BlueprintType)
enum class EGbxProbeResult : uint8 {
    Seen,
    Skipped,
    Succeeded,
    Failed,
    Disabled,
    Count,
};


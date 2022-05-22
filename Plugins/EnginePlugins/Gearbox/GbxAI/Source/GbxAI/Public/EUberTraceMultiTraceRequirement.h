#pragma once
#include "CoreMinimal.h"
#include "EUberTraceMultiTraceRequirement.generated.h"

UENUM(BlueprintType)
enum class EUberTraceMultiTraceRequirement : uint8 {
    AtLeastOneMustPassTest,
    AllMustPassTest,
};


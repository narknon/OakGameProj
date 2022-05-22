#pragma once
#include "CoreMinimal.h"
#include "EDebugDisplayVerbosityLevel.generated.h"

UENUM(BlueprintType)
enum class EDebugDisplayVerbosityLevel : uint8 {
    Normal,
    Verbose,
};


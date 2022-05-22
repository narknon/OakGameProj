#pragma once
#include "CoreMinimal.h"
#include "ECachedResultLifetime.generated.h"

UENUM(BlueprintType)
enum class ECachedResultLifetime : uint8 {
    OneTest,
    OneSearch,
    ManualReset,
};


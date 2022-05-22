#pragma once
#include "CoreMinimal.h"
#include "ECommandRingLocationType.generated.h"

UENUM(BlueprintType)
enum class ECommandRingLocationType : uint8 {
    Default,
    Ground,
    Feet,
};


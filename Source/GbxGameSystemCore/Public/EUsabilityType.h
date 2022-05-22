#pragma once
#include "CoreMinimal.h"
#include "EUsabilityType.generated.h"

UENUM(BlueprintType)
enum class EUsabilityType : uint8 {
    Primary,
    Secondary,
    Count,
};


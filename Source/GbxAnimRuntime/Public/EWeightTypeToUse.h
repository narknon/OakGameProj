#pragma once
#include "CoreMinimal.h"
#include "EWeightTypeToUse.generated.h"

UENUM(BlueprintType)
enum class EWeightTypeToUse : uint8 {
    Zero,
    One,
    Cached,
    Dynamic,
};


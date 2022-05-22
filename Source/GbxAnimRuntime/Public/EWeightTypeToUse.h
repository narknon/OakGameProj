#pragma once
#include "CoreMinimal.h"
#include "EWeightTypeToUse.generated.h"

UENUM(BlueprintType)
enum class EWeightTypeToUse :  {
    Zero,
    One,
    Cached,
    Dynamic,
};


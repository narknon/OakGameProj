#pragma once
#include "CoreMinimal.h"
#include "EUIStatValueSignStyle.generated.h"

UENUM(BlueprintType)
enum class EUIStatValueSignStyle : uint8 {
    AsIs,
    Positive,
    Negative,
    OppositeSign,
};


#pragma once
#include "CoreMinimal.h"
#include "EUIStatComparisonResult.generated.h"

UENUM(BlueprintType)
enum class EUIStatComparisonResult : uint8 {
    None,
    Better,
    Worse,
    Same,
};


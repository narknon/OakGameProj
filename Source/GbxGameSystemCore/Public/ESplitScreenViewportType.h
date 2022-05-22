#pragma once
#include "CoreMinimal.h"
#include "ESplitScreenViewportType.generated.h"

UENUM(BlueprintType)
enum class ESplitScreenViewportType :  {
    Standard,
    Horizontal,
    Vertical,
    Quad,
};


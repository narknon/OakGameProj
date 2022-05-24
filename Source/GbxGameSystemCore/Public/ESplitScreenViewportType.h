#pragma once
#include "CoreMinimal.h"
#include "ESplitScreenViewportType.generated.h"

UENUM(BlueprintType)
enum class ESplitScreenViewportType : uint8 {
    Standard,
    Horizontal,
    Vertical,
    Quad,
};


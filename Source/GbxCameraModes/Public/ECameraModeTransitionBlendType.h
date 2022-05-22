#pragma once
#include "CoreMinimal.h"
#include "ECameraModeTransitionBlendType.generated.h"

UENUM(BlueprintType)
enum class ECameraModeTransitionBlendType : uint8 {
    None,
    Full,
    FOV,
};


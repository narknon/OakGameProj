#pragma once
#include "CoreMinimal.h"
#include "EInWorldIconFadeType.generated.h"

UENUM(BlueprintType)
enum class EInWorldIconFadeType : uint8 {
    None,
    Distance,
    TargetedRadius,
};


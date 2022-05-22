#pragma once
#include "CoreMinimal.h"
#include "EGFxInWorldIconClampUpdate.generated.h"

UENUM(BlueprintType)
enum class EGFxInWorldIconClampUpdate : uint8 {
    Unknown,
    NotClamped,
    ClampedInFront,
    ClampedBehind,
};


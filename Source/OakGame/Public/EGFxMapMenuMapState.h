#pragma once
#include "CoreMinimal.h"
#include "EGFxMapMenuMapState.generated.h"

UENUM(BlueprintType)
enum class EGFxMapMenuMapState : uint8 {
    None,
    Level,
    Planet,
    Galaxy,
};


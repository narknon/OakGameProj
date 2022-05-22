#pragma once
#include "CoreMinimal.h"
#include "EZoneMapViewerState.generated.h"

UENUM(BlueprintType)
enum class EZoneMapViewerState : uint8 {
    Level,
    Planet,
    Galaxy,
    Invalid,
};


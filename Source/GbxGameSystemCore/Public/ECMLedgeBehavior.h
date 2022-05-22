#pragma once
#include "CoreMinimal.h"
#include "ECMLedgeBehavior.generated.h"

UENUM(BlueprintType)
enum class ECMLedgeBehavior : uint8 {
    CanWalkOffLedges,
    CannotWalkOffLedges,
    StopOnReachedLedge,
};


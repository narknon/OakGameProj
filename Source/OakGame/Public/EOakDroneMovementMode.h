#pragma once
#include "CoreMinimal.h"
#include "EOakDroneMovementMode.generated.h"

UENUM(BlueprintType)
enum class EOakDroneMovementMode : uint8 {
    Projectile,
    FlyToTarget,
    HoverAtTarget,
    HoverAtOwner,
};


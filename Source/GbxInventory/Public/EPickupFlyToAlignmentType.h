#pragma once
#include "CoreMinimal.h"
#include "EPickupFlyToAlignmentType.generated.h"

UENUM()
enum class EPickupFlyToAlignmentType : int32 {
    Spin,
    TargetFacing,
};


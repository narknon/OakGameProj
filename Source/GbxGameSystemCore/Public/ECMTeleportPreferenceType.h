#pragma once
#include "CoreMinimal.h"
#include "ECMTeleportPreferenceType.generated.h"

UENUM(BlueprintType)
enum class ECMTeleportPreferenceType : uint8 {
    Behind_TargetFacing,
    Ahead_TargetFacing,
    Behind_MoveDirection,
    Ahead_MoveDirection,
};


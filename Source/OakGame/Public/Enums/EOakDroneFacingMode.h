#pragma once
#include "CoreMinimal.h"
#include "EOakDroneFacingMode.generated.h"

UENUM(BlueprintType)
enum class EOakDroneFacingMode : uint8 {
    None,
    FaceMoveDir,
    FaceTarget,
    FaceMovementTarget,
};


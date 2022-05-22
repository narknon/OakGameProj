#pragma once
#include "CoreMinimal.h"
#include "ENavJumpRotation.generated.h"

UENUM(BlueprintType)
enum class ENavJumpRotation : uint8 {
    None,
    FaceJumpOrigin,
    FaceJumpTarget,
    FaceJumpTargetFaceDir,
};


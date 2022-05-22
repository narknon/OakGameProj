#pragma once
#include "CoreMinimal.h"
#include "ECommandRingAlignmentType.generated.h"

UENUM(BlueprintType)
enum class ECommandRingAlignmentType : uint8 {
    Default,
    SurfaceWorld,
    SurfaceView,
    View,
    View2D,
    Actor,
};


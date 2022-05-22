#pragma once
#include "CoreMinimal.h"
#include "EPhysicalAnimationBlendToKinematicMode.generated.h"

UENUM(BlueprintType)
enum class EPhysicalAnimationBlendToKinematicMode : uint8 {
    KinematicLerp,
    DynamicMatchesAnimation,
    Immediate,
};


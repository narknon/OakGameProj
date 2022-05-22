#pragma once
#include "CoreMinimal.h"
#include "ECoordinatedParticleScaleMode.generated.h"

UENUM(BlueprintType)
enum class ECoordinatedParticleScaleMode : uint8 {
    None,
    LargestAxis,
    SmallestAxis,
    HorizontalAxis,
    VerticalAxis,
    EachAxis,
};


#pragma once
#include "CoreMinimal.h"
#include "EDistributedSoundMode.generated.h"

UENUM(BlueprintType)
enum class EDistributedSoundMode : uint8 {
    Point,
    VolumetricSphere,
};


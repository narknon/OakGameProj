#pragma once
#include "CoreMinimal.h"
#include "EMeleeRotationOption.generated.h"

UENUM(BlueprintType)
enum class EMeleeRotationOption : uint8 {
    HoldStill,
    AlignToTarget,
    FollowTarget,
};


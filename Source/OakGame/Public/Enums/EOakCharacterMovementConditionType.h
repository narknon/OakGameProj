#pragma once
#include "CoreMinimal.h"
#include "EOakCharacterMovementConditionType.generated.h"

UENUM(BlueprintType)
enum class EOakCharacterMovementConditionType : uint8 {
    IsGroundSlamming,
    IsLandingFromGroundSlam,
};


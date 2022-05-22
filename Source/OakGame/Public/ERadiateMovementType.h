#pragma once
#include "CoreMinimal.h"
#include "ERadiateMovementType.generated.h"

UENUM(BlueprintType)
enum class ERadiateMovementType : uint8 {
    FollowInitialDirection,
    SimpleMoveOnGround,
};


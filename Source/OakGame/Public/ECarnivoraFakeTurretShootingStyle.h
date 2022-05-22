#pragma once
#include "CoreMinimal.h"
#include "ECarnivoraFakeTurretShootingStyle.generated.h"

UENUM(BlueprintType)
enum class ECarnivoraFakeTurretShootingStyle : uint8 {
    TARGET_AROUND_PLAYER,
    CONE_IN_DIRECTION,
};


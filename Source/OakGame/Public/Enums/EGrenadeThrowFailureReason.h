#pragma once
#include "CoreMinimal.h"
#include "EGrenadeThrowFailureReason.generated.h"

UENUM(BlueprintType)
enum class EGrenadeThrowFailureReason : uint8 {
    UnknownError,
    ActionsLocked,
    NotHealthy,
    InternalCooldown,
    NotEnoughAmmo,
};


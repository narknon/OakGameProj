#pragma once
#include "CoreMinimal.h"
#include "EPOIActivationResult.generated.h"

UENUM(BlueprintType)
enum class EPOIActivationResult : uint8 {
    Success,
    Failure_Generic,
    Failure_PlayerInMenu,
    Failure_AllyDown,
    Failure_FastTravelDisabled,
    Failure_PlayerInVehicle,
    Failure_ClientJoining,
    Failure_PlayerDueling,
    Failure_PhotoModeActive,
};


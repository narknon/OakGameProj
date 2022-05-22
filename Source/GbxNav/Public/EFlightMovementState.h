#pragma once
#include "CoreMinimal.h"
#include "EFlightMovementState.generated.h"

UENUM(BlueprintType)
enum EFlightMovementState {
    Approach,
    Descent,
    Ascent,
    Exit,
    DigistructingOut,
};


#pragma once
#include "CoreMinimal.h"
#include "EGFxVehiclePartWidgetState.generated.h"

UENUM(BlueprintType)
enum class EGFxVehiclePartWidgetState : uint8 {
    On,
    Off,
    RollOn,
    RollOff,
    Condensed,
    TurnIn,
};


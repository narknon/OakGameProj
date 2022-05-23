#pragma once
#include "CoreMinimal.h"
#include "EGFxVehiclePartWidgetState.generated.h"

UENUM(BlueprintType)
enum class EGFxVehiclePartWidgetState :  {
    On,
    Off,
    RollOn,
    RollOff,
    Condensed,
    TurnIn,
};


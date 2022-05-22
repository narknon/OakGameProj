#pragma once
#include "CoreMinimal.h"
#include "ELeapOnVehicle_SeatType.generated.h"

UENUM(BlueprintType)
enum class ELeapOnVehicle_SeatType : uint8 {
    SpecifiedSlot,
    Driver,
    Gunner,
    Passenger,
    Hostile,
    ELeapOnVehicle_MAX UMETA(Hidden),
};


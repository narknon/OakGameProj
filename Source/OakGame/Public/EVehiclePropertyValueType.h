#pragma once
#include "CoreMinimal.h"
#include "EVehiclePropertyValueType.generated.h"

UENUM(BlueprintType)
enum class EVehiclePropertyValueType : uint8 {
    Speed_KPH,
    PlanarSpeed_KPH,
    ForwardSpeed_KPH,
    Speed_MPH,
    PlanarSpeed_MPH,
    ForwardSpeed_MPH,
    Mass,
    IsPlayerDriven,
    IsAIDriven,
};


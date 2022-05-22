#pragma once
#include "CoreMinimal.h"
#include "EVehicleInputMode.generated.h"

UENUM(BlueprintType)
enum class EVehicleInputMode : uint8 {
    CameraRelative_Classic,
    CameraRelative_ThirdPerson,
    VehicleRelative_LeftSide,
    VehicleRelative_StickOnly,
    Count,
};


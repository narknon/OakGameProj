#pragma once
#include "CoreMinimal.h"
#include "ECarnivoraPartName.generated.h"

UENUM(BlueprintType)
enum class ECarnivoraPartName : uint8 {
    FRONT_WHEEL_0,
    FRONT_WHEEL_1,
    FRONT_WHEEL_2,
    TIRE_TRACK_0,
    TIRE_TRACK_1,
    TIRE_TRACK_2,
    TIRE_TRACK_3,
    NUM,
};


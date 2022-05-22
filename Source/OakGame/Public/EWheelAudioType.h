#pragma once
#include "CoreMinimal.h"
#include "EWheelAudioType.generated.h"

UENUM(BlueprintType)
enum class EWheelAudioType : uint8 {
    Standard,
    MultiPosition2Wheels,
    MultiPosition1Wheel,
    SingleWheel,
};


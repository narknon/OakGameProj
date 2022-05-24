#pragma once
#include "CoreMinimal.h"
#include "ERevolverBones.generated.h"

UENUM(BlueprintType)
enum class ERevolverBones : uint8 {
    Body_Banking,
    Body_Pitch,
    Wheels,
    SteeringWheel,
    Count,
};


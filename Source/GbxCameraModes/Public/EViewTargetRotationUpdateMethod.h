#pragma once
#include "CoreMinimal.h"
#include "EViewTargetRotationUpdateMethod.generated.h"

UENUM(BlueprintType)
enum class EViewTargetRotationUpdateMethod : int32 {
    FromCamera,
    Fixed,
    FromInputDelta,
};


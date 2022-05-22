#pragma once
#include "CoreMinimal.h"
#include "ERelativeDirectionType.generated.h"

UENUM(BlueprintType)
enum class ERelativeDirectionType : uint8 {
    Default,
    ParentOrientation,
    ParentOrientation2D,
    InverseParentOrientation,
    ParentVelocity,
    ParentVelocity2D,
    InverseParentVelocity,
    InverseParentVelocity2D,
    Random,
    RandomUpwards,
    RandomDownwards,
    RandomOnHorizontalPlane,
    StraightUp,
    StraightDown,
    StraightTowardTarget,
    StraightAwayFromTarget,
    ParentAimDirection,
    InverseParentAimDirection,
    ParentAimDirection2D,
    InverseParentAimDirection2D,
    ParentAcceleration2D,
    InverseParentAimOffset,
};


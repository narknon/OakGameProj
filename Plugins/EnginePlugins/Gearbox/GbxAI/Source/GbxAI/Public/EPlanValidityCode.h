#pragma once
#include "CoreMinimal.h"
#include "EPlanValidityCode.generated.h"

UENUM(BlueprintType)
enum class EPlanValidityCode : uint8 {
    Unknown,
    PlanIsValid,
    NoPlanData,
    NotEnoughRoleSlots,
    MissingRoleTag,
    BadPlanInstanceNumber,
    BadMinMaxRoleInstanceNumbers,
    BadDistanceValues,
    InsufficientCandidates,
};


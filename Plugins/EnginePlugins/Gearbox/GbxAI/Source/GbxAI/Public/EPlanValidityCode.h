#pragma once
#include "CoreMinimal.h"
#include "EPlanValidityCode.generated.h"

UENUM(BlueprintType)
enum class EPlanValidityCode :  {
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


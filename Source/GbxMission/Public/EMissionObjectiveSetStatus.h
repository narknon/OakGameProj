#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveSetStatus.generated.h"

UENUM(BlueprintType)
enum EMissionObjectiveSetStatus {
    MOSS_NotActive,
    MOSS_Active,
    MOSS_Unknown,
    MOSS_MAX UMETA(Hidden),
};


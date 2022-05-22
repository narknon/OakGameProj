#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum EMissionObjectiveStatus {
    MOS_NotStarted,
    MOS_Active,
    MOS_Dormant,
    MOS_Complete,
    MOS_Unknown,
    MOS_MAX UMETA(Hidden),
};


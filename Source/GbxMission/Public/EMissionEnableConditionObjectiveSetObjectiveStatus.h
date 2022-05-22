#pragma once
#include "CoreMinimal.h"
#include "EMissionEnableConditionObjectiveSetObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum EMissionEnableConditionObjectiveSetObjectiveStatus {
    MECOSOS_Ignored,
    MECOSOS_AllCompleteStatusMatters,
    MECOSOS_AllCompleteStatusIgnored,
    MECOSOS_MAX UMETA(Hidden),
};


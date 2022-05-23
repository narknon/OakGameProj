#pragma once
#include "CoreMinimal.h"
#include "EDeathCircleStatus.generated.h"

UENUM(BlueprintType)
enum EDeathCircleStatus {
    DCS_None,
    DCS_Stable,
    DCS_Transitioning,
    DCS_Complete,
    DCS_MAX UMETA(Hidden),
};


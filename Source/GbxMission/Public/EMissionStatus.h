#pragma once
#include "CoreMinimal.h"
#include "EMissionStatus.generated.h"

UENUM(BlueprintType)
enum EMissionStatus {
    MS_NotStarted,
    MS_Active,
    MS_Complete,
    MS_Failed,
    MS_Unknown,
    MS_MAX UMETA(Hidden),
};


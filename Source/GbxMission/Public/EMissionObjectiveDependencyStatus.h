#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveDependencyStatus.generated.h"

UENUM(BlueprintType)
enum EMissionObjectiveDependencyStatus {
    MODS_Active,
    MODS_Complete,
    MODS_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "EAggregateBoneFatigueStatus.generated.h"

UENUM(BlueprintType)
enum class EAggregateBoneFatigueStatus :  {
    ABFS_FullyFatigued,
    ABFS_NoFatigue,
    ABFS_FullyDivergedFatigue,
    ABFS_VariedFatigue,
    ABFS_MAX UMETA(Hidden),
};


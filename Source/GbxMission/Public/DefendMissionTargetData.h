#pragma once
#include "CoreMinimal.h"
#include "DefendMissionTargetData.generated.h"

class UMissionObjective;

USTRUCT(BlueprintType)
struct FDefendMissionTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMissionObjective* Objective;
    
    UPROPERTY()
    uint32 PercentHealth;
    
    GBXMISSION_API FDefendMissionTargetData();
};


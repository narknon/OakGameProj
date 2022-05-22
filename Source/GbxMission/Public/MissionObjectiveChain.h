#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveChain.generated.h"

class UMissionObjective;

USTRUCT(BlueprintType)
struct GBXMISSION_API FMissionObjectiveChain {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UMissionObjective*> ObjectiveChain;
    
    FMissionObjectiveChain();
};


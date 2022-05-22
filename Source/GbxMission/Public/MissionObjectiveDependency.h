#pragma once
#include "CoreMinimal.h"
#include "EMissionObjectiveDependencyStatus.h"
#include "MissionObjectiveReferenceWeak.h"
#include "MissionObjectiveDependency.generated.h"

USTRUCT(BlueprintType)
struct FMissionObjectiveDependency {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReferenceWeak ObjectiveRef;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMissionObjectiveDependencyStatus> ObjectiveStatus;
    
    GBXMISSION_API FMissionObjectiveDependency();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissionObjectiveReferenceBase.generated.h"

class UMissionObjective;

USTRUCT(BlueprintType)
struct GBXMISSION_API FMissionObjectiveReferenceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ObjectiveName;
    
    UPROPERTY(EditAnywhere)
    FGuid ObjectiveGuid;
    
protected:
    UPROPERTY(SkipSerialization, Transient)
    TWeakObjectPtr<UMissionObjective> Objective;
    
public:
    FMissionObjectiveReferenceBase();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionObjectiveData.generated.h"

class UMission;
class UMissionObjective;

USTRUCT()
struct GBXMISSION_API FMissionObjectiveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY()
    UMissionObjective* Objective;
    
    FMissionObjectiveData();
};


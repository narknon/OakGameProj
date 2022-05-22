#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveReferenceBase.h"
#include "MissionObjectiveReferenceWeak.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct GBXMISSION_API FMissionObjectiveReferenceWeak : public FMissionObjectiveReferenceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMission> Mission;
    
public:
    FMissionObjectiveReferenceWeak();
};


#pragma once
#include "CoreMinimal.h"
#include "MissionEnableCondition.h"
#include "EMissionStatus.h"
#include "MissionEnableConditionMission.generated.h"

class UMission;

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionMission : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UMission> MissionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMissionStatus> MissionStatus;
    
    UMissionEnableConditionMission();
};


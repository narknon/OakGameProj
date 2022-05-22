#pragma once
#include "CoreMinimal.h"
#include "MissionEnableCondition.h"
#include "MissionEnableConditionMissionAvailable.generated.h"

class UMission;

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionMissionAvailable : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UMission> MissionClass;
    
    UMissionEnableConditionMissionAvailable();
};


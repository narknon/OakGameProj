#pragma once
#include "CoreMinimal.h"
#include "MissionEnableCondition.h"
#include "MissionEnableConditionKickoff.generated.h"

class UMission;

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionKickoff : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UMission> MissionClass;
    
    UMissionEnableConditionKickoff();
};


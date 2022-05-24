#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveReferenceWeak.h"
#include "MissionEnableCondition.h"
#include "EMissionObjectiveStatus.h"
#include "MissionEnableConditionObjective.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionObjective : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMissionObjectiveReferenceWeak ObjectiveRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMissionObjectiveStatus> ObjectiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreObjectiveBit;
    
    UMissionEnableConditionObjective();
};


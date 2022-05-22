#pragma once
#include "CoreMinimal.h"
#include "MissionEnableCondition.h"
#include "MissionObjectiveReferenceWeak.h"
#include "EObjectiveCountComparisonOperatorType.h"
#include "MissionEnableConditionObjectiveCount.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionObjectiveCount : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMissionObjectiveReferenceWeak ObjectiveRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectiveCountComparisonOperatorType ComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ObjectiveProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequireActiveObjective;
    
    UMissionEnableConditionObjectiveCount();
};


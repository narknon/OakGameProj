#pragma once
#include "CoreMinimal.h"
#include "MissionEnableCondition.h"
#include "MissionObjectiveSetReference.h"
#include "EMissionObjectiveSetStatus.h"
#include "EMissionEnableConditionObjectiveSetObjectiveStatus.h"
#include "MissionEnableConditionObjectiveSet.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionObjectiveSet : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMissionObjectiveSetReference ObjectiveSetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMissionObjectiveSetStatus> ObjectiveSetStatus;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMissionEnableConditionObjectiveSetObjectiveStatus> ObjectivesStatus;
    
    UMissionEnableConditionObjectiveSet();
};


#pragma once
#include "CoreMinimal.h"
#include "MissionEnableCondition.h"
#include "MissionObjectiveReferenceWeak.h"
#include "MissionEnableConditionBreadcrumbLinkedObjective.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableConditionBreadcrumbLinkedObjective : public UMissionEnableCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMissionObjectiveReferenceWeak ObjectiveRef;
    
    UMissionEnableConditionBreadcrumbLinkedObjective();
};


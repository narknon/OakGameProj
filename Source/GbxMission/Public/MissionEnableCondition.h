#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "MissionReferenceInterface.h"
#include "MissionObjectiveReferenceInterface.h"
#include "MissionObjectiveSetReferenceInterface.h"
#include "MissionEnableCondition.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionEnableCondition : public UGbxCondition, public IMissionReferenceInterface, public IMissionObjectiveReferenceInterface, public IMissionObjectiveSetReferenceInterface {
    GENERATED_BODY()
public:
    UMissionEnableCondition();
    
    // Fix for true pure virtual functions not being implemented
};


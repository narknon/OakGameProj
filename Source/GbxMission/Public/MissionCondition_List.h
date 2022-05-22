#pragma once
#include "CoreMinimal.h"
#include "MissionReferenceInterface.h"
#include "GbxCondition_List.h"
#include "MissionObjectiveReferenceInterface.h"
#include "MissionObjectiveSetReferenceInterface.h"
#include "MissionCondition_List.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXMISSION_API UMissionCondition_List : public UGbxCondition_List, public IMissionReferenceInterface, public IMissionObjectiveReferenceInterface, public IMissionObjectiveSetReferenceInterface {
    GENERATED_BODY()
public:
    UMissionCondition_List();
    
    // Fix for true pure virtual functions not being implemented
};


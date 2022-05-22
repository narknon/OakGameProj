#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "OakCondition_VehicleIsDrivenByAI.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UOakCondition_VehicleIsDrivenByAI : public UGbxCondition {
    GENERATED_BODY()
public:
    UOakCondition_VehicleIsDrivenByAI();
};


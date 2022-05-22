#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "OakCondition_IsInHostileVehicle.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UOakCondition_IsInHostileVehicle : public UGbxCondition {
    GENERATED_BODY()
public:
    UOakCondition_IsInHostileVehicle();
};


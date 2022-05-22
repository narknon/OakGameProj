#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "OakCondition_IsEndGamePartGuaranteedForLoot.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UOakCondition_IsEndGamePartGuaranteedForLoot : public UGbxCondition {
    GENERATED_BODY()
public:
    UOakCondition_IsEndGamePartGuaranteedForLoot();
};


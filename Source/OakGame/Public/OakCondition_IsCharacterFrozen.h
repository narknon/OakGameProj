#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "OakCondition_IsCharacterFrozen.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UOakCondition_IsCharacterFrozen : public UGbxCondition {
    GENERATED_BODY()
public:
    UOakCondition_IsCharacterFrozen();
};


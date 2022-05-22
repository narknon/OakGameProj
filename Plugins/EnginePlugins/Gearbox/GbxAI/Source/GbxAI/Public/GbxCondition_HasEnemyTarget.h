#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_HasEnemyTarget.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_HasEnemyTarget : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_HasEnemyTarget();
};


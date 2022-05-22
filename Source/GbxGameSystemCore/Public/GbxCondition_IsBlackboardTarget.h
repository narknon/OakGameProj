#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsBlackboardTarget.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_IsBlackboardTarget : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_IsBlackboardTarget();
};


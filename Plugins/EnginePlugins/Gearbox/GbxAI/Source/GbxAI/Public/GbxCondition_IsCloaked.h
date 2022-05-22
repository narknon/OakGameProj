#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsCloaked.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_IsCloaked : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_IsCloaked();
};


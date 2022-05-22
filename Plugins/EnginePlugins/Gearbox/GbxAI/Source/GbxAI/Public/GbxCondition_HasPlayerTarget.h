#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_HasPlayerTarget.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_HasPlayerTarget : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_HasPlayerTarget();
};


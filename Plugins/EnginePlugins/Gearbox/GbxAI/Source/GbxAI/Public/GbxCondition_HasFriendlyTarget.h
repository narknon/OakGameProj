#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_HasFriendlyTarget.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_HasFriendlyTarget : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_HasFriendlyTarget();
};


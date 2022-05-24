#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_CanUseRefillAmmo.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_CanUseRefillAmmo : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_CanUseRefillAmmo();
};


#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxParam.h"
#include "GbxCondition_HasTargetsInRange.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_HasTargetsInRange : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam Range;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam NumTargets;
    
    UGbxCondition_HasTargetsInRange();
};


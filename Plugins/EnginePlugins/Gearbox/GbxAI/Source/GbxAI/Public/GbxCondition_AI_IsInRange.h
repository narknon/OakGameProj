#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "GbxCondition_AI_IsInRange.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_AI_IsInRange : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam Range;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInvertRange;
    
    UGbxCondition_AI_IsInRange();
};


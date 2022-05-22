#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxFlagEval.h"
#include "GbxCondition_Flag.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_Flag : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxFlagEval FlagEval;
    
public:
    UGbxCondition_Flag();
};


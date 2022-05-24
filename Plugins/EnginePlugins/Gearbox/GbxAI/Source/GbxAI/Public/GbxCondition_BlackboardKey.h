#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxCondition.h"
#include "GbxCondition_BlackboardKey.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_BlackboardKey : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector Key;
    
    UPROPERTY(EditAnywhere)
    bool bInvertResult;
    
public:
    UGbxCondition_BlackboardKey();
};


#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsLowOnHealth.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_IsLowOnHealth : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LowHealth;
    
    UPROPERTY(EditAnywhere)
    bool bEvaluateOnContextOwner;
    
public:
    UGbxCondition_IsLowOnHealth();
};


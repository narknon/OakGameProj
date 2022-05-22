#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_AI_IsMoving.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_AI_IsMoving : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpeedThreshold;
    
public:
    UGbxCondition_AI_IsMoving();
};


#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EOakCharacterMovementConditionType.h"
#include "GbxCondition_OakCharacterMovementCondition.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_OakCharacterMovementCondition : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOakCharacterMovementConditionType Type;
    
public:
    UGbxCondition_OakCharacterMovementCondition();
};


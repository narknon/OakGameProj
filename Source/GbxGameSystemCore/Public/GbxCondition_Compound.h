#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "ECompoundConditionOperatorType.h"
#include "GbxCondition_Compound.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_Compound : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGbxCondition* Condition1;
    
    UPROPERTY(EditAnywhere)
    ECompoundConditionOperatorType Operator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGbxCondition* Condition2;
    
public:
    UGbxCondition_Compound();
};


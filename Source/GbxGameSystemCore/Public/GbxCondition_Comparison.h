#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "AttributeInitializationData.h"
#include "EConditionComparisonOperatorType.h"
#include "GbxCondition_Comparison.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_Comparison : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OperandA;
    
    UPROPERTY(EditAnywhere)
    EConditionComparisonOperatorType Operator;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OperandB;
    
public:
    UGbxCondition_Comparison();
};


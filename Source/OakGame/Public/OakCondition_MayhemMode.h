#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EOakMayhemModeConditionType.h"
#include "EConditionComparisonOperatorType.h"
#include "AttributeInitializationData.h"
#include "OakCondition_MayhemMode.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UOakCondition_MayhemMode : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOakMayhemModeConditionType Type;
    
    UPROPERTY(EditAnywhere)
    EConditionComparisonOperatorType Operator;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OtherOperand;
    
public:
    UOakCondition_MayhemMode();
};


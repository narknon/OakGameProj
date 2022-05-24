#pragma once
#include "CoreMinimal.h"
#include "BalanceFormulaDefinedValueRow.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "BalanceFormulaAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UBalanceFormulaAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBalanceFormulaDefinedValueRow Value;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeInitializationData> AdditionalScalars;
    
public:
    UBalanceFormulaAttributeValueResolver();
};


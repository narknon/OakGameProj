#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "BalanceFormulaDefinedValueRow.generated.h"

USTRUCT(BlueprintType)
struct FBalanceFormulaDefinedValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Multiplier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Level;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Power;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Offset;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Scalar;
    
public:
    GBXGAMESYSTEMCORE_API FBalanceFormulaDefinedValueRow();
};


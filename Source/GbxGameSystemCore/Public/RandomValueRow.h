#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "RandomValueRow.generated.h"

USTRUCT()
struct FRandomValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData RNG_LowerBound;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData RNG_UpperBound;
    
    UPROPERTY(EditAnywhere)
    bool bIntegerOnlyValues;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OptionalOutputMinValue;
    
    UPROPERTY(EditAnywhere)
    bool bClampToOutputMinValue;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OptionalOutputMaxValue;
    
    UPROPERTY(EditAnywhere)
    bool bClampToOutputMaxValue;
    
    GBXGAMESYSTEMCORE_API FRandomValueRow();
};


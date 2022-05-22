#pragma once
#include "CoreMinimal.h"
#include "AttributeConditionalValue.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "ConditionalAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UConditionalAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DefaultValue;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Scaler;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeConditionalValue> ConditionalValues;
    
public:
    UConditionalAttributeValueResolver();
};


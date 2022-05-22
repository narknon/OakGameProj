#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "ESimpleMathValueResolverOperatorType.h"
#include "SimpleMathValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API USimpleMathValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueA;
    
    UPROPERTY(EditAnywhere)
    ESimpleMathValueResolverOperatorType Operator;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueB;
    
    USimpleMathValueResolver();
};


#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "EStackOperator.h"
#include "ShieldAugmentValueResolver.generated.h"

class UShieldAugment;

UCLASS(EditInlineNew)
class UShieldAugmentValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UShieldAugment> Augment;
    
    UPROPERTY(EditAnywhere)
    bool bCheckPrimary;
    
    UPROPERTY(EditAnywhere)
    FName AugmentName;
    
    UPROPERTY(EditAnywhere)
    EStackOperator Operator;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueB;
    
    UShieldAugmentValueResolver();
};


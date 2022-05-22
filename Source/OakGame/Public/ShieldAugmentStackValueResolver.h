#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "ShieldAugmentStackValueResolver.generated.h"

class UShieldAugment;

UCLASS(EditInlineNew)
class UShieldAugmentStackValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UShieldAugment> Augment;
    
    UPROPERTY(EditAnywhere)
    FName AugmentName;
    
    UShieldAugmentStackValueResolver();
};


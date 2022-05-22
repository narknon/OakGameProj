#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "GbxAbilityAttributePropertyValueResolver.generated.h"

class UGbxAbility;

UCLASS(EditInlineNew)
class UGbxAbilityAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UGbxAbility> GbxAbilityClass;
    
public:
    UGbxAbilityAttributePropertyValueResolver();
};


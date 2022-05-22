#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "OakActionAbilityAttributePropertyValueResolver.generated.h"

class UOakActionAbility;

UCLASS(EditInlineNew)
class UOakActionAbilityAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UOakActionAbility> ActionAbilityClass;
    
public:
    UOakActionAbilityAttributePropertyValueResolver();
};


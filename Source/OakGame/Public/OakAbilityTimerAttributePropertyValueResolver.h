#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "OakAbilityTimerAttributePropertyValueResolver.generated.h"

class UOakAbility;
class UOakAbilityTimerData;

UCLASS(EditInlineNew)
class UOakAbilityTimerAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UOakAbility> AbilityClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UOakAbilityTimerData> Timer;
    
public:
    UOakAbilityTimerAttributePropertyValueResolver();
};


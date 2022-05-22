#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "StatusEffectModifierAttributePropertyValueResolver.generated.h"

class UStatusEffectData;

UCLASS(EditInlineNew)
class UStatusEffectModifierAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStatusEffectData> StatusEffectData;
    
public:
    UStatusEffectModifierAttributePropertyValueResolver();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeContextResolver.h"
#include "OakAbilityContextResolver_ActionAbility.generated.h"

class UOakActionAbility;

UCLASS(EditInlineNew)
class UOakAbilityContextResolver_ActionAbility : public UAttributeContextResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakActionAbility> ActionAbilityClass;
    
public:
    UOakAbilityContextResolver_ActionAbility();
};


#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EWeaponWearValueType.h"
#include "WeaponWearAttributeValueResolver.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UWeaponWearAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EWeaponWearValueType ValueToResolve;
    
public:
    UWeaponWearAttributeValueResolver();
};


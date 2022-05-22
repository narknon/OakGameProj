#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "WeaponAccuracyPoolAttributePropertyValueResolver.generated.h"

class UGameResourceData;

UCLASS(EditInlineNew)
class GBXWEAPON_API UWeaponAccuracyPoolAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* DefaultResource;
    
public:
    UWeaponAccuracyPoolAttributePropertyValueResolver();
};


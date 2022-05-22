#pragma once
#include "CoreMinimal.h"
#include "AttributeContextResolver.h"
#include "WeaponAttributeContextResolver.generated.h"

UCLASS(EditInlineNew)
class GBXWEAPON_API UWeaponAttributeContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 UseModeContextBitmask;
    
public:
    UWeaponAttributeContextResolver();
};


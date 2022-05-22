#pragma once
#include "CoreMinimal.h"
#include "AttributeContextResolver.h"
#include "WeaponSlotAttributeContextResolver.generated.h"

class UWeaponSlotData;

UCLASS(EditInlineNew)
class UWeaponSlotAttributeContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UWeaponSlotData* WeaponSlot;
    
public:
    UWeaponSlotAttributeContextResolver();
};


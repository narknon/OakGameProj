#pragma once
#include "CoreMinimal.h"
#include "AttributeContextResolver.h"
#include "OakWeaponAttributeMultiContextResolver.generated.h"

class UWeaponSlotData;

UCLASS(EditInlineNew)
class UOakWeaponAttributeMultiContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<UWeaponSlotData*> Slots;
    
public:
    UOakWeaponAttributeMultiContextResolver();
};


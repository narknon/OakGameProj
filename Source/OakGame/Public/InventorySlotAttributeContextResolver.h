#pragma once
#include "CoreMinimal.h"
#include "AttributeContextResolver.h"
#include "InventorySlotAttributeContextResolver.generated.h"

class UInventorySlotData;

UCLASS(EditInlineNew)
class UInventorySlotAttributeContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UInventorySlotData* InventorySlot;
    
public:
    UInventorySlotAttributeContextResolver();
};


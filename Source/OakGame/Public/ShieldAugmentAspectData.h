#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "ShieldAugmentAspectData.generated.h"

class UShieldAugment;

UCLASS(EditInlineNew)
class UShieldAugmentAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly, Instanced)
    UShieldAugment* Augment;
    
public:
    UShieldAugmentAspectData();
};


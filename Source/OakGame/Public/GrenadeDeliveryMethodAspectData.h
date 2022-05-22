#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "GrenadeDeliveryMethodAspectData.generated.h"

class UGrenadeBehavior_Delivery;

UCLASS(EditInlineNew)
class UGrenadeDeliveryMethodAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly, Instanced)
    UGrenadeBehavior_Delivery* DeliveryBehavior;
    
public:
    UGrenadeDeliveryMethodAspectData();
};


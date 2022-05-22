#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "GrenadePayloadMethodAspectData.generated.h"

class UGrenadeBehavior_Payload;

UCLASS(EditInlineNew)
class UGrenadePayloadMethodAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly, Instanced)
    UGrenadeBehavior_Payload* PayloadBehavior;
    
public:
    UGrenadePayloadMethodAspectData();
};


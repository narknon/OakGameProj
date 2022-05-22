#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryOwnerInterface.generated.h"

class AInventoryItemPickup;
class AActor;

UINTERFACE(Blueprintable)
class GBXINVENTORY_API UInventoryOwnerInterface : public UInterface {
    GENERATED_BODY()
};

class GBXINVENTORY_API IInventoryOwnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void AttachedItemPickedUp(AInventoryItemPickup* InventoryItemPickedUp, AActor* PickedUpBy);
    
};


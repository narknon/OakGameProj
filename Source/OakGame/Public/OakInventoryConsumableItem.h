#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItem.h"
#include "OakInventoryConsumableItem.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Const)
class OAKGAME_API AOakInventoryConsumableItem : public AOakInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UStaticMeshComponent* ItemMeshComponent;
    
public:
    AOakInventoryConsumableItem();
};


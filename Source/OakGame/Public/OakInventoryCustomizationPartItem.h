#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItem.h"
#include "OakInventoryCustomizationPartItem.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Const)
class OAKGAME_API AOakInventoryCustomizationPartItem : public AOakInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UStaticMeshComponent* ItemMeshComponent;
    
public:
    AOakInventoryCustomizationPartItem();
};


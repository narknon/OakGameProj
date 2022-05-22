#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItemPickup.h"
#include "OakInventoryDisplayItem.generated.h"

UCLASS()
class OAKGAME_API AOakInventoryDisplayItem : public AOakInventoryItemPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemCardDisplayLifetime;
    
    AOakInventoryDisplayItem();
};


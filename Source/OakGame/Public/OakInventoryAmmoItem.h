#pragma once
#include "CoreMinimal.h"
#include "OakInventoryConsumableItem.h"
#include "OakInventoryAmmoItem.generated.h"

UCLASS(Abstract)
class OAKGAME_API AOakInventoryAmmoItem : public AOakInventoryConsumableItem {
    GENERATED_BODY()
public:
    AOakInventoryAmmoItem();
};


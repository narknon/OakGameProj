#pragma once
#include "CoreMinimal.h"
#include "OakInventoryConsumableItem.h"
#include "OakInventoryHealthItem.generated.h"

class UGameStatData;

UCLASS(Abstract)
class OAKGAME_API AOakInventoryHealthItem : public AOakInventoryConsumableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGameStatData* HealthStat;
    
public:
    AOakInventoryHealthItem();
};


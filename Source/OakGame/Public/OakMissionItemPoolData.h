#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemPoolData.h"
#include "OakMissionItemPoolData.generated.h"

class AOakInventoryItemPickup;

UCLASS()
class OAKGAME_API UOakMissionItemPoolData : public UItemPoolData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakInventoryItemPickup> PickupClass;
    
    UOakMissionItemPoolData();
};


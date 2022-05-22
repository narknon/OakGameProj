#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_Oak.h"
#include "SpawnFactory_OakItemPickup.generated.h"

class AOakInventoryItemPickup;
class UItemPoolData;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakItemPickup : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakInventoryItemPickup> PickupActorClass;
    
    UPROPERTY(EditAnywhere)
    UItemPoolData* ItemPoolToDropFrom;
    
public:
    USpawnFactory_OakItemPickup();
};


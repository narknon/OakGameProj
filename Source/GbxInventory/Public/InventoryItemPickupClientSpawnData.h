#pragma once
#include "CoreMinimal.h"
#include "InventoryReplicationData.h"
#include "ReplicatedUIStatCollectionData.h"
#include "InventoryItemPickupClientSpawnData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryItemPickupClientSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bSpawnDefaultPickupActor;
    
    UPROPERTY()
    FInventoryReplicationData BalanceData;
    
    UPROPERTY()
    FReplicatedUIStatCollectionData UIStats;
    
    UPROPERTY()
    int32 MonetaryValue;
    
    UPROPERTY()
    int32 InventoryScoreValue;
    
    FInventoryItemPickupClientSpawnData();
};


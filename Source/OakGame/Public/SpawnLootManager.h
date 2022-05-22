#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpawnDroppedPickupLootRequestEntry.h"
#include "SpawnInventoryLootRequestEntry.h"
#include "SpawnLootManager.generated.h"

class AOakInventoryItemPickup;

UCLASS(Transient, Config=Game)
class OAKGAME_API USpawnLootManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSpawnDroppedPickupLootRequestEntry> DroppedPickupRequests;
    
    UPROPERTY()
    TArray<FSpawnInventoryLootRequestEntry> InventoryActorRequests;
    
    UPROPERTY()
    TArray<AOakInventoryItemPickup*> PickupsHiddenWhileInStatusMenu;
    
    UPROPERTY()
    TArray<AOakInventoryItemPickup*> PickupsHiddenInCinematic;
    
public:
    USpawnLootManager();
private:
    UFUNCTION()
    void OnNumPlayersChanged(int32 NewNumPlayers);
    
};


#pragma once
#include "CoreMinimal.h"
#include "InventoryUISaveGameData.generated.h"

USTRUCT()
struct FInventoryUISaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PickupOrderIndex;
    
    UPROPERTY()
    bool bHasBeenSeenInInventoryMenu;
    
    UPROPERTY()
    bool bMarkedAsFavorite;
    
    UPROPERTY()
    bool bMarkedAsJunk;
    
    UPROPERTY()
    int32 InventoryListIndex;
    
    OAKGAME_API FInventoryUISaveGameData();
};


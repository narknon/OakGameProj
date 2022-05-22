#pragma once
#include "CoreMinimal.h"
#include "InventorySaveGameData.h"
#include "OakInventoryItemSaveGameData.generated.h"

class UWeaponSkinPartData;

USTRUCT(BlueprintType)
struct FOakInventoryItemSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInventorySaveGameData Item;
    
    UPROPERTY()
    int32 PickupOrderIndex;
    
    UPROPERTY()
    int32 Flags;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UWeaponSkinPartData> WeaponSkinPath;
    
public:
    OAKGAME_API FOakInventoryItemSaveGameData();
};


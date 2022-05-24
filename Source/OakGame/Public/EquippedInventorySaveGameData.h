#pragma once
#include "CoreMinimal.h"
#include "EquippedInventorySaveGameData.generated.h"

class UInventorySlotData;
class UWeaponTrinketPartData;

USTRUCT(BlueprintType)
struct FEquippedInventorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 InventoryListIndex;
    
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventorySlotData> SlotDataPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWeaponTrinketPartData> TrinketDataPath;
    
public:
    OAKGAME_API FEquippedInventorySaveGameData();
};


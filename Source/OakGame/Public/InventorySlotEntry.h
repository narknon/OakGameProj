#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InventorySlotEntry.generated.h"

class AActor;
class UInventorySlotData;
class UWeaponTrinketPartData;

USTRUCT(BlueprintType)
struct FInventorySlotEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* EquippedInventory;
    
    UPROPERTY()
    bool Enabled;
    
    UPROPERTY()
    bool Selected;
    
    UPROPERTY()
    UInventorySlotData* SlotData;
    
    UPROPERTY()
    UWeaponTrinketPartData* EquippedTrinket;
    
private:
    UPROPERTY(NotReplicated)
    AActor* ClientCachedEquippedInventory;
    
    UPROPERTY(NotReplicated)
    UWeaponTrinketPartData* ClientCachedEquippedTrinket;
    
public:
    OAKGAME_API FInventorySlotEntry();
};


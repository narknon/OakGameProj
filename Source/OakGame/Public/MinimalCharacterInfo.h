#pragma once
#include "CoreMinimal.h"
#include "MinimalInventoryInfo.h"
#include "MinimalEquippedInventoryInfo.h"
#include "MinimalAbilitSlotInfo.h"
#include "MinimalAugmentSlotInfo.h"
#include "SkillTreeItemsStatValues.h"
#include "MinimalCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FMinimalCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 TimePlayedSeconds;
    
    UPROPERTY()
    int32 ExperiencePoints;
    
    UPROPERTY()
    int32 PlayerLevel;
    
    UPROPERTY()
    int32 BackpackSize;
    
    UPROPERTY()
    int32 GoldenKeys;
    
    UPROPERTY()
    TArray<FMinimalInventoryInfo> Inventory;
    
    UPROPERTY()
    TArray<FMinimalEquippedInventoryInfo> EquippedInventory;
    
    UPROPERTY()
    TMap<uint32, int32> InventoryCategoryList;
    
    UPROPERTY()
    int32 AbilityPoints;
    
    UPROPERTY()
    TMap<uint32, int32> TreeItems;
    
    UPROPERTY()
    TArray<FMinimalAbilitSlotInfo> AbilitySlots;
    
    UPROPERTY()
    TArray<FMinimalAugmentSlotInfo> AugmentSlots;
    
    UPROPERTY()
    uint32 PetAugmentHash;
    
    UPROPERTY()
    TMap<uint32, FSkillTreeItemsStatValues> SkillTreeItemsStatValues;
    
    OAKGAME_API FMinimalCharacterInfo();
};


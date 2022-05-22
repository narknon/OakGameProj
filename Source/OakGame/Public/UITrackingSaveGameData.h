#pragma once
#include "CoreMinimal.h"
#include "UITrackingSaveGameData.generated.h"

class UInventorySlotData;

USTRUCT(BlueprintType)
struct FUITrackingSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool bHasSeenSkillMenuUnlock;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasSeenGuardianRankMenuUnlock;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasSeenEchoBoot_AmmoBar;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasSeenEchoBoot_ShieldBar;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasSeenEchoBoot_Grenades;
    
    UPROPERTY(VisibleAnywhere)
    int32 HighestTHVMBreadcrumbSeen;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<UInventorySlotData>> InventorySlotUnlocksSeen;
    
    UPROPERTY(VisibleAnywhere)
    int32 SavedSpinOffset;
    
    OAKGAME_API FUITrackingSaveGameData();
};


#pragma once
#include "CoreMinimal.h"
#include "GFxMissionTrackerInventoryItemData.h"
#include "GFxMissionTrackerRewardDisplayData.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMissionTrackerRewardDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Currency;
    
    UPROPERTY(Transient)
    UInventoryCategoryData* CurrencyType;
    
    UPROPERTY(Transient)
    TArray<FGFxMissionTrackerInventoryItemData> Items;
    
    FGFxMissionTrackerRewardDisplayData();
};


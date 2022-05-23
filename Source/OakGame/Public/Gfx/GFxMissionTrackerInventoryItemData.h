#pragma once
#include "CoreMinimal.h"
#include "GFxMissionTrackerInventoryItemData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMissionTrackerInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString ItemTypeFrameName;
    
    UPROPERTY(Transient)
    FString ItemRarityFrameName;
    
    UPROPERTY(Transient)
    FText ItemRarityFrameText;
    
    UPROPERTY(Transient)
    int32 ItemScore;
    
    FGFxMissionTrackerInventoryItemData();
};


#pragma once
#include "CoreMinimal.h"
#include "ActiveFastTravelSaveData.h"
#include "PlaythroughActiveFastTravelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlaythroughActiveFastTravelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FActiveFastTravelSaveData> ActiveTravelStations;
    
    OAKGAME_API FPlaythroughActiveFastTravelSaveData();
};


#pragma once
#include "CoreMinimal.h"
#include "DlcLevelTravelPair.generated.h"

class UTravelStationData;

USTRUCT(BlueprintType)
struct FDlcLevelTravelPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTravelStationData* NonDlcStationData;
    
    UPROPERTY(EditDefaultsOnly)
    UTravelStationData* DlcStationData;
    
    OAKGAME_API FDlcLevelTravelPair();
};


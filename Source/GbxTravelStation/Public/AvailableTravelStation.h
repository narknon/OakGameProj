#pragma once
#include "CoreMinimal.h"
#include "AvailableTravelStation.generated.h"

class UFastTravelStationDebugButton;

USTRUCT(BlueprintType)
struct FAvailableTravelStation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString StationToTravelTo;
    
    UPROPERTY(Export)
    UFastTravelStationDebugButton* OptionButton;
    
    GBXTRAVELSTATION_API FAvailableTravelStation();
};


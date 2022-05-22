#pragma once
#include "CoreMinimal.h"
#include "ActiveFastTravelData.generated.h"

class UFastTravelStationData;

USTRUCT(BlueprintType)
struct FActiveFastTravelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UFastTravelStationData* FastTravelData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHighlightDiscovery;
    
    GBXTRAVELSTATION_API FActiveFastTravelData();
};


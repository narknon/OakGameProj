#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TravelStationData.h"
#include "EFastTravelDirection.h"
#include "FastTravelStationData.generated.h"

UCLASS()
class GBXTRAVELSTATION_API UFastTravelStationData : public UTravelStationData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    EFastTravelDirection TravelDirection;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform PlanetTransform;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDiscoveredByDefault;
    
    UFastTravelStationData();
};


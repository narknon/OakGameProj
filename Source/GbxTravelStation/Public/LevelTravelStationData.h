#pragma once
#include "CoreMinimal.h"
#include "TravelStationData.h"
#include "LevelTravelStationData.generated.h"

UCLASS()
class GBXTRAVELSTATION_API ULevelTravelStationData : public UTravelStationData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName TravelToMapName;
    
    UPROPERTY(VisibleDefaultsOnly)
    FString DestinationStationString;
    
    UPROPERTY(VisibleDefaultsOnly)
    TSoftObjectPtr<UTravelStationData> DestinationStation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bVehiclesAllowed;
    
    UPROPERTY(VisibleAnywhere)
    bool bVirtualLevel;
    
    UPROPERTY(VisibleAnywhere)
    bool bNoOutOfMapWaypoints;
    
    ULevelTravelStationData();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FastTravelStationActiveEntry.h"
#include "FastTravelStationActiveContainer.generated.h"

USTRUCT()
struct GBXTRAVELSTATION_API FFastTravelStationActiveContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FFastTravelStationActiveEntry> ActiveFastTravelStations;
    
    FFastTravelStationActiveContainer();
};


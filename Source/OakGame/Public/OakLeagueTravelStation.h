#pragma once
#include "CoreMinimal.h"
#include "TravelStationObject.h"
#include "OakLeagueTravelStation.generated.h"

class ULevelTravelStationData;

UCLASS(Abstract)
class OAKGAME_API AOakLeagueTravelStation : public ATravelStationObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ULevelTravelStationData* LeagueEnterTravelStationData;
    
public:
    AOakLeagueTravelStation();
};


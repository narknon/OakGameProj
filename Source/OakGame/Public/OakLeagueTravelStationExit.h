#pragma once
#include "CoreMinimal.h"
#include "TravelStationObject.h"
#include "OakLeagueTravelStationExit.generated.h"

class ULevelTravelStationData;

UCLASS(Abstract)
class OAKGAME_API AOakLeagueTravelStationExit : public ATravelStationObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ULevelTravelStationData* LeagueExitTravelStationData;
    
public:
    AOakLeagueTravelStationExit();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TravelStationModuleSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GBXTRAVELSTATION_API UTravelStationModuleSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float PlayerHalfHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float PlayerRadius;
    
    UPROPERTY(Config, EditAnywhere)
    int32 TravelToStationCountdownTime;
    
    UPROPERTY(Config, EditAnywhere)
    FVector VehicleExtents;
    
public:
    UTravelStationModuleSettings();
};


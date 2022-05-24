#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxVehicleSpeedometer.generated.h"

class UGbxGFxProgressBar;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxVehicleSpeedometer : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxProgressBar* SpeedMeter;
    
    UPROPERTY(Transient)
    UGbxTextField* SpeedText;
    
    UPROPERTY(Transient)
    UGbxTextField* MPHorKPHText;
    
public:
    UGFxVehicleSpeedometer();
};


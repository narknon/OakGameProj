#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "VehicleConfigurationRtpc.h"
#include "VehicleAudioAspectData.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class UVehicleAudioAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<UWwiseEvent*> ConfigurationEvents;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FVehicleConfigurationRtpc> ConfigurationRtpcs;
    
public:
    UVehicleAudioAspectData();
};


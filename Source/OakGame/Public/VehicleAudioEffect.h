#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectDataWithLocation.h"
#include "ConditionalAudioSwitch.h"
#include "VehicleAudioEffect.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class UVehicleAudioEffect : public UBaseVehicleEffectDataWithLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlayAudioAtLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* StartAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* StopAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FConditionalAudioSwitch> ConditionalAudioSwitches;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AudioComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AudioEmitterRadius;
    
    UVehicleAudioEffect();
};


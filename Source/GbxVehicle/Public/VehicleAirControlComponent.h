#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "VehicleAirControlComponent.generated.h"

class AVehicle;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleAirControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float YawControlForce;
    
    UPROPERTY(EditAnywhere)
    float PitchControlForce;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ForceRatio;
    
    UPROPERTY(Transient)
    AVehicle* Vehicle;
    
public:
    UVehicleAirControlComponent();
};


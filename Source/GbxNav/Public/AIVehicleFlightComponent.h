#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "VehicleSplineConsumerInterface.h"
#include "Interfaces/NetworkPredictionInterface.h"
#include "FlightState.h"
#include "AIVehicleFlightComponent.generated.h"

class UGbxNavComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UAIVehicleFlightComponent : public UFloatingPawnMovement, public IVehicleSplineConsumerInterface, public INetworkPredictionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRotator RotationRate;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* GbxNavComponent;
    
    UPROPERTY(EditAnywhere)
    float VelocityScaleDuringDescent;
    
    UPROPERTY(EditAnywhere)
    float RotationScaleDuringDescent;
    
    UPROPERTY(EditAnywhere)
    float LateralDistanceToStartDescent;
    
    UPROPERTY(EditAnywhere)
    float VelocityScaleDuringAscent;
    
    UPROPERTY(EditAnywhere)
    float RotationScaleDuringAscent;
    
    UPROPERTY(EditAnywhere)
    float MaxPitchInDegrees;
    
    UPROPERTY(EditAnywhere)
    float MaxRollInDegrees;
    
    UPROPERTY(ReplicatedUsing=OnRep_FlightState)
    FFlightState FlightState;
    
public:
    UAIVehicleFlightComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_FlightState();
    
    
    // Fix for true pure virtual functions not being implemented
};


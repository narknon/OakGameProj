#pragma once
#include "CoreMinimal.h"
#include "NumericRange.h"
#include "GbxNavForwardState.generated.h"

class AGbxNavWorld;
class UWorld;
class UGbxNavComponent;
class UAIVehicleFlightComponent;
class UGbxCharacterMovementComponent;

USTRUCT(BlueprintType)
struct FGbxNavForwardState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float MinSpeedScale;
    
    UPROPERTY(EditAnywhere)
    bool bScaleSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxTurnScale;
    
    UPROPERTY(EditAnywhere)
    bool bScaleRotation;
    
    UPROPERTY(EditAnywhere)
    float ScaleInterpTime;
    
    UPROPERTY(EditAnywhere)
    FNumericRange DistanceRange;
    
    UPROPERTY(EditAnywhere)
    float WallCheckDegreesPerSegment;
    
    UPROPERTY(EditAnywhere)
    float MinTurnRadius;
    
    UPROPERTY()
    UWorld* World;
    
    UPROPERTY()
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export)
    UGbxNavComponent* NavComponent;
    
    UPROPERTY(Export)
    UGbxCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(Export)
    UAIVehicleFlightComponent* VehicleFlightComponent;
    
public:
    GBXNAV_API FGbxNavForwardState();
};


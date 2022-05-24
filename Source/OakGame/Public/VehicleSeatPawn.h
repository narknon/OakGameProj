#pragma once
#include "CoreMinimal.h"
#include "HealthBarInfoProviderInterface.h"
#include "SeatPawn.h"
#include "HUDDataProviderInterface.h"
#include "DamageCauserInterface.h"
#include "VehicleSeatPawn.generated.h"

class UGbxHUDData;
class AOakVehicle;
class UTurretMovementComponent;
class UVehicleSeatComponent;

UCLASS()
class AVehicleSeatPawn : public ASeatPawn, public IHealthBarInfoProviderInterface, public IHUDDataProviderInterface, public IDamageCauserInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTurretMovementComponent* TurretMovementComponent;
    
    UPROPERTY(EditAnywhere)
    bool bControlledByVehicleWhenUnoccupied;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDData* HUDInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bControlledByVehicle;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreCollisionWithVehicle;
    
public:
    AVehicleSeatPawn();
    UFUNCTION(BlueprintPure)
    AOakVehicle* GetVehicle() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


#include "VehicleSeatPawn.h"
#include "VehicleSeatComponent.h"

class AOakVehicle;

AOakVehicle* AVehicleSeatPawn::GetVehicle() const {
    return NULL;
}

AVehicleSeatPawn::AVehicleSeatPawn() {
    this->VehicleSeatComponent = CreateDefaultSubobject<UVehicleSeatComponent>(TEXT("SeatComponent"));
    this->TurretMovementComponent = NULL;
    this->bControlledByVehicleWhenUnoccupied = false;
    this->HUDInfo = NULL;
    this->Vehicle = NULL;
    this->bControlledByVehicle = false;
    this->bIgnoreCollisionWithVehicle = true;
}


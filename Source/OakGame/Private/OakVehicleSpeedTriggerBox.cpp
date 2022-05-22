#include "OakVehicleSpeedTriggerBox.h"

class AActor;
class UPrimitiveComponent;

void AOakVehicleSpeedTriggerBox::VehicleTouched(AActor* OtherActor, bool bIsPlayer, UPrimitiveComponent* OptionalTouchedComponent) {
}

AOakVehicleSpeedTriggerBox::AOakVehicleSpeedTriggerBox() {
    this->WantedSpeed = -1.00f;
    this->WantedSteering = 0.00f;
    this->bMaxSpeed = true;
    this->bUseBoost = true;
    this->bForceReverse = false;
    this->bUseHandbrake = false;
    this->Duration = 3.00f;
}


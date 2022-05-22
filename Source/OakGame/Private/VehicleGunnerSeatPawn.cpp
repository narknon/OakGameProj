#include "VehicleGunnerSeatPawn.h"

class AController;

void AVehicleGunnerSeatPawn::OnActionUsageEnded(AController* UserController, FGameplayTag ActionTag, ESmartActionResult Result) {
}

void AVehicleGunnerSeatPawn::OnActionReserved(AController* UserController, FGameplayTag ActionTag) {
}

AVehicleGunnerSeatPawn::AVehicleGunnerSeatPawn() {
    this->GetInSmartObject = NULL;
    this->SmartObjectComponentName = TEXT("SmartObject_GetInTurret");
    this->GetInVehicleBlackboardKeyName = TEXT("SmartObject_GetInVehicle");
    this->GetInVehicleSlotIndexBlackboardKeyName = TEXT("SmartObject_GetInVehicleSlotIndex");
}


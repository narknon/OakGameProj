#include "CatchARide.h"

class AController;
class UPrimitiveComponent;
class AOakPlayerController;

void ACatchARide::SetDeployedNonInteractiveState(bool bForceDeployed) {
}




void ACatchARide::HandleSecondaryUse(AController* UserController, UPrimitiveComponent* UsedComponent) {
}

bool ACatchARide::CanRespawnVehicle(AOakPlayerController* PC, const FOakCARMenuVehicleConfig& VehicleConfig) const {
    return false;
}

ACatchARide::ACatchARide() {
    this->RestrictionType = ECARRestrictionType::Default;
    this->CatchARide_Platform1 = NULL;
    this->CatchARide_Platform2 = NULL;
    this->bIsDeploymentAllowed = true;
    this->bIsTeleportToDeployedAllowed = true;
    this->StationName = FText::FromString(TEXT("Catch-A-Ride"));
    this->CannotSpawnText = FText::FromString(TEXT("Platform Blocked!"));
    this->CatchARideLockedText = FText::FromString(TEXT("Console locked!"));
    this->CatchARideDisabledText = FText::FromString(TEXT("Console disabled!"));
    this->AssociatedMenu = NULL;
}


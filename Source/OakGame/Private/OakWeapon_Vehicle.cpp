#include "OakWeapon_Vehicle.h"
#include "Net/UnrealNetwork.h"

class AController;
class APawn;

void AOakWeapon_Vehicle::OnPawnDetachedFromWeapon(APawn* Pawn, AController* Controller) {
}

void AOakWeapon_Vehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakWeapon_Vehicle, PreferredSlotId);
    DOREPLIFETIME(AOakWeapon_Vehicle, DataAsset);
}

AOakWeapon_Vehicle::AOakWeapon_Vehicle() {
    this->PreferredSlotId = -1;
    this->VehicleWeapon = VehicleWeapons::Technical_BarrelLauncher;
    this->DataAsset = NULL;
}


#include "ZoneMapVehicleIcon_POI.h"

class UVehicleSeatComponent;
class AOakVehicle;
class AOakCharacter;

void AZoneMapVehicleIcon_POI::OnVehicleSeatsInitialized(AOakVehicle* AssociatedVehicle) {
}

void AZoneMapVehicleIcon_POI::OnSpawnByCatchARideChanged() {
}

void AZoneMapVehicleIcon_POI::OnSeatAttachStateChanged() {
}

void AZoneMapVehicleIcon_POI::OnOtherCharacterExitedVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character) {
}

void AZoneMapVehicleIcon_POI::OnOtherCharacterEnteredVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character) {
}

AZoneMapVehicleIcon_POI::AZoneMapVehicleIcon_POI() {
    this->CatchARidePOIType = NULL;
    this->PlayerPOIType = NULL;
    this->FriendlyPOIType = NULL;
    this->EmptyPOIType = NULL;
    this->EnemyPOIType = NULL;
}


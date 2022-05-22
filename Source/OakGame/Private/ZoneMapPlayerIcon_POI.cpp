#include "ZoneMapPlayerIcon_POI.h"

class UPawnAttachSlotComponent;

void AZoneMapPlayerIcon_POI::SetIsOwningPlayer() {
}

void AZoneMapPlayerIcon_POI::OnPlayerExitedVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void AZoneMapPlayerIcon_POI::OnPlayerEnteringVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

AZoneMapPlayerIcon_POI::AZoneMapPlayerIcon_POI() {
    this->bUpdateWPOMaterialForVehicleInZoneMapView = false;
}


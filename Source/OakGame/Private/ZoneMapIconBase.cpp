#include "ZoneMapIconBase.h"

void AZoneMapIconBase::ViewModeChanged_Implementation() {
}

void AZoneMapIconBase::SetHighlighted_Implementation(bool bNewActivated) {
}



AZoneMapIconBase::AZoneMapIconBase() {
    this->bDisplayInFastTravelList = false;
    this->SpawnedFromActor = NULL;
    this->ZoneMap = NULL;
    this->bActivated = false;
}


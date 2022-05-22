#include "TravelStationData.h"

FName UTravelStationData::GetStationMapName() const {
    return NAME_None;
}

UTravelStationData::UTravelStationData() {
    this->DisplayUIName = NULL;
    this->DescriptionUI = NULL;
}


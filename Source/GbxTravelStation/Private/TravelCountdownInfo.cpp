#include "TravelCountdownInfo.h"

FTravelCountdownInfo::FTravelCountdownInfo() {
    this->TravelStationDestination = NULL;
    this->RemainingTime = 0;
    this->Status = ETravelStatus::None;
    this->bDisallowLocalTravel = false;
}


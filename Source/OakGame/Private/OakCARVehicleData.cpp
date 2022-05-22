#include "OakCARVehicleData.h"

UOakCARVehicleData::UOakCARVehicleData() {
    this->RestrictionType = ECARRestrictionType::Default;
    this->bIsSmallVehicle = false;
    this->SortPriority = 0;
    this->StandInDefault = TEXT("Vehicle");
    this->StandInByPart[0] = TEXT("Vehicle");
    this->StandInByPart[1] = TEXT("Vehicle");
    this->StandInByPart[2] = TEXT("Vehicle");
    this->StandInByPart[3] = TEXT("Vehicle");
    this->StandInByPart[4] = TEXT("Vehicle");
    this->StandInByPart[5] = TEXT("Vehicle");
    this->StandInByPart[6] = TEXT("Vehicle");
    this->StandInByPart[7] = TEXT("Vehicle");
    this->StandInByPart[8] = TEXT("Vehicle");
}


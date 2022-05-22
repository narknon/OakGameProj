#include "EncounterAdvanceData.h"

FEncounterAdvanceData::FEncounterAdvanceData() {
    this->Type = EEncounterAdvanceType::All;
    this->bUseTimer = false;
    this->Timer = 0.00f;
    this->bUsePercent = false;
    this->Percent = 0.00f;
}


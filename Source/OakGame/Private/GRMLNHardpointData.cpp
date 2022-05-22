#include "GRMLNHardpointData.h"

FGRMLNHardpointData::FGRMLNHardpointData() {
    this->Type = EGRMLNHardpointType::None;
    this->bIsModUnlockedHardpoint = false;
    this->ModUnlock = EGRMLNModType::Mod1;
    this->LightProjectileDataClass = NULL;
    this->RandomRangeMin = 0.00f;
    this->RandomRangeMax = 0.00f;
    this->Owner = NULL;
}


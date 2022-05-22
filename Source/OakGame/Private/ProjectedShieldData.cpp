#include "ProjectedShieldData.h"

UProjectedShieldData::UProjectedShieldData() {
    this->Mesh = NULL;
    this->Material = NULL;
    this->StartShieldWiseEvent = NULL;
    this->StopShieldWiseEvent = NULL;
    this->Particle = NULL;
    this->AttachOnSpawn = true;
}


#include "SpawnDetails.h"

FSpawnDetails::FSpawnDetails() {
    this->Critical = ESpawnerCritical::NotCritical;
    this->bOverrideCritical = false;
    this->RespawnStyle = ERespawnStyle::Timed;
    this->bOverrideRespawnStyle = false;
    this->IrrelevantAction = EIrrelevantAction::Suspend;
    this->bOverrideIrrelevantAction = false;
    this->bCritical = false;
}


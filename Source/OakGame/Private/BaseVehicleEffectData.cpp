#include "BaseVehicleEffectData.h"

UBaseVehicleEffectData::UBaseVehicleEffectData() {
    this->EffectEvent = EVehicleEffectEvent::None;
    this->bPlayerOnly = false;
    this->bExcludedInSplitScreen = false;
    this->StartCondition = NULL;
    this->StopCondition = NULL;
}


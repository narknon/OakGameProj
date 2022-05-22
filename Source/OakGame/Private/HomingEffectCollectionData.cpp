#include "HomingEffectCollectionData.h"

UHomingEffectCollectionData::UHomingEffectCollectionData() {
    this->bHasEffect = true;
    this->bHasAudio = false;
    this->DefaultEffect = NULL;
    this->HomingEffect = NULL;
    this->DefaultAudio = NULL;
    this->HomingAudio = NULL;
}


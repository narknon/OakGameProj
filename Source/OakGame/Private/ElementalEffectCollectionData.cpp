#include "ElementalEffectCollectionData.h"

UElementalEffectCollectionData::UElementalEffectCollectionData() {
    this->bHasElementalEffect = true;
    this->bHasElementalAudio = false;
    this->bFallbackToDefault = true;
    this->ElementalEffect[0] = NULL;
    this->ElementalEffect[1] = NULL;
    this->ElementalEffect[2] = NULL;
    this->ElementalEffect[3] = NULL;
    this->ElementalEffect[4] = NULL;
    this->ElementalEffect[5] = NULL;
    this->ElementalAudio[0] = NULL;
    this->ElementalAudio[1] = NULL;
    this->ElementalAudio[2] = NULL;
    this->ElementalAudio[3] = NULL;
    this->ElementalAudio[4] = NULL;
    this->ElementalAudio[5] = NULL;
}


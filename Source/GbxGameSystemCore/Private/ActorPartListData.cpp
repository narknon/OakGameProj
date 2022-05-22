#include "ActorPartListData.h"

FActorPartListData::FActorPartListData() {
    this->PartTypeEnum = NULL;
    this->PartType = 0;
    this->bCanSelectMultipleParts = false;
    this->bUseWeightWithMultiplePartSelection = false;
    this->bEnabled = false;
}


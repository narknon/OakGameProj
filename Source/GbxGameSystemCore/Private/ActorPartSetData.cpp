#include "ActorPartSetData.h"

class UActorPartData;

void UActorPartSetData::EnumeratePartListForPartType(uint8 PartType, TArray<UActorPartData*>& OutPartList) const {
}

UActorPartSetData::UActorPartSetData() {
    this->PartDataClass = NULL;
    this->PartTypeEnum = NULL;
    this->ActorPartReplacementMode = EActorPartReplacementMode::Additive;
}


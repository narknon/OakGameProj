#include "ActorPartData.h"

class UActorPartData;

void UActorPartData::EnumeratePossibleExcluders(TArray<UActorPartData*>& OutPartList) const {
}

void UActorPartData::EnumeratePossibleDependencies(TArray<UActorPartData*>& OutPartList) const {
}

void UActorPartData::EnumerateOtherParts(TArray<UActorPartData*>& OutPartList) const {
}

void UActorPartData::EnumerateGestaltMeshPartNames(TArray<FName>& OutPartNameList) const {
}

UActorPartData::UActorPartData() {
    this->PartTypeEnum = NULL;
    this->PartType = 0;
    this->GestaltData = NULL;
}


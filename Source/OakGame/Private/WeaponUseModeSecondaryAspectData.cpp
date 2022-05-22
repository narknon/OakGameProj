#include "WeaponUseModeSecondaryAspectData.h"
#include "Templates/SubclassOf.h"

class UActorComponent;

void UWeaponUseModeSecondaryAspectData::EnumerateComponentTypes(TArray<TSubclassOf<UActorComponent>>& OutComponentTypes) const {
}

UWeaponUseModeSecondaryAspectData::UWeaponUseModeSecondaryAspectData() {
    this->bCreateComponent = true;
    this->bAdditive = false;
    this->bShareBetweenUseModes = true;
    this->UseModeBitmask = 1;
    this->Component = NULL;
    this->ComparisonClass = NULL;
}


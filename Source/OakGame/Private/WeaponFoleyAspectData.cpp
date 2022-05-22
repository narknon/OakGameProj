#include "WeaponFoleyAspectData.h"
#include "FoleyAccessoryComponent.h"

UWeaponFoleyAspectData::UWeaponFoleyAspectData() {
    this->FoleyAccessory = CreateDefaultSubobject<UFoleyAccessoryComponent>(TEXT("FoleAccessoryComponent0"));
}


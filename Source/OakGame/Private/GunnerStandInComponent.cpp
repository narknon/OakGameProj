#include "GunnerStandInComponent.h"

UGunnerStandInComponent::UGunnerStandInComponent() {
    this->IronBearBlueprint = NULL;
    this->IronBearSpawnAction = NULL;
    this->IronCubBlueprint = NULL;
    this->IronCubSpawnAction = NULL;
    this->GunnerSpawnIronCubAction = NULL;
    this->IronCubSpawnDelay = 1.25f;
    this->IronCubPositionSettingContextOverrideName = TEXT("IronCub");
    this->IronBear = NULL;
}


#include "LargeLiquidBodyConfigurationData.h"

ULargeLiquidBodyConfigurationData::ULargeLiquidBodyConfigurationData() {
    this->SurfaceParticle = NULL;
    this->NearbyExplosionData = NULL;
    this->ElementalInteractionConfiguration = NULL;
    this->ElementalReactionConfiguration = NULL;
    this->bElementalReactionNegatesDamage = false;
    this->LocalReactionPuddleClass = NULL;
}


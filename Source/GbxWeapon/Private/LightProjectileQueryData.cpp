#include "LightProjectileQueryData.h"

FLightProjectileQueryData::FLightProjectileQueryData() {
    this->Actor = NULL;
    this->ActorType = ELightProjectileQueryActorType::Unfiltered;
    this->ProjectileClass = NULL;
}


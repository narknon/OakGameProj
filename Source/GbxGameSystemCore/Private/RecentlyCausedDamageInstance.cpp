#include "RecentlyCausedDamageInstance.h"

FRecentlyCausedDamageInstance::FRecentlyCausedDamageInstance() {
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->TotalDamage = 0.00f;
    this->DirtyCounter = 0;
    this->HitRegion = NULL;
    this->DamageFlags = ERecentDamageFlags::None;
    this->DamagedActor = NULL;
}


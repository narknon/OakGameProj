#include "DamageGlobalsData.h"

UDamageGlobalsData::UDamageGlobalsData() {
    this->DefaultHealingDamageType = NULL;
    this->DefaultHealingImpact = NULL;
    this->SplatterDirectionSpread = 0.00f;
    this->GibLifeSpan = 15.00f;
    this->GibCollisionProfileName = TEXT("PhysicsActor");
}


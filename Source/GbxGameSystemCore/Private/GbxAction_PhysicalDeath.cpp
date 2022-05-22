#include "GbxAction_PhysicalDeath.h"

UGbxAction_PhysicalDeath::UGbxAction_PhysicalDeath() {
    this->PhysicalAnimationDelayTime = 0.50f;
    this->bCapPhysicalAnimationDelayToAnimationDuration = true;
    this->PrematurePhysicalAnimationIgnoreBodyNames.AddDefaulted(2);
    this->bAllowPrematurePhysicalAnimation = true;
    this->bTearOffOnDeath = true;
    this->MaxRagdollTime = 5.00f;
}


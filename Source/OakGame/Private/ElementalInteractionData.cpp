#include "ElementalInteractionData.h"

UElementalInteractionData::UElementalInteractionData() {
    this->SourceMode = EElementalInteractionSourceMode::Default;
    this->DamageType = NULL;
    this->InitiatingDamageType = NULL;
    this->InitialDamageDelay = 0.00f;
    this->DamageInterval = 0.00f;
    this->DamageTriggeredInteractionChance = 0.10f;
    this->DamageTriggeredDuration = 0.00f;
    this->GbxNavArea = NULL;
    this->bMimicBasedOnDamageType = false;
    this->NavArea = NULL;
}


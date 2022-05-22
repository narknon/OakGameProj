#include "ElementalInteractionConfigurationData.h"

UElementalInteractionConfigurationData::UElementalInteractionConfigurationData() {
    this->InteractionMode = EElementalInteractionMode::Default;
    this->bIgnoreDamage = false;
    this->NaturalState = NULL;
    this->InitialState = NULL;
    this->bIsInitiallySource = false;
    this->InitialSourceDuration = 0.00f;
}


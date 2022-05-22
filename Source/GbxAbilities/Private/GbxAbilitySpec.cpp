#include "GbxAbilitySpec.h"

FGbxAbilitySpec::FGbxAbilitySpec() {
    this->AbilityClass = NULL;
    this->DurationType = EGbxAbilityDurationType::Timed;
    this->DurationInitializerData = 0.00f;
}


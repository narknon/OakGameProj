#include "OakPresentableStatusEffectData.h"

UOakPresentableStatusEffectData::UOakPresentableStatusEffectData() {
    this->FXData = NULL;
    this->PresentationData = NULL;
    this->ValueStrategy = EPresentableStatusEffectValueStrategy::PercentOfMaxHealth;
}


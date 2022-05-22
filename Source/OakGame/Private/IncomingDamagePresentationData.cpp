#include "IncomingDamagePresentationData.h"

FIncomingDamagePresentationData::FIncomingDamagePresentationData() {
    this->FeedbackData = NULL;
    this->HealthAudioEvent = NULL;
    this->ShieldAudioEvent = NULL;
    this->ArmorAudioEvent = NULL;
    this->DamageSeverityParticleParamValue = 0.00f;
    this->ArmsAnimationFlinchStrength = 0.00f;
    this->bUseRadialBlur = false;
}


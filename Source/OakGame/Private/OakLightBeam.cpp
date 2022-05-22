#include "OakLightBeam.h"

class UParticleSystemComponent;

void UOakLightBeam::OnModifierParticleSystemFinished(UParticleSystemComponent* PSC) {
}

void UOakLightBeam::InitOakChildData(FOakLightBeamInitializationData& InitData) const {
}

UOakLightBeam::UOakLightBeam() {
    this->BaseStatusEffectChance = -1.00f;
    this->BaseStatusEffectDamage = -1.00f;
    this->BaseStatusEffectDuration = -1.00f;
    this->ModifierComponent = NULL;
}


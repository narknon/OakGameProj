#include "OakDamageData.h"

UOakDamageData::UOakDamageData() {
    this->bPenetrates = false;
    this->LightBeamData = NULL;
    this->bOnlyDrawParticleIfShieldsAreDepleted = true;
    this->bRootCharacter = false;
    this->PresentationModifier = EDamagePresentationModifier::Default;
}


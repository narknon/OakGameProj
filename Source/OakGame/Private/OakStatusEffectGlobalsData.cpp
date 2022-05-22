#include "OakStatusEffectGlobalsData.h"

UOakStatusEffectGlobalsData::UOakStatusEffectGlobalsData() {
    this->ElementalFXMaxHealthScalar = 0.60f;
    this->FireElementalEffectData = NULL;
    this->ShockElementalEffectData = NULL;
    this->CorrosiveElementalEffectData = NULL;
    this->RadiationElementalEffectData = NULL;
    this->ElementalDeathSelectionThreshold = 0.00f;
    this->FreezeTypes[0] = NULL;
    this->FreezeTypes[1] = NULL;
    this->StatusEffectParticleSystem = NULL;
}


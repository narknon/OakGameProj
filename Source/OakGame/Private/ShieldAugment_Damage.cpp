#include "ShieldAugment_Damage.h"

UShieldAugment_Damage::UShieldAugment_Damage() {
    this->DamageData = NULL;
    this->ScreenParticles = NULL;
    this->DamageTypeOverride = NULL;
    this->DamageSourceOverride = NULL;
    this->ExplosionDataOverride = NULL;
    this->DamageDelay = 0.00f;
    this->bCausePersistentDamageOnEquip = false;
    this->PreDelayAudioEvent = NULL;
    this->DamageAudioEvent = NULL;
    this->bUseSingularity = false;
    this->BarrierSingularityOffset = 200.00f;
}


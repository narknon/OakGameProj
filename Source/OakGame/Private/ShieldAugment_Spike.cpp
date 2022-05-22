#include "ShieldAugment_Spike.h"

UShieldAugment_Spike::UShieldAugment_Spike() {
    this->bUseCooldown = false;
    this->TriggeringDamageSource = NULL;
    this->DamageData = NULL;
    this->bTriggerElementalEffect = false;
    this->bTriggerProjectile = false;
    this->FirstPersonSpikeEffectCollection = NULL;
    this->ThirdPersonSpikeEffectCollection = NULL;
}


#include "IncomingDamagePresentationGlobalInfo.h"

FIncomingDamagePresentationGlobalInfo::FIncomingDamagePresentationGlobalInfo() {
    this->ScreenParticleHealth = NULL;
    this->ScreenParticleShield = NULL;
    this->ScreenParticleArmor = NULL;
    this->ScreenParticleHealth_SplitScreen = NULL;
    this->ScreenParticleShield_SplitScreen = NULL;
    this->ScreenParticleArmor_SplitScreen = NULL;
    this->MaxNumDirectionalParticles = 0;
    this->DamageParticleDirectionQuantization = 0.00f;
    this->AspectRatioThresholdToUseWidescreenParticles = 0.00f;
    this->FlinchAnimationStregthNoise = 0.00f;
    this->FlinchAnimationAngleNoise = 0.00f;
    this->RadialBlurMaxDistance = 0.00f;
}


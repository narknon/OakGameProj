#include "AIWeaponUseSettings.h"

FAIWeaponUseSettings::FAIWeaponUseSettings() {
    this->FireConeAngle = 0.00f;
    this->bOverrideFireConeAngle = false;
    this->bOverrideBurstCount = false;
    this->bOverrideBurstDelay = false;
    this->bOverrideAccuracy = false;
    this->bUseSuppressingFireTime = false;
    this->bOverrideDesiredRange = false;
    this->MaxWeaponLeadingDistance = 0.00f;
}


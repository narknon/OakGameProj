#include "WeaponSightComponent.h"

UWeaponSightComponent::UWeaponSightComponent() {
    this->CustomColorSchemeIndex = -1;
    this->bUpdateZoomTransitionParam = true;
    this->bUpdateColorScheme = true;
    this->bUseGlobalZoomTransitionState = true;
    this->ZoomViewFlags = 0;
    this->MinTargetTime = 0.00f;
    this->SpawnProjectileCloserToSightPercentZ = 0.00f;
    this->SpawnProjectileCloserToSightPercentX = 0.00f;
    this->MaxAccuracyModifierPct = 0.00f;
    this->MaxAccuracyModifierTime = 0.00f;
}


#include "WeaponScopeComponent.h"

class AWeapon;

void UWeaponScopeComponent::OnTargetLockChange(AWeapon* EventWeapon, bool bLockedOn) {
}

void UWeaponScopeComponent::OnHeatChanged() {
}

void UWeaponScopeComponent::OnAmmoChanged() {
}

UWeaponScopeComponent::UWeaponScopeComponent() {
    this->bHideWeapon = true;
    this->ScopeMesh = NULL;
    this->ScopeMeshScale = 1.00f;
    this->ScopeMeshDepthScale = 1.00f;
    this->ScopeScreenParticle = NULL;
    this->CloseScopeScreenParticle = NULL;
    this->ScopeScreenTransitionTime = 0.00f;
    this->bHasAmmoCounter = false;
    this->bHasWeaponShieldIndicator = false;
    this->bHasTargetLockIndicator = false;
    this->bHasHeatIndicator = false;
    this->bHasChargeIndicator = false;
    this->bInheritAdditionalMaterialParameters = false;
    this->ScopeMeshComponent = NULL;
    this->WeaponShieldComponent = NULL;
    this->WeaponHeatComponent = NULL;
    this->WeaponChargeComponent = NULL;
}


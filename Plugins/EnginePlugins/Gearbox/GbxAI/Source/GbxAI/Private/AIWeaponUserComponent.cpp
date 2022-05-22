#include "AIWeaponUserComponent.h"

bool UAIWeaponUserComponent::WantsToFire() const {
    return false;
}

void UAIWeaponUserComponent::OnWeaponUsed() {
}

UAIWeaponUserComponent::UAIWeaponUserComponent() {
    this->AIController = NULL;
    this->GbxCharacter = NULL;
    this->FireConeAngle = 0.00f;
    this->DamageComponent = NULL;
    this->CoverUserComponent = NULL;
    this->BlackboardComponent = NULL;
    this->PerceptionComponent = NULL;
    this->TargetingComponent = NULL;
    this->CanFireIf = NULL;
    this->bSuppressingFireTimeExpired = false;
    this->bOverrideBurstCount = false;
    this->bOverrideBurstDelay = false;
    this->bOverrideAccuracy = false;
    this->bOverrideDesiredRange = false;
}


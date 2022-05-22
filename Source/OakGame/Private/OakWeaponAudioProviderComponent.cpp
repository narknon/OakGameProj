#include "OakWeaponAudioProviderComponent.h"

class AWeapon;

void UOakWeaponAudioProviderComponent::OnTargetLockedStateChange(AWeapon* EventWeapon, bool bLockedOn) {
}

UOakWeaponAudioProviderComponent::UOakWeaponAudioProviderComponent() {
    this->bWantsShellCasingAudio = false;
    this->GunshotEvent = NULL;
    this->TargetLockedEvent = NULL;
    this->TargetUnlockedEvent = NULL;
    this->CachedWeaponHeatComp = NULL;
}


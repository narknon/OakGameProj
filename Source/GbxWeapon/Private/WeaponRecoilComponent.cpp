#include "WeaponRecoilComponent.h"

void UWeaponRecoilComponent::OnUsed() {
}

void UWeaponRecoilComponent::OnDetached() {
}

void UWeaponRecoilComponent::OnAttached() {
}

UWeaponRecoilComponent::UWeaponRecoilComponent() {
    this->CachedControlComponent = NULL;
    this->WeaponPrivate = NULL;
}


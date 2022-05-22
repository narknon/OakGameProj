#include "WeaponUseComponent.h"

bool UWeaponUseComponent::ToggleMode_Implementation() {
    return false;
}

void UWeaponUseComponent::SwitchToZoomedMode(uint8 ZoomLevel) {
}

void UWeaponUseComponent::SwitchFromZoomedMode(uint8 ZoomLevel) {
}

void UWeaponUseComponent::OnPreUseFinished(bool bInterrupted) {
}



bool UWeaponUseComponent::CanActivateMode_Implementation() const {
    return false;
}

UWeaponUseComponent::UWeaponUseComponent() {
    this->UseMode = 0;
    this->bAutoSwitchModeWhenOutOfAmmo = false;
    this->bClearUseInputWhenSwitchingModes = false;
    this->bActivateModeWhenZoomed = false;
    this->bUseAnimationSwitchModeTime = true;
    this->CrosshairData = NULL;
    this->ZoomedCrosshairData = NULL;
    this->Icon = NULL;
    this->PreUseComponent = NULL;
    this->WeaponPrivate = NULL;
}


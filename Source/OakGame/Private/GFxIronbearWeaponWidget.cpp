#include "GFxIronbearWeaponWidget.h"

void UGFxIronbearWeaponWidget::UpdateProgressbar(float Amount) {
}

void UGFxIronbearWeaponWidget::OnInputDeviceChanged() {
}

void UGFxIronbearWeaponWidget::HardpointUseStop() {
}

void UGFxIronbearWeaponWidget::HardpointUsed() {
}

UGFxIronbearWeaponWidget::UGFxIronbearWeaponWidget() {
    this->ActionIcon = NULL;
    this->CachedWeapon = NULL;
    this->CachedAmmoComponent = NULL;
    this->KeyBindingTextfield = NULL;
    this->CachedPlayerController = NULL;
    this->ProgressBar = NULL;
    this->ElementalIcon = NULL;
    this->ElementalIconBG = NULL;
    this->BarTextField = NULL;
    this->HUDContainer = NULL;
    this->AugmentData = NULL;
    this->CachedBindingOrientation = EIronBearHardPointOrientation::None;
}


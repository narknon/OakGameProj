#include "GFxReloadWidget.h"

class AWeapon;
class UUsableComponent;

void UGFxReloadWidget::UpdateCachedAmmoCounts() const {
}

void UGFxReloadWidget::UpdateCachedAmmoComponent() const {
}

void UGFxReloadWidget::OnWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) const {
}

void UGFxReloadWidget::OnUsabilityChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo) const {
}

void UGFxReloadWidget::OnReloadStarted(bool bAuto) const {
}

void UGFxReloadWidget::OnReloadEnded(bool bCompleted) const {
}

void UGFxReloadWidget::OnLadderExit() const {
}

void UGFxReloadWidget::OnLadderEnter() const {
}

void UGFxReloadWidget::OnInputDeviceChanged() const {
}

void UGFxReloadWidget::OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) const {
}

UGFxReloadWidget::UGFxReloadWidget() {
    this->CachedWeapon = NULL;
    this->CachedCOVHeatComponent = NULL;
    this->CachedAmmoComponent = NULL;
    this->CachedReloadComponent = NULL;
    this->ReloadIcon = NULL;
    this->KeybindingText = NULL;
    this->ReloadTextWrapper = NULL;
    this->ReloadText = NULL;
}


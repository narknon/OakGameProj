#include "GFxIronBearRechargeWeaponWidget.h"

void UGFxIronBearRechargeWeaponWidget::OnReloadStarted(bool bAutoReload) {
}

void UGFxIronBearRechargeWeaponWidget::OnReloadEnded(bool bCompleted) {
}

void UGFxIronBearRechargeWeaponWidget::AmmoChanged() {
}

UGFxIronBearRechargeWeaponWidget::UGFxIronBearRechargeWeaponWidget() {
    this->OverheatClip = NULL;
    this->TypeIconClip = NULL;
    this->ReloadTime = 0.00f;
    this->ReloadTimeProgress = 0.00f;
    this->bIsReloading = false;
    this->ProgressBarOverchagePctBegin = 0.80f;
}


#include "GFxHealthBar.h"

void UGFxHealthBar::OnInjured() const {
}

void UGFxHealthBar::OnHealthVeryLow() const {
}

void UGFxHealthBar::OnHealthRegenerating() const {
}

void UGFxHealthBar::OnHealthNormal() const {
}

void UGFxHealthBar::OnHealthLow() const {
}

void UGFxHealthBar::OnHealthFull() const {
}

void UGFxHealthBar::OnDeath() const {
}

UGFxHealthBar::UGFxHealthBar() {
    this->NAME_ProgressBarId = TEXT("healthBar");
    this->NAME_HealthLowStop = TEXT("Health_Low_Stop");
    this->NAME_HealthVeryLowStop = TEXT("Health_Low_Very_Stop");
    this->Name_HealthLowStart = TEXT("Health_Low_Start");
    this->NAME_HealthVeryLowStart = TEXT("Health_Low_Very_Start");
    this->ProgressBar = NULL;
    this->CachedHealthPercent = -1.00f;
    this->CachedHealthCurrentValue = -1;
    this->CachedHealthTypeState = EHealthTypeState::Depleted;
    this->CachedResourcePoolState = EGameResourcePoolState::RPS_Depleted;
}


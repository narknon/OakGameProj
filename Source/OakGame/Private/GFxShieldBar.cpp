#include "GFxShieldBar.h"

void UGFxShieldBar::OnTakeShieldDamage(int32 Index, const FHealthType& HealthType, float Damage, const FSecondaryHealthDamageEventDetails& Details) const {
}

void UGFxShieldBar::OnShieldUnequippedOnSlot() const {
}

void UGFxShieldBar::OnShieldsVeryLow(const FHealthType& HealthType, int32 Index) const {
}

void UGFxShieldBar::OnShieldsRegenerating() const {
}

void UGFxShieldBar::OnShieldsNormal(const FHealthType& HealthType, int32 Index) const {
}

void UGFxShieldBar::OnShieldsLow(const FHealthType& HealthType, int32 Index) const {
}

void UGFxShieldBar::OnShieldsFull() const {
}

void UGFxShieldBar::OnShieldsDepleted(const FHealthTypeDepletedDetails& Details) const {
}

void UGFxShieldBar::OnShieldMinMaxValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float MinValue, float MaxValue) const {
}

void UGFxShieldBar::OnShieldEquippedOnSlot() const {
}

void UGFxShieldBar::OnShieldCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue) const {
}

UGFxShieldBar::UGFxShieldBar() {
    this->NAME_ProgressBarId = TEXT("shieldBar");
    this->NAME_ShieldFull = TEXT("Shield_Full");
    this->ProgressBar = NULL;
    this->EdgeFlash = NULL;
    this->HitDetect = NULL;
    this->ShieldGlowAnim = NULL;
    this->CachedShieldValue = -1;
    this->bIsBeingDamaged = false;
    this->bIsDepleted = false;
    this->CachedHealthTypeState = EHealthTypeState::Depleted;
    this->CachedResourcePoolState = EGameResourcePoolState::RPS_Depleted;
}


#include "ShieldAugment.h"

class AShield;

void UShieldAugment::StartAugmentCooldown(AShield* Shield, FAugmentData& StackData, float CooldownDuration) const {
}

void UShieldAugment::SetDelay(AShield* Shield, FAugmentData& StackData, float Delay, FName DelayName) const {
}
















float UShieldAugment::GetValueFromStackCount(const FAugmentData& StackData, bool bPrimary) const {
    return 0.0f;
}

UShieldAugment::UShieldAugment() {
    this->PrimaryStackDescription = TEXT("Unused");
    this->SecondaryStackDescription = TEXT("Unused");
    this->bUseReceivedDamageEvent = false;
    this->bUseCausedDamageEvent = false;
    this->bCallReceievedDamageEventForBarrierDamage = false;
}


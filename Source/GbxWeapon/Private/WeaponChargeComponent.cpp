#include "WeaponChargeComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponChargeComponent::StopEffects_Implementation() {
}

void UWeaponChargeComponent::Overcharged() {
}

void UWeaponChargeComponent::OnRep_ChargeState(EWeaponChargeState PrevChargeState) {
}

void UWeaponChargeComponent::OnChargeActionEnd(EGbxActionEndState EndState) {
}

float UWeaponChargeComponent::GetDischargeDuration() const {
    return 0.0f;
}

float UWeaponChargeComponent::GetChargePercent() const {
    return 0.0f;
}

float UWeaponChargeComponent::GetChargeDuration() const {
    return 0.0f;
}

void UWeaponChargeComponent::FullyDischarged() {
}

void UWeaponChargeComponent::FullyCharged() {
}

void UWeaponChargeComponent::DelayChargeFinished() {
}

void UWeaponChargeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponChargeComponent, ChargeTime);
    DOREPLIFETIME(UWeaponChargeComponent, DischargeTime);
    DOREPLIFETIME(UWeaponChargeComponent, CancelChargeDelay);
    DOREPLIFETIME(UWeaponChargeComponent, OverchargeHoldTime);
    DOREPLIFETIME(UWeaponChargeComponent, ChargeState);
}

UWeaponChargeComponent::UWeaponChargeComponent() {
    this->RequiredUseChargePct = 1.00f;
    this->CommitUseChargePct = 1.00f;
    this->bUseWhenCharged = false;
    this->bChargeBeforeEachUse = false;
    this->bStopChargingEffectsOnCharged = false;
    this->bStopChargedEffectsOnOvercharged = true;
    this->bUpdateChargeActionBlendSpace = false;
    this->bZoomModifiesBlendSpaceY = false;
    this->ZoomChargeActionBlendSpaceScale = 1.00f;
    this->ChargeFeedback = NULL;
    this->OverchargeFeedback = NULL;
    this->bPlayFeedbackAtLocation = false;
    this->ChargeState = EWeaponChargeState::None;
}


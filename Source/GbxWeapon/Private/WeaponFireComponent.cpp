#include "WeaponFireComponent.h"
#include "Net/UnrealNetwork.h"
#include "GbxDamageType.h"

class AActor;

void UWeaponFireComponent::ServerResetFireSequence_Implementation() {
}
bool UWeaponFireComponent::ServerResetFireSequence_Validate() {
    return true;
}





void UWeaponFireComponent::OnRep_ImpactLocation() {
}

void UWeaponFireComponent::OnRep_FlashCount() {
}

void UWeaponFireComponent::OnRep_FireRateAccelChanged() {
}

void UWeaponFireComponent::OnRep_ClientFireSequenceState() {
}

void UWeaponFireComponent::OnReloadAmmoGiven() {
}

void UWeaponFireComponent::OnLoopingFireActionEnd(EGbxActionEndState EndState) {
}

void UWeaponFireComponent::OnGivenTo() {
}

bool UWeaponFireComponent::IsFireRateAccelEnabled() const {
    return false;
}

AActor* UWeaponFireComponent::GetLockedTarget_Implementation() {
    return NULL;
}

float UWeaponFireComponent::GetFireRatePercent() const {
    return 0.0f;
}

void UWeaponFireComponent::ClientStopResetFireSequence_Implementation() {
}

void UWeaponFireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponFireComponent, FireRate);
    DOREPLIFETIME(UWeaponFireComponent, AutomaticBurstCount);
    DOREPLIFETIME(UWeaponFireComponent, BurstFireDelay);
    DOREPLIFETIME(UWeaponFireComponent, FireRateAccelDuration);
    DOREPLIFETIME(UWeaponFireComponent, FireRateDecelDuration);
    DOREPLIFETIME(UWeaponFireComponent, ResetFireSequenceTime);
    DOREPLIFETIME(UWeaponFireComponent, ShotAmmoCost);
    DOREPLIFETIME(UWeaponFireComponent, Spread);
    DOREPLIFETIME(UWeaponFireComponent, AccuracyImpulse);
    DOREPLIFETIME(UWeaponFireComponent, Damage);
    DOREPLIFETIME(UWeaponFireComponent, bFireRateAccelActive);
    DOREPLIFETIME(UWeaponFireComponent, ClientFireSequenceState);
    DOREPLIFETIME(UWeaponFireComponent, FlashSlot);
    DOREPLIFETIME(UWeaponFireComponent, FlashCount);
    DOREPLIFETIME(UWeaponFireComponent, ImpactLocation);
}

UWeaponFireComponent::UWeaponFireComponent() {
    this->bAutoBurst = false;
    this->FullFireSocketCycle = false;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->MinFireRateScale = 1.00f;
    this->MinFireRatePercentToFire = 0.00f;
    this->FireRateCurve = NULL;
    this->bUseShotStrengthFormula = false;
    this->FireSequenceLength = 0;
    this->ResetFireSequenceCompletePercent = 1.00f;
    this->bAdvanceFireSequenceAtEndOfBurst = false;
    this->bTotalShotCostRequiredToFire = false;
    this->MinShotAmmoCost = 0;
    this->ViewModelShotOffsetScale = 1.00f;
    this->ShotStrengthDamageCurve = NULL;
    this->ShotStrengthDamageRadiusCurve = NULL;
    this->ShotStrengthImpactForceCurve = NULL;
    this->DamageType = UGbxDamageType::StaticClass();
    this->DamageSource = NULL;
    this->ImpactData = NULL;
    this->MuzzleFXSequenceLength = 0;
    this->FireFeedback = NULL;
    this->bPlayFeedbackAtLocation = false;
    this->bScaleFeedbackWithFireRate = false;
    this->ScaledFeedback = NULL;
    this->bSyncAnimationToFireRate = false;
    this->FireAnimationBlendSpace = -1.00f;
    this->SkeletalControlType = EWET_Default;
    this->SkeletalControlFireInput = 0.00f;
    this->bLockOntoBestTarget = false;
    this->DelayInitializeAttribute = 0.00f;
    this->bFireRateAccelActive = false;
    this->FireRateState = EWeaponFireRateState::None;
    this->CurrentBurstShotCount = 0;
    this->CurrentFireSequenceIndex = 0;
    this->ClientFireSequenceState = 0;
    this->FireRatePercent = 0.00f;
    this->FlashSlot = 0;
    this->FlashCount = 0;
    this->DamageAmount = 0.00f;
}


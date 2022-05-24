#include "WeaponShieldComponent.h"
#include "Net/UnrealNetwork.h"

class UWwiseEvent;
class AOakPlayerController;
class UStatusEffectData;
class AWeapon;
class APawn;

void UWeaponShieldComponent::StopShieldEffect_Implementation() {
}

void UWeaponShieldComponent::StartShieldEffect_Implementation() {
}

void UWeaponShieldComponent::ResourceNowRegenerating(FGameResourcePoolReference ResourcePool) {
}

void UWeaponShieldComponent::ResourceNowFull(FGameResourcePoolReference ResourcePool) {
}

void UWeaponShieldComponent::PlayHitConfirm_Implementation() {
}

void UWeaponShieldComponent::PlayFeedbackSoundEvent(UWwiseEvent* Event, bool bReplicated) {
}

void UWeaponShieldComponent::OnZoomingOut(uint8 Level) {
}



void UWeaponShieldComponent::OnRep_ShieldState(EWeaponShieldState PreviousState) {
}

void UWeaponShieldComponent::OnRep_IsShieldActive(bool bWasShieldActive) {
}

void UWeaponShieldComponent::OnDetached() {
}

void UWeaponShieldComponent::OnDeactivationTrigger() {
}

void UWeaponShieldComponent::OnAttached() {
}

void UWeaponShieldComponent::OnActivationTrigger() {
}

AWeapon* UWeaponShieldComponent::GetWeapon() const {
    return NULL;
}

int32 UWeaponShieldComponent::GetStatusEffectStackCount(UStatusEffectData* StatusEffect) const {
    return 0;
}

AOakPlayerController* UWeaponShieldComponent::GetPlayerController() const {
    return NULL;
}

APawn* UWeaponShieldComponent::GetInstigator() const {
    return NULL;
}

void UWeaponShieldComponent::DeactivateShield() {
}

void UWeaponShieldComponent::ClientPlayFeedbackSoundEvent_Implementation(UWwiseEvent* Event) {
}

void UWeaponShieldComponent::ActivateShield() {
}

void UWeaponShieldComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponShieldComponent, MaxShield);
    DOREPLIFETIME(UWeaponShieldComponent, ShieldPool);
    DOREPLIFETIME(UWeaponShieldComponent, bIsShieldActive);
    DOREPLIFETIME(UWeaponShieldComponent, ShieldState);
}

UWeaponShieldComponent::UWeaponShieldComponent() {
    this->ShieldData = NULL;
    this->BlockAngle = 45.00f;
    this->HitRegionData = NULL;
    this->HitConfirmDuration = 0.20f;
    this->HitConfirmCurve = NULL;
    this->ScreenHitEffect = NULL;
    this->ShieldStartEffectId = 0;
    this->ShieldStopEffectId = 0;
    this->ShieldBreakEffectId = 0;
    this->ActivationTrigger = EWeaponShieldActivationTrigger::Zoom;
    this->ActivationZoomState = EWeaponZoomState::Zoomed;
    this->DeactivationZoomState = EWeaponZoomState::ZoomingOut;
    this->ShieldStartAudio = NULL;
    this->ShieldStopAudio = NULL;
    this->ShieldBreakAudio = NULL;
    this->ShieldHitAudio = NULL;
    this->ShieldNovaAudio = NULL;
    this->ShieldStartFeedback = NULL;
    this->ShieldStopFeedback = NULL;
    this->ShieldBreakFeedback = NULL;
    this->ShieldHitFeedback = NULL;
    this->bNotifyWeaponUsed = false;
    this->bShieldCreated = false;
    this->bIsShieldActive = false;
    this->bPlayShieldHitAction = false;
    this->ShieldState = EWeaponShieldState::Normal;
    this->HitConfirmParamName = TEXT("p_HitConfirm");
    this->ShieldHitActionDuration = 0.00f;
    this->OwnerStatusEffectComponent = NULL;
    this->AudioComponent = NULL;
    this->ActiveScopeComponent = NULL;
    this->WeaponPrivate = NULL;
}


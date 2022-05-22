#include "OakWeaponAudioProviderBase.h"

void UOakWeaponAudioProviderBase::OnDetachWeapon() {
}

void UOakWeaponAudioProviderBase::OnAttachWeapon() {
}

void UOakWeaponAudioProviderBase::NotifyReloadStarted() {
}

void UOakWeaponAudioProviderBase::NotifyReloadEnded() {
}

void UOakWeaponAudioProviderBase::NotifyPutDown() {
}

void UOakWeaponAudioProviderBase::NotifyHidden(bool bIsHidden) {
}

void UOakWeaponAudioProviderBase::NotifyEquipped() {
}

void UOakWeaponAudioProviderBase::ChargeStarted() {
}

void UOakWeaponAudioProviderBase::ChargedStopped() {
}

UOakWeaponAudioProviderBase::UOakWeaponAudioProviderBase() {
    this->PrimaryConfigurationEvent = NULL;
    this->DefaultAudioRadius = 25.00f;
    this->BodyLoopPlaybackStates = 7;
    this->PreFireEvent = NULL;
    this->PostFireEvent = NULL;
    this->PostFireMechEvent = NULL;
    this->ModeSwitchFailEvent = NULL;
    this->DryFireEvent = NULL;
    this->ChargeStartEvent = NULL;
    this->ChargeStopEvent = NULL;
    this->CachedAudioGlobals = NULL;
    this->CachedDefaultAudioComponent = NULL;
    this->WeaponPrivate = NULL;
    this->OwningOakCharacter = NULL;
}


#include "WeaponVisibleAmmoComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponVisibleAmmoComponent::UpdateBoneVisibility(bool bForce) {
}

void UWeaponVisibleAmmoComponent::SetVisibleAmmoUpdateMethod(EWeaponVisibleAmmoUpdateMethod NewUpdateMethod) {
}

void UWeaponVisibleAmmoComponent::SetVisibleAmmoState(EWeaponVisibleAmmoState NewState) {
}

void UWeaponVisibleAmmoComponent::ResetVisibleAmmoState() {
}

void UWeaponVisibleAmmoComponent::OnRep_ServerAmmoCount() {
}

void UWeaponVisibleAmmoComponent::OnDetached() {
}

void UWeaponVisibleAmmoComponent::OnAttached() {
}

void UWeaponVisibleAmmoComponent::OnAmmoChanged() {
}

void UWeaponVisibleAmmoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponVisibleAmmoComponent, ServerAmmoCount);
}

UWeaponVisibleAmmoComponent::UWeaponVisibleAmmoComponent() {
    this->MeshType = EWAVT_FirstPerson;
    this->InitialState = EWeaponVisibleAmmoState::LoadedAmmo;
    this->UpdateMethod = EWeaponVisibleAmmoUpdateMethod::Auto;
    this->VisibleAmmoState = EWeaponVisibleAmmoState::LoadedAmmo;
    this->ServerAmmoCount = 0;
    this->CachedAmmoComponent = NULL;
    this->WeaponPrivate = NULL;
}


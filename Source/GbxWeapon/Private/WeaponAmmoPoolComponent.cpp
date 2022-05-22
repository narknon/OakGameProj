#include "WeaponAmmoPoolComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponAmmoPoolComponent::ServerSendAmmoState_Implementation() {
}
bool UWeaponAmmoPoolComponent::ServerSendAmmoState_Validate() {
    return true;
}

void UWeaponAmmoPoolComponent::OnRep_SpareAmmo() {
}

void UWeaponAmmoPoolComponent::OnRep_ServerSyncedLoadedAmmo() {
}

void UWeaponAmmoPoolComponent::OnMaxLoadedAmmoChanged(float OldValue, float NewValue) {
}

void UWeaponAmmoPoolComponent::OnGivenTo() {
}

void UWeaponAmmoPoolComponent::ClientSetLoadedAmmo_Implementation(int32 NewLoadedAmmo) {
}

void UWeaponAmmoPoolComponent::ClientConsumeAmmo_Implementation(int32 Amount) {
}

void UWeaponAmmoPoolComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponAmmoPoolComponent, MaxLoadedAmmo);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, MaxStoredAmmo);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, StoredAmmo);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, SpareAmmo);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, AmmoRegenRate);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, ConsumeAmmoRegenDelay);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, ResourcePool);
    DOREPLIFETIME(UWeaponAmmoPoolComponent, ServerSyncedLoadedAmmo);
}

UWeaponAmmoPoolComponent::UWeaponAmmoPoolComponent() {
    this->MaxStoredAmmo = 120;
    this->LoadedAmmo = 30;
    this->StoredAmmo = 120;
    this->SpareAmmo = 0;
    this->bInfiniteAmmo = false;
    this->bInfiniteAmmoForAI = true;
    this->bCreateAmmoResourceForAI = false;
    this->bGiveAmmoOnPickup = false;
    this->ResourceData = NULL;
    this->AmmoRegenType = EAmmoRegenType::Disabled;
    this->AmmoRegenRate = 0.00f;
    this->ConsumeAmmoRegenDelay = 0.00f;
    this->ServerSyncedLoadedAmmo = 0;
}


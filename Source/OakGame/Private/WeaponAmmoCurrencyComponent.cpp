#include "WeaponAmmoCurrencyComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponAmmoCurrencyComponent::ServerSendAmmoState_Implementation() {
}
bool UWeaponAmmoCurrencyComponent::ServerSendAmmoState_Validate() {
    return true;
}

void UWeaponAmmoCurrencyComponent::OnRep_SpareAmmo() {
}

void UWeaponAmmoCurrencyComponent::OnRep_ServerSyncedLoadedAmmo() {
}

void UWeaponAmmoCurrencyComponent::OnMaxLoadedAmmoChanged(float OldValue, float NewValue) {
}

void UWeaponAmmoCurrencyComponent::OnGivenTo() {
}

void UWeaponAmmoCurrencyComponent::ClientSetLoadedAmmo_Implementation(int32 NewLoadedAmmo) {
}

void UWeaponAmmoCurrencyComponent::ClientConsumeAmmo_Implementation(int32 Amount) {
}

void UWeaponAmmoCurrencyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponAmmoCurrencyComponent, MaxLoadedAmmo);
    DOREPLIFETIME(UWeaponAmmoCurrencyComponent, MaxStoredAmmo);
    DOREPLIFETIME(UWeaponAmmoCurrencyComponent, StoredAmmo);
    DOREPLIFETIME(UWeaponAmmoCurrencyComponent, SpareAmmo);
    DOREPLIFETIME(UWeaponAmmoCurrencyComponent, ServerSyncedLoadedAmmo);
}

UWeaponAmmoCurrencyComponent::UWeaponAmmoCurrencyComponent() {
    this->CurrencyType = NULL;
    this->MaxStoredAmmo = 0;
    this->LoadedAmmo = 0;
    this->StoredAmmo = 0;
    this->SpareAmmo = 0;
    this->bInfiniteAmmoForAI = true;
    this->ServerSyncedLoadedAmmo = 0;
    this->OwnerInventoryComponent = NULL;
}


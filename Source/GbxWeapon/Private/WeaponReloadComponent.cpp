#include "WeaponReloadComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponReloadComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponReloadComponent, ReloadTime);
}

UWeaponReloadComponent::UWeaponReloadComponent() {
    this->ReloadPartType = 0;
    this->WeaponPrivate = NULL;
}


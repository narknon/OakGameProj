#include "WeaponCOVRepairComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponCOVRepairComponent::OnRep_ClientRepairState() {
}

void UWeaponCOVRepairComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponCOVRepairComponent, CurrentRepairType);
    DOREPLIFETIME(UWeaponCOVRepairComponent, ClientRepairState);
}

UWeaponCOVRepairComponent::UWeaponCOVRepairComponent() {
    this->CurrentRepairType = 0;
    this->ClientRepairState = 0;
}


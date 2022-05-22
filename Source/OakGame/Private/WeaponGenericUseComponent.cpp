#include "WeaponGenericUseComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponGenericUseComponent::OnRep_bIsUsing() {
}

void UWeaponGenericUseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponGenericUseComponent, bIsUsing);
}

UWeaponGenericUseComponent::UWeaponGenericUseComponent() {
    this->bIsSelfContainedLoopingMontage = true;
    this->bIsUsing = false;
}


#include "WeaponSingleFeedReloadComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponSingleFeedReloadComponent::OnUserInput(uint8 InputChannel) {
}

void UWeaponSingleFeedReloadComponent::OnRep_ClientReloadState() {
}

void UWeaponSingleFeedReloadComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponSingleFeedReloadComponent, SingleFeedIncrement);
    DOREPLIFETIME(UWeaponSingleFeedReloadComponent, ClientReloadState);
}

UWeaponSingleFeedReloadComponent::UWeaponSingleFeedReloadComponent() {
    this->bDisableInterruptedToUse = false;
    this->SingleFeedIncrement = 1;
    this->SingleFeedCompletePercent = 0.80f;
    this->ClientReloadState = 0;
}


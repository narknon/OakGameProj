#include "WeaponClipReloadComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponClipReloadComponent::OnRep_ClientReloadState() {
}

void UWeaponClipReloadComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponClipReloadComponent, ClientReloadState);
    DOREPLIFETIME(UWeaponClipReloadComponent, CurrentClip);
}

UWeaponClipReloadComponent::UWeaponClipReloadComponent() {
    this->ReloadCompletePercent = 0.75f;
    this->TapedReloadCompletePercent = 0.75f;
    this->TapedClipCount = 0;
    this->ClientReloadState = 0;
    this->CurrentClip = 0;
}


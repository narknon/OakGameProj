#include "WeaponCOVHeatComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponCOVHeatComponent::RepairedNotify() {
}

void UWeaponCOVHeatComponent::OnRepaired_Implementation() {
}

void UWeaponCOVHeatComponent::OnRep_Broken(bool bWasBroken) {
}

void UWeaponCOVHeatComponent::OnBroken_Implementation() {
}

void UWeaponCOVHeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponCOVHeatComponent, bBroken);
    DOREPLIFETIME(UWeaponCOVHeatComponent, NumShotsToBreak);
    DOREPLIFETIME(UWeaponCOVHeatComponent, SelectedBrokenEffectsIndex);
}

UWeaponCOVHeatComponent::UWeaponCOVHeatComponent() {
    this->MinShotsToBreak = 1;
    this->MaxShotsToBreak = 30;
    this->ConsecutiveBreakInfluence = 0.50f;
    this->Jankiness = 0.00f;
    this->bBroken = false;
    this->NumShotsToBreak = 0;
    this->SelectedBrokenEffectsIndex = 0;
    this->NumOverheatedShots = 0;
    this->RepairHeatCooldownRate = 0.00f;
}


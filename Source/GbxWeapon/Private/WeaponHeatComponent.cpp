#include "WeaponHeatComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponHeatComponent::SetCanUseWhenOverheated(bool bEnabled) {
}

void UWeaponHeatComponent::OnUseFinished() {
}

void UWeaponHeatComponent::OnUsed() {
}



void UWeaponHeatComponent::OnRep_ReplicatedHeat() {
}

void UWeaponHeatComponent::OnRep_Overheated(bool bWasOverheated) {
}

void UWeaponHeatComponent::OnPutDown() {
}

void UWeaponHeatComponent::OnEquipped() {
}

void UWeaponHeatComponent::OnDetached() {
}

void UWeaponHeatComponent::OnAttached() {
}

void UWeaponHeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponHeatComponent, HeatCoolDownRate);
    DOREPLIFETIME(UWeaponHeatComponent, HeatCoolDownDelay);
    DOREPLIFETIME(UWeaponHeatComponent, UseHeatImpulse);
    DOREPLIFETIME(UWeaponHeatComponent, ActiveHeatRate);
    DOREPLIFETIME(UWeaponHeatComponent, bSimulateOnClients);
    DOREPLIFETIME(UWeaponHeatComponent, bCanUseWhenOverheated);
    DOREPLIFETIME(UWeaponHeatComponent, OverheatTime);
    DOREPLIFETIME(UWeaponHeatComponent, OverheatCoolDownDelay);
    DOREPLIFETIME(UWeaponHeatComponent, ReplicatedHeat);
    DOREPLIFETIME(UWeaponHeatComponent, bOverheated);
}

UWeaponHeatComponent::UWeaponHeatComponent() {
    this->bSimulateOnClients = true;
    this->bSimulateOnAI = true;
    this->bVisibleInHUD = false;
    this->bStartCoolDownEffectOnEndUse = true;
    this->bCanOverheat = false;
    this->bCanUseWhenOverheated = false;
    this->HeatMaterialParamCurve = NULL;
    this->CoolDownEffectType = EWET_Default;
    this->CoolDownEffectOnThreshold = 0.00f;
    this->CoolDownEffectOffThreshold = 0.00f;
    this->Heat = 0.00f;
    this->ReplicatedHeat = 0;
    this->bOverheated = false;
    this->WeaponPrivate = NULL;
}


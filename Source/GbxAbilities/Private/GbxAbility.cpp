#include "GbxAbility.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UGbxAbility::OnUnregistered_Implementation() {
}

void UGbxAbility::OnResumed_Implementation() {
}

void UGbxAbility::OnRep_Manager() {
}

void UGbxAbility::OnRep_AbilityState() {
}

void UGbxAbility::OnRegistered_Implementation() {
}

void UGbxAbility::OnPaused_Implementation() {
}

void UGbxAbility::OnForcedRefresh_Implementation() {
}

void UGbxAbility::OnDeactivated_Implementation() {
}

void UGbxAbility::OnActivated_Implementation() {
}

bool UGbxAbility::IsReplicated() const {
    return false;
}

AActor* UGbxAbility::GetAbilityOwner() const {
    return NULL;
}

void UGbxAbility::Client_Deactivate_Implementation() {
}

EGbxAbilityState UGbxAbility::CalculateAbilityState_Implementation() {
    return EGbxAbilityState::Unactivated;
}

void UGbxAbility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxAbility, Manager);
    DOREPLIFETIME(UGbxAbility, AbilityState);
}

UGbxAbility::UGbxAbility() {
    this->Manager = NULL;
    this->DurationType = EGbxAbilityDurationType::Timed;
    this->Duration = 0.00f;
    this->DesiredAbilityState = EGbxAbilityState::Unactivated;
    this->AbilityState = EGbxAbilityState::Unactivated;
    this->PendingManager = NULL;
}


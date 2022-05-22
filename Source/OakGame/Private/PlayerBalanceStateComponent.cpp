#include "PlayerBalanceStateComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerBalanceStateComponent::OnRep_UncappedExperience(uint32 PreviousUncappedExperience) {
}

void UPlayerBalanceStateComponent::OnRep_Experience() {
}

int32 UPlayerBalanceStateComponent::GetExperience() const {
    return 0;
}

void UPlayerBalanceStateComponent::Client_OnLevelUp_Implementation(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UPlayerBalanceStateComponent::Client_NotifyCheatSetExperienceLevel_Implementation() {
}

void UPlayerBalanceStateComponent::AddExperience(int32 Amount, EPlayerExperienceSource Source, EPlayerExperienceType Type) {
}

void UPlayerBalanceStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerBalanceStateComponent, Experience);
    DOREPLIFETIME(UPlayerBalanceStateComponent, UncappedExperience);
}

UPlayerBalanceStateComponent::UPlayerBalanceStateComponent() {
    this->Experience = 0;
    this->UncappedExperience = 0;
}


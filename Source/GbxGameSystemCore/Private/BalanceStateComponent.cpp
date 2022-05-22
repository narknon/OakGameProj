#include "BalanceStateComponent.h"
#include "Net/UnrealNetwork.h"

class UBalanceStateComponent;

void UBalanceStateComponent::SetGameStage(int32 NewGameStage) {
}

void UBalanceStateComponent::SetExperienceLevel(int32 NewExperienceLevel) {
}

void UBalanceStateComponent::OnRep_ExperienceLevel(int32 OldExperienceLevel) {
}

void UBalanceStateComponent::OnInheritedBalanceSourceLevelChanged(UBalanceStateComponent* InheritedBalanceStateSource, const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

int32 UBalanceStateComponent::GetGameStage() const {
    return 0;
}

int32 UBalanceStateComponent::GetExperienceLevel() const {
    return 0;
}

FDataTableRowHandle UBalanceStateComponent::GetBalanceTableRow() const {
    return FDataTableRowHandle{};
}

void UBalanceStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBalanceStateComponent, GameStage);
    DOREPLIFETIME(UBalanceStateComponent, ExperienceLevel);
}

UBalanceStateComponent::UBalanceStateComponent() {
    this->GameStage = 1;
    this->ExperienceLevel = 1;
    this->bAutoRefreshInheritedBalanceWhenSourceChangesLevel = false;
}


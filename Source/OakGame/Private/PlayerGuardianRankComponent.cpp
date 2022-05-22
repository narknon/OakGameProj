#include "PlayerGuardianRankComponent.h"
#include "Net/UnrealNetwork.h"

class AGbxCharacter;
class UGuardianRankRewardData;
class UGuardianRankPerkData;

void UPlayerGuardianRankComponent::SetGuardianRank(int32 NewGuardianRank) {
}

void UPlayerGuardianRankComponent::ServerStartGuardianRankTracking_Implementation() {
}
bool UPlayerGuardianRankComponent::ServerStartGuardianRankTracking_Validate() {
    return true;
}

void UPlayerGuardianRankComponent::ServerSetAvailableTokens_Implementation(int32 InAvailableTokens) {
}
bool UPlayerGuardianRankComponent::ServerSetAvailableTokens_Validate(int32 InAvailableTokens) {
    return true;
}

void UPlayerGuardianRankComponent::ServerPurchaseReward_Implementation(UGuardianRankRewardData* RewardToPurchase) {
}
bool UPlayerGuardianRankComponent::ServerPurchaseReward_Validate(UGuardianRankRewardData* RewardToPurchase) {
    return true;
}

void UPlayerGuardianRankComponent::ServerEnableReward_Implementation(UGuardianRankRewardData* RewardToChange, bool bEnable) {
}
bool UPlayerGuardianRankComponent::ServerEnableReward_Validate(UGuardianRankRewardData* RewardToChange, bool bEnable) {
    return true;
}

void UPlayerGuardianRankComponent::ServerEnablePerkAbility_Implementation(UGuardianRankPerkData* PerkToChange, bool bEnable) {
}
bool UPlayerGuardianRankComponent::ServerEnablePerkAbility_Validate(UGuardianRankPerkData* PerkToChange, bool bEnable) {
    return true;
}

void UPlayerGuardianRankComponent::ServerEnableGuardianRankSystem_Implementation(bool bEnabled) {
}
bool UPlayerGuardianRankComponent::ServerEnableGuardianRankSystem_Validate(bool bEnabled) {
    return true;
}

void UPlayerGuardianRankComponent::OnRep_RankRewardsEnabledBits(FGuardianRankEnabledIndexTracker& OldEnabledIndexTracker) {
}

void UPlayerGuardianRankComponent::OnRep_RankRewards() {
}

void UPlayerGuardianRankComponent::OnRep_RankPerksEnabledBits(FGuardianRankEnabledIndexTracker& OldEnabledIndexTracker) {
}

void UPlayerGuardianRankComponent::OnRep_GuardianRank(int32 OldGuardianRank) {
}

void UPlayerGuardianRankComponent::OnRep_GuardianExperience(int64 OldGuardianExperience) {
}

void UPlayerGuardianRankComponent::OnRep_AvailableTokens(int32 OldAvailableTokens) {
}

void UPlayerGuardianRankComponent::NotifyUncappedExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type) {
}

void UPlayerGuardianRankComponent::NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) {
}

bool UPlayerGuardianRankComponent::IsGuardianRankSystemEnabled() {
    return false;
}

FText UPlayerGuardianRankComponent::GetGuardianRankRewardStatsString() {
    return FText::GetEmpty();
}

int32 UPlayerGuardianRankComponent::GetGuardianRankExperience() {
    return 0;
}

int32 UPlayerGuardianRankComponent::GetGuardianRank() const {
    return 0;
}

void UPlayerGuardianRankComponent::DebugResetGuardianRank_Implementation() {
}
bool UPlayerGuardianRankComponent::DebugResetGuardianRank_Validate() {
    return true;
}

void UPlayerGuardianRankComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerGuardianRankComponent, GuardianRank);
    DOREPLIFETIME(UPlayerGuardianRankComponent, AvailableTokens);
    DOREPLIFETIME(UPlayerGuardianRankComponent, GuardianExperience);
    DOREPLIFETIME(UPlayerGuardianRankComponent, RankRewards);
    DOREPLIFETIME(UPlayerGuardianRankComponent, RankRewardsEnabledBits);
    DOREPLIFETIME(UPlayerGuardianRankComponent, RankPerksEnabledBits);
    DOREPLIFETIME(UPlayerGuardianRankComponent, RankRewardRandomSeed);
    DOREPLIFETIME(UPlayerGuardianRankComponent, bGuardianRankSystemEnabled);
    DOREPLIFETIME(UPlayerGuardianRankComponent, bDisabledForGameMode);
}

UPlayerGuardianRankComponent::UPlayerGuardianRankComponent() {
    this->GuardianRank = 0;
    this->AvailableTokens = 0;
    this->GuardianExperience = 0;
    this->RankRewardRandomSeed = -1;
    this->bGuardianRankSystemEnabled = true;
    this->bDisabledForGameMode = false;
    this->OwnerBalanceState = NULL;
    this->AbilityInstance = NULL;
    this->OakCharacterOwner = NULL;
}


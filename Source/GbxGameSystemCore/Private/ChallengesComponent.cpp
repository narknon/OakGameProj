#include "ChallengesComponent.h"

class UChallengeCategoryData;
class UGameStatData;

void UChallengesComponent::UnregisterInActivePlayerChallenges() {
}

void UChallengesComponent::SetChallengeProgress(UClass* ChalClass, int32 NewProgress) {
}

void UChallengesComponent::SetChallengeActive(UClass* ChalClass, bool bInIsActive) {
}

bool UChallengesComponent::IsChallengeComplete(UClass* ChalClass) {
    return false;
}

bool UChallengesComponent::IsChallengeActive(UClass* ChalClass) {
    return false;
}

void UChallengesComponent::IncrementChallengeProgress(UClass* ChalClass) {
}

int32 UChallengesComponent::GetMaxChallengeTiers(UClass* ChalClass) {
    return 0;
}

TArray<FChallengeInstanceData> UChallengesComponent::GetLocalChallenges() {
    return TArray<FChallengeInstanceData>();
}

int32 UChallengesComponent::GetCompletedChallengeTiers(UClass* ChalClass) {
    return 0;
}

int32 UChallengesComponent::GetChallengeStatValue(UClass* ChalClass, UGameStatData* StatId) {
    return 0;
}

int32 UChallengesComponent::GetChallengeStatGoalValue(UClass* ChalClass, UGameStatData* StatId) {
    return 0;
}

int32 UChallengesComponent::GetChallengeProgressGoalValue(UClass* ChalClass) {
    return 0;
}

int32 UChallengesComponent::GetChallengeProgress(UClass* ChalClass) {
    return 0;
}

void UChallengesComponent::GetChallengeCompleteInfoForLevels(TArray<FName> LevelsForChallenges, UChallengeCategoryData* Category, int32& NumCompleted, int32& NumActive, bool bIgnoreHidden) {
}

void UChallengesComponent::GetChallengeCompleteInfo(UClass* ChalClass, int32& NumCompleted, int32& NumChallenges) {
}

void UChallengesComponent::CompleteChallengeIfConditionsMet(UClass* ChalClass) {
}

void UChallengesComponent::CompleteChallenge(UClass* ChalClass, bool bForceActive) {
}

void UChallengesComponent::ClientChallengeUpdateProgress_Implementation(UClass* ChalClass, int32 NewProgress) {
}

void UChallengesComponent::ClientChallengeCompleted_Implementation(UClass* ChalClass, int32 NumTiersComplete, bool bForceActive) {
}

void UChallengesComponent::ClientActivateChallenge_Implementation(UClass* ChalClass) {
}

bool UChallengesComponent::AreGlobalChallengesRegistered() {
    return false;
}

void UChallengesComponent::ActivateChallenge(UClass* ChalClass) {
}

UChallengesComponent::UChallengesComponent() {
    this->GameStatsComponent = NULL;
}


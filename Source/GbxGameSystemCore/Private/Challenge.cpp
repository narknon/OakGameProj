#include "Challenge.h"

class AGbxPlayerController;
class UObject;
class UChallengeLevelActorComponent;

bool UChallenge::TestForCompleted(const AGbxPlayerController* PlayerToTest, const UObject* OtherObject, const TArray<FString>& EnumTag) {
    return false;
}

void UChallenge::SetChallengeProgress(int32 NewProgress) const {
}






bool UChallenge::IsChallengeComplete() const {
    return false;
}

bool UChallenge::IsChallengeActive() const {
    return false;
}

void UChallenge::IncrementChallengeProgressByValue(int32 Value) {
}

void UChallenge::IncrementChallengeProgress() const {
}

void UChallenge::GetLevelActorComponents(TArray<UChallengeLevelActorComponent*>& LevelActorList) const {
}

int32 UChallenge::GetChallengeProgressGoalValue() const {
    return 0;
}

int32 UChallenge::GetChallengeProgress() const {
    return 0;
}

void UChallenge::GetChallengeCompleteInfo(int32& NumCompleted, int32& NumChallenges) const {
}

bool UChallenge::CompletedConditional_Implementation() {
    return false;
}


void UChallenge::CompleteChallenge() const {
}

void UChallenge::ActivateChallenge() {
}

UChallenge::UChallenge() {
    this->RegisteredOwner = NULL;
    this->bShared = true;
    this->bRepeatable = false;
    this->bHideInUI = false;
    this->bShowActivationUI = true;
    this->bShowProgressUI = true;
    this->bShowCompletionUI = true;
    this->bShowAsUndiscoveredUntilProgressed = false;
    this->ChallengeType = EChallengeType::ECT_Stat;
    this->bCompleteIfGoalValueReached = false;
    this->bResetProgressWhenGoalValueReached = true;
    this->ChallengeCategoryData = NULL;
    this->bInitiallyActive = false;
    this->bHideFromCounts = false;
    this->PrerequisiteChallenge = NULL;
    this->AssociatedCompletionAchievementId = 0;
    this->AssociatedProgressAchievementId = 0;
    this->bProfileChallenge = false;
    this->CompletedBySubChallenges = false;
    this->ActivateIfSubChallengesComplete = false;
    this->bIncrementProgressViaSubChallenges = false;
}


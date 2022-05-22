#include "OakPublicAPIUpdater.h"
#include "Templates/SubclassOf.h"

class UChallengesComponent;
class UChallenge;

void UOakPublicAPIUpdater::OnChallengeUpdated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted) {
}

void UOakPublicAPIUpdater::OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

void UOakPublicAPIUpdater::OnChallengeActivated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

UOakPublicAPIUpdater::UOakPublicAPIUpdater() {
    this->GameInstanceRef = NULL;
}


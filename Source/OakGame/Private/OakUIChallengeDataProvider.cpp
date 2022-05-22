#include "OakUIChallengeDataProvider.h"
#include "Templates/SubclassOf.h"

class UChallengesComponent;
class UChallenge;

void UOakUIChallengeDataProvider::OnChallengeUpdated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted) {
}

void UOakUIChallengeDataProvider::OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

void UOakUIChallengeDataProvider::OnChallengeChildCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

void UOakUIChallengeDataProvider::OnChallengeActivated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

UOakUIChallengeDataProvider::UOakUIChallengeDataProvider() {
    this->CompletedChallengeColor = TEXT("#AAAAAA");
    this->FallbackDisplaySortCategory = NULL;
    this->GalacticChallengesCategory = NULL;
    this->bShowDiscoveredLocationsOnly = true;
    this->CurrentPopulateType = EOakUIChallengeDataProviderPopulateType::UNKNOWN;
}


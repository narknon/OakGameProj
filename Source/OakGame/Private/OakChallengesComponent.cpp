#include "OakChallengesComponent.h"
#include "Templates/SubclassOf.h"

class UOakChallenge;
class UChallengesComponent;
class UChallenge;

void UOakChallengesComponent::ServerRequestManualClaimRewards_Implementation(UOakChallenge* Challenge, int32 RequestedTier) {
}
bool UOakChallengesComponent::ServerRequestManualClaimRewards_Validate(UOakChallenge* Challenge, int32 RequestedTier) {
    return true;
}

void UOakChallengesComponent::DoAsyncWorkComputingCompletionPercentages(bool bForceToFinishNow) {
}

void UOakChallengesComponent::ClientNotifyManualClaimRewardsComplete_Implementation(UOakChallenge* Challenge, int32 ClaimedTier) {
}

void UOakChallengesComponent::BroadcastChallengeUpdateFriendEvent(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted) {
}

void UOakChallengesComponent::BroadcastChallengeCompletedToFriendSystems(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

UOakChallengesComponent::UOakChallengesComponent() {
}


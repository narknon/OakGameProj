#include "OakChallenge.h"

int32 UOakChallenge::GetChallengeLevel() const {
    return 0;
}

UOakChallenge::UOakChallenge() {
    this->RewardItemPool = NULL;
    this->ActivityFeedReward = NULL;
    this->bIsCrewChallenge = false;
    this->bManuallyGiveTierRewards = false;
    this->AssociatedCharacterClass = NULL;
    this->VaultCardID = 2293088856;
    this->bWeeklyVaultCard = false;
}


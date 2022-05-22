#include "EnvQueryTest_StandardCover.h"

UEnvQueryTest_StandardCover::UEnvQueryTest_StandardCover() {
    this->FriendliesContext = NULL;
    this->TargetContext = NULL;
    this->ExposureContext = NULL;
    this->TargetDistanceMinMultiplierAfterTakingCover = 0.00f;
    this->TargetDistanceMaxMultiplierAfterTakingCover = 2.00f;
    this->ScoringWeight_AlreadyAtCover = 1.00f;
    this->ScoringWeight_DistanceToQuerier = 1.00f;
    this->ScoringWeight_DistanceToTarget = 1.00f;
    this->ScoringWeight_DistanceToFriendlies = 1.00f;
    this->ScoringWeight_CoverView = 1.00f;
    this->ScoringWeight_CoverExposure = 1.00f;
}


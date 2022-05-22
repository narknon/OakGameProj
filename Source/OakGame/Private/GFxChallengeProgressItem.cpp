#include "GFxChallengeProgressItem.h"

FGFxChallengeProgressItem::FGFxChallengeProgressItem() {
    this->bHasNameTransitioned = false;
    this->bHasDescriptionTransitioned = false;
    this->bHasIconTransitioned = false;
    this->bViewAsPercent = false;
    this->bViewOneOffCompletionNotProgress = false;
    this->ProgressPctToStartAnimFrom = 0.00f;
    this->ProgressOutOfValue = 0;
    this->ProgressOutOfMax = 0;
    this->bChallengeWasCompleted = false;
    this->bHasPercentCompleteTransitioned = false;
    this->ChallengeClass = NULL;
    this->bAddedAsProgressOfChildChallenge = false;
    this->ParentRanking = 0;
}


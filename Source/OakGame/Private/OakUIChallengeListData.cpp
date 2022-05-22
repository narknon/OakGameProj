#include "OakUIChallengeListData.h"

FOakUIChallengeListData::FOakUIChallengeListData() {
    this->HeaderCategory = NULL;
    this->NumHeaderChildren = 0;
    this->NumHeaderChildrenCompleted = 0;
    this->NumChildren = 0;
    this->NumChildrenComplete = 0;
    this->bIsUndiscovered = false;
    this->ChallengeClass = NULL;
    this->bShowAllChallenges = false;
}


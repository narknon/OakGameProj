#include "AnimNotify_Feedback.h"

UAnimNotify_Feedback::UAnimNotify_Feedback() {
    this->bApplyToAllPlayers = false;
    this->bIgnoreOwner = false;
    this->bApplyFeedbackAtRanged = false;
    this->FeedbackData = NULL;
    this->OwnerFeedbackData = NULL;
}


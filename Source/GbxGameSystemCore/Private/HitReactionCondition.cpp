#include "HitReactionCondition.h"

FHitReactionCondition::FHitReactionCondition() {
    this->Condition = NULL;
    this->Context = EHitReactionConditionContext::ReceiverOwner;
    this->OptionalContext = EHitReactionConditionContext::ReceiverOwner;
}


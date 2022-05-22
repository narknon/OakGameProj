#include "HitReactionLayer_Condition.h"

UHitReactionLayer_Condition::UHitReactionLayer_Condition() {
    this->Combine = EHitReactionConditionCombine::And;
    this->SubLayer = NULL;
}


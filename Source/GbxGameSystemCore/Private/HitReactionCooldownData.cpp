#include "HitReactionCooldownData.h"

FHitReactionCooldownData::FHitReactionCooldownData() {
    this->Tag = NULL;
    this->Cooldown = 0.00f;
    this->TagFallback = NULL;
    this->bCooldownFromStartTime = false;
}


#include "SyncedHitReactionData.h"

FSyncedHitReactionData::FSyncedHitReactionData() {
    this->Tag = NULL;
    this->Action = NULL;
    this->CensoredAction = NULL;
    this->DamageAmount = 0.00f;
    this->Force = 0.00f;
    this->HitBoneIndex = 0;
    this->Flags = 0;
}


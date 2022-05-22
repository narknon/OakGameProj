#include "GlobalAIData.h"

UGlobalAIData::UGlobalAIData() {
    this->AITimeToRememberDirectAttacks = 30.00f;
    this->AITimeToRememberNonAttackingEnemies = 10.00f;
    this->AITimeToRememberHiddenEnemies = 60.00f;
    this->JumpHitReactionDeathOverride = NULL;
    this->JumpHitLiveReactionLayer = NULL;
    this->ChanceOfPlayingFirstNoticerAggroAnimation = 0.10f;
    this->ChanceOfPlayingSecondNoticerAggroAnimation = 0.10f;
    this->bUseVariableAccuracy = false;
    this->MinAccuracy = 3.00f;
}


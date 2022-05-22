#include "OakAction_CoordinatedEffect_ActionAbility.h"

UOakAction_CoordinatedEffect_ActionAbility::UOakAction_CoordinatedEffect_ActionAbility() {
    this->OwnerPlayer = NULL;
    this->OwnerPlayerController = NULL;
    this->OwnerActionAbility = NULL;
    this->bBlocksActionAbilityShutdown = false;
    this->bIsShuttingDown = false;
}


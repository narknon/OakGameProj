#include "OakInputAbility.h"

UOakInputAbility::UOakInputAbility() {
    this->bAvailableOnLadders = true;
    this->bAvailableWhileMantling = true;
    this->bAvailableWhenReviving = true;
    this->bPauseWhenInputLocked = true;
    this->RespectGlobalLockType = EPlayerInputLockType::None;
}


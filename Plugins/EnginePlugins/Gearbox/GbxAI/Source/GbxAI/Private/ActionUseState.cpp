#include "ActionUseState.h"

FActionUseState::FActionUseState() {
    this->Controller = NULL;
    this->SmartObjectComponent = NULL;
    this->AIUseSlotComponent = NULL;
    this->State = ESmartObjectTaskState::Uninitialized;
}

